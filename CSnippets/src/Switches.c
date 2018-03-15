
#include <stdio.h>

int main_switch() {
	int n;
	// getchar() bezieht Nutzereingabe von der Konsole
	char c = getchar();
	// Casten eines chars zu einem int
	n = c - '0';

	// Die Switch-Anweisung nimmt als Vergleichsargument nur Zahlen, Zeichen
	// oder Enumerationen (enum)
	switch (n) {
		case 1:
			printf("Exiting");
			break;
		default:
			printf("You pressed %d", n);
			break;
	}
}
