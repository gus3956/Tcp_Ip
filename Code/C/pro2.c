#include <stdio.h>
int qust(int, int);

int main(){
   int n1 = 0;
   int n2 = 0;

   int a = 0;
   printf("두 개의 정수 입력: ");
   scanf("%d %d", &n1, &n2);

   if(n1 < n2) // n1 n2 순서 바꾸기
   { 
	   a = n1;
	   n1 = n2;
	   n2 = a;
   }

printf("G C M : %d\r\n", qust(n1,n2));
return 0;
}


int qust(int n1, int n2) // 유클리드 호제법
{

int b = n1 % n2;
n1 = n2;
n2 = b;
	if(b == 0)

		return n1;
	else

	return qust(n1, b);
    
}
