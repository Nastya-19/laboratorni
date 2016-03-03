#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int t;
	printf("Kotra goduna?:");
	scanf("%d", &t);
	if ((t >= 6) && (t <= 12)){
		printf("Dobrogo ranky\n");
	} else {
		if ((t >= 12) && (t <= 18)) {
			printf("Dobrogo dnya\n");
		} else {
			if ((t >= 18) && (t <= 24)){
				printf("Dobrogo vechora\n");
			} else {
				if ((t >= 0) && (t <= 6)) {
					printf("Sladkih snov\n");
				}
			}
		}
	}
	system("pause");
	return 0;
}
