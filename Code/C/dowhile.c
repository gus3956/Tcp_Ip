#include <stdio.h>

int main(){
	int t = 0;
	int num =0;

	do
	{
		printf("정수 입력(0 to quit): ");
		scanf("%d" , &num);
		t += num;

	}
	while(num!=0);
	printf("합계: %d\r\n", t);
	return 0;
}
