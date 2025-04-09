#include <stdio.h>

static void simplefunc():
	int main (){

		return 0;

	}

void simplefunc()
{
	static int number1 = 0;
	int number2 = 0;
	++number1;
	++number2;
	printf("static: %d, local: %d \r\n", number1, number2);
}
