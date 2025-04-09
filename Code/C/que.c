#include <stdio.h>

int compare_max (int, int,int);
int compare_min(int, int, int);

int main(){
	int n1,n2,n3;
	printf("세 개의 정수 입력: ");
	scanf("%d %d %d", &n1, &n2, &n3);
	printf("가장 큰 수 : %d\r\n" , compare_max(n1,n2,n3));
	printf("가장 작은 수: %d\r\n", compare_min(n1,n2,n3));
	return 0;
}
int compare_max(int n1, int n2, int n3)
{
	if(n1 > n2 && n1 > n3)
		return n1;
	else if ( n2 > n1 && n2 > n3)
		return n2;
    else 
		return n3;
}
int compare_min(int n1, int n2, int n3)
{
	if( n1 < n2 && n1 < n3)
		return n1;
	else if ( n2 < n1 && n2 < n3)
		return n2;
	else 
		return n3;
}

