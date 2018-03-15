
#include <stdio.h>

int main_switch() {
	int n;
	char c = getchar();
	n = c - '0';

	switch (n) {
		case 1:
			printf("Exiting");
			break;
		default:
			printf("You pressed %d", n);
			break;
	}
}
