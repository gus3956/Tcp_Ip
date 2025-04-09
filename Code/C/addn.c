#include <stdio.h>

int main(){
	int t = 0;
	int i = 0;
	int num = 0;
	printf("0부터 num까지의 덧셈, num은 " );
	scanf("%d", &num);

	for(i=0; i < num + 1; i++)
		t += i;

	printf("0부터 %d까지 덧셈결과: %d \r\n",num, t);
	return 0;
}
