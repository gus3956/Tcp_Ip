#include <stdio.h>
void over(int *, int);
int main(){
    
	int arr[10]= {0, };
	int arr1[10] = {0, };
	int arr2[10] = {0, };
int num1 = 0;
int num2 = 0;
	int num3 = 0;
	printf(" 총 10개의 숫자 입력\r\n");

	
	
	for(int i = 0; i < 10; i++)
	{
	printf(" 입력 : ");
    scanf("%d", &arr[i]);

	if(arr[i] % 2 == 0)
		arr1[num1++] = arr[i];
	else
		arr2[num2++] = arr[i];
	}	

printf("홀수 출력");
over(arr2, num1);
printf("짝수 출력");
over(arr1, num2);
	return 0;
}

	void over(int *param, int len)
	{

	for(int j = 0; j < len; j ++)
	{
	printf(" %d\r\n", param[j]);
	}



}
