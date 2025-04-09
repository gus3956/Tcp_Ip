#include <stdio.h>

int main(){

	int ch1  = 0;
	int ch2 = 0;
	ch1 = getchar();
		ch2 = fgetc(stdin);
	putchar(ch1); // 문자로 변환
	fputc(ch2, stdout);
	return 0;
}
