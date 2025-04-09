#include <stdio.h>

int add(int,int);

void showaddresult(int);

int readnum(void);

void howtouserthisprog(void);

int main()
{
	int r1, n1, n2;
	howtouserthisprog();
	n1 = readnum();
	n2 = readnum();
	r1 = add(n1,n2);
	showaddresult(result);
	return 0;
}

int add(int n1, int n2)
{
	return n1 + n2;
}

void showaddresult(int num){
	printf(" 덧셈결과 출력: %d \r\n", num);
}

int readnum(void)
{
	int num;
	scanf("%d", &num);
	return num;
}
void howtousethisprog(void)
{
	printf("두개 정수 출력\r\n");
	printf("정수 입력\r\n");
}

