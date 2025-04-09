#include <stdio.h>
#include <stdlib.h>

int main(){
int dan = 0;
int num = 1;
int result;
printf("숫자 :");
scanf("%d", &dan);

while(num < 10){
	printf("%dX%d = %d \r\n",dan, num, dan*num);
	num++;
}

return 0;
}

