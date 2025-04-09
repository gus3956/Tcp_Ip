#include <stdio.h>

int main(){

	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	int r1 = 0;
int r2 =0;
	printf("두개 정수 입력: ");
	scanf("%d %d",&n1, &n2);
    r1 = n1 - n2;
	r2 = n1 * n2;
	printf("빼기: %d, 곱셈: %d\r\n", r1, r2);

	
	{
		int n1 = 0;
		int n2 = 0;
		int n3 = 0;
		int r1 = 0;
		printf("세 개 정수 입력: ");
		scanf("%d %d %d",&n1, &n2, &n3);

		r1 = n1 * n2 + n3;
		printf("결과 : %d\r\n", r1);

	}
	{
		int n1 =0;
		int r1 = 0;
		printf("정수 1개 입력: ");
		scanf("%d" , &n1);

		r1 = n1*n1;

		printf("결과 : %d\r\n", r1);
	}
	{
		int n1 = 0;
		int n2 = 0;
		int r1 = 0;
		int r2 = 0;

		printf("정수 2개만: ");
		scanf("%d %d", &n1 , &n2);

		r1 = n1 / n2;
		r2 = n1 % n2;

		printf("결과 : 몫 %d 나머지 %d\r\n", r1, r2);
	}
	{
		int n1,n2,n3;
		int r1;

		printf("정수 3개: ");
		scanf("%d %d %d", &n1, &n2, &n3);

		r1 = (n1 - n2) * (n2 + n3) * (n3 % n1);

		printf("결과 : %d\r\n", r1);
	}
	return 0;



}
