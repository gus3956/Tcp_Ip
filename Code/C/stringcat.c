#include <stdio.h>
#include <string.h>

int main(){
	char str1[20] = "First~";
	char str2[20] = "Second";

	char str3[20] = "Simple num: ";
	char str4[20] = "1234567890";

	strcat(str1, str2);
	puts(str1);

	strncat(str3, str4, 7);
	puts(str3);
	return 0;
}
