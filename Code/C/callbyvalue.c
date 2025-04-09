#include <stdio.h>
#define a1 50
void swap(int ,int);
int main(){

	
	int b = 5;
	swap(a1, b);
	

	return 0;

}

void swap(int *a1, int b)
{
	int a = 0;
	a = a1;
	a1 = b;
	b = a;

}


