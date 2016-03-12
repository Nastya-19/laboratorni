#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	printf("Vvedite god:");
	scanf("%d", &x);
	if (x%400==0) {
		printf("Etot god ne visokosnuy\n");
	} else {
		if (x%100==0) {
			printf("Etot god ne visokosnuy\n");
		} else {
			if (x%4==0) {
				printf("Etot god visokosnuy\n");
			} else {
				printf("Etot god ne visokosnuy");
			}
		}
	}
	system("pause");
	return 0;
}
