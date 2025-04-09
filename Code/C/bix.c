#include <stdio.h>

int main(){

	int n1 = 15;
	int n2 = 20;
	int n3 = n1 ^ n2;
	printf("XOR 연산의 결과: %d \r\n" , n3);

	{
		int n2 = ~n1;
		printf("NOT 연산의 결과: %d \r\n", n2);
	}
	return 0;
}
