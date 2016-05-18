#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double x, y ;
	int n ;
	
	printf("y = x^2 + 3n\n");
	printf("Vvedite x:");
	scanf("%lf", &x);
	printf ("Vvedite n:");
	scanf ("%d", &n);
	y = (x * x) + (3 * n) ;
	printf ("y=%.0lf\n", y);
	
	system("pause");
	return 0;
}
