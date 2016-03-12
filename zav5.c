#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	printf("Skol'ko vam let?\t");
	scanf("%d", &n);
	
	if ((n%10==1)) {
		printf("Vam %d god\n", n);
	} else {
		if ((n%10==2) || (n%10==4) || (n%10==3)) {
			printf("Vam %d goda\n", n);
		} else {
			if ((n%10==5) || (n%10==0)) {
				printf("Vam %d let\n", n);
			} else {
				if ((n%10>=6) && (n%10<=9)) {
					printf("Vam %d let\n", n);
				}
			}
		}
	}
	
	system("pause");
	return 0;
}
