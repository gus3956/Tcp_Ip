#include <stdio.h>

int main(){
	char ch = 9;
	int inum = 1052;
	double dnum = 3.1415;

	printf("변수 ch의 크기: %d \r\n", sizeof(ch));
	printf("변수 inum의 크기: %d \r\n", sizeof(inum));
	printf("변수 dnum의 크기: %d \r\n", sizeof(dnum));

	printf("char의 크기: %d \r\n", sizeof(char));
	printf("double의 크기: %d \r\n", sizeof(double));
	printf("long의 크기: %d \r\n", sizeof(long));
	printf("long long의 크기: %d \r\n", sizeof(long long));
	printf("float의 크기: %d \r\n",sizeof(float));
	printf("int 의 크기: %d \r\n", sizeof(int));
	return 0;

}
