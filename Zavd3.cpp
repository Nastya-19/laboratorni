#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{
	setlocale(0,"");
	int x, y ;
	printf("������� ����� x:");
	scanf("%1f",&x) ;
	printf("������� ����� y:");
	scanf("%1.f",&y);
	printf("c=%.0lf\n"); 
	int c = x - y;

	return 0;
}
