/*
 * Source: https://www.roboter.cc/index.php?option=com_content&view=article&id=2&catid=6
 * Kapitel 14
 *
 * Mit diesem Programm kann der NIBObee umherfahren. Wenn mit den Fühlern
 * Hindernisse detektiert werden, versucht der NIBObee diesen auszuweichen.
 */


#include <nibobee/iodefs.h>
#include <nibobee/motpwm.h>
#include <nibobee/delay.h>
#include <nibobee/sens.h>

// Festlegen der eigenen Modi
enum {
  MODE_STOP,
  MODE_DRIVE,
  MODE_BACK,
  MODE_STEER_R,
  MODE_STEER_L,
  MODE_AVOID_R,
  MODE_AVOID_L
};

// Globale Variablen deklarieren
int16_t speed_l;
int16_t speed_r;
uint16_t counter_ms;

// Funktionen deklarieren, damit sie in der main() genutzt werden können
uint8_t perform_check(uint8_t mode);

uint8_t do_stop();
uint8_t do_drive();
uint8_t do_back();
uint8_t do_steer_r();
uint8_t do_steer_l();
uint8_t do_avoid_r();
uint8_t do_avoid_l();


int main() {
  // Initialisierung der Motoren und Sensoren
  motpwm_init();
  sens_init();

  uint8_t mode;

  while(1==1) {
	// Interrupts des Controllers einschalten und kurz warten
    enable_interrupts();
    delay(1);

    // Modus abfragen...
    mode = perform_check(mode);

    // ...erneut Modus setzen...
    switch (mode) {
      case MODE_STOP:    mode = do_stop(); break;
      case MODE_DRIVE:   mode = do_drive(); break;
      case MODE_BACK:    mode = do_back(); break;
      case MODE_STEER_R: mode = do_steer_r(); break;
      case MODE_STEER_L: mode = do_steer_l(); break;
      case MODE_AVOID_R: mode = do_avoid_r(); break;
      case MODE_AVOID_L: mode = do_avoid_l(); break;
    }

    // ...und dementsprechend eine Aktion ausführen
    switch (mode) {
      case MODE_STOP:    speed_l =    0; speed_r =    0; break;
      case MODE_DRIVE:   speed_l =  500; speed_r =  500; break;
      case MODE_BACK:    speed_l = -500; speed_r = -500; break;
      case MODE_STEER_R: speed_l =  600; speed_r =  400; break;
      case MODE_STEER_L: speed_l =  400; speed_r =  600; break;
      case MODE_AVOID_R: speed_l = -400; speed_r = -600; break;
      case MODE_AVOID_L: speed_l = -600; speed_r = -400; break;
    }

    // Motor seine Geschwindigkeit mitteilen
    motpwm_setLeft(speed_l);
    motpwm_setRight(speed_r);
  }
  return 0;
}

uint8_t perform_check(uint8_t mode) {
  if (sens_getLeft() && sens_getRight()) {
    if ((sens_getLeft()==-1) && (sens_getRight()==-1)) {
      mode = MODE_BACK;
    } else {
      mode = MODE_STOP;
    }
  }
  return mode;
}


uint8_t do_stop() {
  if ((sens_getLeft()==0) && (sens_getRight()==0)) {
    return MODE_DRIVE;
  }
  return MODE_STOP;
}

uint8_t do_back() {
  if (sens_getLeft()==0) {
    return MODE_AVOID_L;
  }
  if (sens_getRight()==0) {
    return MODE_AVOID_R;
  }
  return MODE_BACK;
}

uint8_t do_drive() {
  if (sens_getRight()==1) {
    return MODE_STEER_L;
  }
  if (sens_getLeft()==1) {
    return MODE_STEER_R;
  }
  if (sens_getRight()==-1) {
    return MODE_AVOID_L;
  }
  if (sens_getLeft()==-1) {
    return MODE_AVOID_R;
  }
  return MODE_DRIVE;
}

uint8_t do_steer_r() {
  if (sens_getLeft()==0) {
    return MODE_DRIVE;
  }
  return MODE_STEER_R;
}

uint8_t do_steer_l() {
  if (sens_getRight()==0) {
    return MODE_DRIVE;
  }
  return MODE_STEER_L;
}

uint8_t do_avoid_r() {
  if (counter_ms==0) {
    counter_ms=1000;
  } else {
    counter_ms--;
  }
  if (counter_ms) {
    return MODE_AVOID_R;
  } else {
    return MODE_DRIVE;
  }
}

uint8_t do_avoid_l() {
  if (counter_ms==0) {
    counter_ms=1000;
  } else {
    counter_ms--;
  }
  if (counter_ms) {
    return MODE_AVOID_L;
  } else {
    return MODE_DRIVE;
  }
}
