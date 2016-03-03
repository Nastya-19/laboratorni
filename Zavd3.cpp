#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{
	setlocale(0,"");
	int x, y ;
	printf("¬ведите число x:");
	scanf("%1f",&x) ;
	printf("¬ведите число y:");
	scanf("%1.f",&y);
	printf("c=%.0lf\n"); 
	int c = x - y;

	return 0;
}
