#include <stdio.h>

int main(){

	int num;
	printf("정수 입력: ");
	scanf("%d", &num);

	if(num < 0){
		printf("입력 값은 0보다 작다. \r\n");
	}
	else if( num > 0 )
	{
		printf("입력 값은 0보다 크다. \r\n");
	}
	else 
	{
		printf("입력 값은 0이다. \r\n");
	}
	return 0;
}
