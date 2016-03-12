#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x, y, c;
	printf("Vvedite x:\nx=");
	scanf("%f",&x);
	
	if((x >= -3)&&(x <= 5)){
		printf("y = x * x\n");
		y = x * x;
		printf("%.1f",y);
	}else{
		if((x < -3)||(x > 5)){
			printf("c = 6 * x\n");
			c = 6 * x;
			printf("%.1f", c);
		}
	}
	return 0;
}
