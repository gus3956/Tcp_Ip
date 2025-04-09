#include <stdio.h>

int main(){
	int n;
	printf("정수 입력: ");
	scanf("%d", &n);

	if(n < 0)
		printf("입력 값은 0 보다 작다.\r\n");
	 if( n > 0)
		 printf("입력 값은 0 보다 크다.\r\n");
	 if(n == 0)
		 printf("입력 값은 0이다. \r\n");

	 return 0;
}
