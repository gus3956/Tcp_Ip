#include <stdio.h>
void swapintptr(int *,int * );

int main(){

	int num1 = 10;
	int num2 = 20;

	int *ptr1 = &num1;
	int *ptr2 = &num2;
	printf("*ptr1, *ptr2: %d %d \r\n", *ptr1, *ptr2);

	swapintptr(ptr1, ptr2);
	printf("*ptr1, *ptr2: %d %d \r\n", *ptr1, *ptr2);
	return 0;


}

void swapintptr(int *ptr1, int *ptr2){
	int * temp= ptr1;
	ptr1 = ptr2;
	ptr2 = temp;


}
