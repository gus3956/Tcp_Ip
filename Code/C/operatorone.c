#include <stdio.h>

int main(void){
	int num1 = 9; 
	int num2 = 2;
	printf("%d+%d=%d \r\n", num1,num2, num1+num2);
	printf("%d-%d=%d \r\n", num1, num2, num1 - num2);
	printf("%dX%d=%d \r\n", num1,num2,num1*num2);
	printf("%d/%d=%d \r\n",num1,num2,num1/num2);
	printf("%d/%d의 몫 = %d \r\n",num1,num2,num1/num2);
	printf("%d/%d의 나머지=%d \r\n", num1,num2,num1%num2);
	int i=0;
for(i=0;i<10;i++){
	num1++;
	num2--;
}
printf("%d,%d\r\n",num1,num2);	
return 0;
}
