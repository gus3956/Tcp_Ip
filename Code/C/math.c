#include <stdio.h>
#include <math.h>

#define PI 3.14159265
#define HEIGHT 10
#define WIDTH 40

int main(){
	int i,j;
	for(i = 0; i < WIDTH; i++)
	{
		double angle = (2 * PI * i) / WIDTH;
		double sine_value = sin(angle);

		int pos = (int)((sine_value * HEIGHT) / 2 ) + HEIGHT / 2;

		for(j = 0; j < HEIGHT; j++){
			if ( j == pos)
				printf("*");
			else
				printf(" ");
		}
		printf("\r\n");
	}
	return 0 ;
}
