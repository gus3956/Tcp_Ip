#include <stdio.h>
void add(int);
static int num = 0;


int main(){

	printf("num : %d \r\n", num);
	add(3);
	printf("num : %d \r\n",num);
	num ++;
	printf("num: %d \r\n",num);

	return 0;
}

void add(int val)
{
	num += val;
}
