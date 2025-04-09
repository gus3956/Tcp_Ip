#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int sum(int, int);
int mult(int, int);
int division(int, int);
int main(int argc, const char * argv[])
{

for(int i= 0; i < argc; i++)
{
	printf("%d번째 문자열 %s \r\n", i+1,  argv[i]);
}
int number1 = (int)atoi(argv[1]);
int number2 = (int)atoi(argv[2]);
if(number2 > number1)

{
 int temp = 0;
	temp = number1;
	number1 = number2;
	number2 = temp;
}

printf("%d \t %d\r\n", number1, number2);
printf("%d \r\n", sum(number1, number2));
printf("%d \r\n", mult(number1, number2));
printf("%d \r\n", division(number1, number2));



return 0;
}

int sum(int number1, int number2)
{
	return number1 + number2;
}
int mult(int number1, int number2){
	return number1 * number2;
}
int division(int number1 , int number2){
	return number1 / number2;
}
