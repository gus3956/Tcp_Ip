#include <stdio.h>
#include <math.h>
int main(){
	double pi = 3.1415922653589793;
	int width = 50; // 한줄의 가로길이 설정(곡선을 시각적으로 맞춤)
	int height = 20; // 높이 제한(터미널에서 적절한 크기 유지)
	int steps= 50;// 부드러운 곡선(클수록 부드러움)

	for (int i = 0; i < steps; i++)
	{
		double x =(double) i / steps * 2 * pi; // 0 ~ 2 * 3.14 범위
		double y = sin(x); 

		int pos = (int)((y + 1) * (width / 2)); //0 ~ width로 변환

		for(int j = 0; j < pos; j++)
		{
			printf(" ");
		
		} 
		printf("*\n");
	}
	return 0;

}
