#include <stdio.h>
int jack(int, int);
int main()
{
	int n = 0;
	int num1 = 0;
	int num = 0;
 printf("정수 입력 : ");
 scanf("%d", &num);
 printf("제곱 입력 : ");
 scanf("%d", &num1);
 printf("%d의 %d승은 %d이다\r\n",num, num1, jack(num,num1));

	return 0;
}

int jack(int n, int k){
	
	if( k == 0)
		return 1;

	else
      return  n * jack(n, k - 1);
}

