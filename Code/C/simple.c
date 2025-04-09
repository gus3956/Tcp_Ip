#include <stdio.h>

int main(){


int r;
int n1, n2;

printf("정수 one : ");
scanf("%d", &n1);
printf("정수 two : ");
scanf("%d", &n2);


r = n1 + n2;
printf("%d + %d = %d \r\n", n1,n2,r);
{
	int n1,n2,n3;
	int r1;

	printf("세 개의 정수 입력: ");
	scanf("%d %d %d", &n1, &n2, &n3);

	r1 = n1 + n2 + n3;
	printf("%d + %d + %d = %d \r\n", n1, n2, n3, r1);

}

return 0;
}
