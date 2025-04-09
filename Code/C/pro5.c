#include <stdio.h>

int main(){
int num1 = 0;
int first = 0;
int second = 0;
int three = 0;
printf("초(second) 입력: ");
scanf("%d", &num1);
first = num1 / 3600;
second = (num1 % 3600) / 60;
three = num1 % 60;

printf("[h: %d, m: %d, s: %d]\r\n",first, second, three);
	return 0;

}
