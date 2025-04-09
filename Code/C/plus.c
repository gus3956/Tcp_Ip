#include <stdio.h>
int plus(int, int);
int main(){
int num1 = 0;
int num2 = 0;

int (*ptr)(int, int) = plus;
ptr = plus;
int result1 = (*plus)(10,20);
int result2 = ptr (10, 20);

ptr(10,20);

	return 0;
}

int plus(int n1, int n2)
{
printf("%d + %d = %d \r\n", n1 , n2, n1 + n2);

}
