#include <stdio.h>

int main(){
	int num1 = 100;
	int num2 = 100;

	int *pnum;

	pnum = &num1;
	(*pnum) += 30;

	pnum  = &num2;
	(*pnum) -= 30;

	printf("num : %d, num2 : %d \r\n", num1, num2);
	return 0;
}

