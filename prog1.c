#include <stdio.h>
#include <stdlib.h>

float y (float x, float a, float b)
{
	float y;
	y = a + b * x;
	return y;
} 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 float y1;
	 y1 = y(3, 1, 1);
	 printf ("y=%.0f\n", y1);
	
	system("pause");
	return 0;
}
