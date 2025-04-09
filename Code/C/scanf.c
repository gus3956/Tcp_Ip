#include <stdio.h>

int main(){
	int lx,ly;
	int rx,ry;
	unsigned int r1;

	printf("좌 상단의 x,y 좌표: ");
	scanf("%d %d",&lx, &ly);
	printf("우 하단의 x,y 좌표: ");
	scanf("%d %d", &rx, &ry);

	r1 = (lx - rx) * (ry - ly);
	printf("두 점이 이루는 직사각형의 넓이는 %d입니다.\r\n", r1);
	{
		double x1,y1;
		double r1;
     printf("x,y 실수 좌표: ");
     scanf("%lf %lf",&x1,&y1);
     r1 = x1 * y1;
	 printf("결과: %f\r\n", r1);
	 
	}

	{
		char x2;
		

		printf("알파벳 문자 열 하나: ");
		scanf("%c",&x2);

		printf("결과는:%d\n",x2);

	}
	return 0;
}
	
