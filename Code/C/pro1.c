#include <stdio.h> //구구단

int main(){
    int i = 0;
	int num1 = 0;
	int num2 = 0;
	printf("두 개의 정수 입력: ");
	scanf("%d %d" , &num1, &num2);
    if(num1 > num2)
	{
		int n = 0;
		n = num1;
		num1 = num2;
		num2 = n;
	}

for(i = i + num1; i < num2+1; i++)
{ 
	for(int j = 1; j < 10; j++)
	{
		printf("%dx%d = %d\r\n", i,j, i*j);
	}

}
   
return 0;
}

