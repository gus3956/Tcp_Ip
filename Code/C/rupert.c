#include <stdio.h>

int main(){

	int x;
	printf("숫자 아무거나: ");
	scanf("%d",&x);
x = ~x;
x += x;
	printf("결과 : %d\r\n", x);

	return 0;
}

