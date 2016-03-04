#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int mas [100];
	int n, i;
	printf ("Rozmir masiva:");
	scanf ("%d", &n);
	i = 0;
	while (i < n){
		printf("mas [%d] = ", i);
		scanf("%d", &mas [i]);
		i++;
	}
	return 0;
}
