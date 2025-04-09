#include <stdio.h>

int main(){

int a =1;

int b = a++;

printf("%d\r\n",a);
printf("%d\r\n",b);

{

	int a =1;
	int b= a++ + ++a;
	printf("%d\r\n", a);
printf("%d\r\n", b);

}

{
	int a = 1;
	int b = a-- + a;
	printf("%d\r\n",a);
	printf("%d\r\n",b);

}


{

int a =1;
printf("%d\r\n",a);
int b = a++;
printf("%d\r\n",a);

}
return 0;






}
