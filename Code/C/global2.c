#include <stdio.h>

void recursive(int);

int main(){
	recursive(3);

	return 0;
}

void recursive(int num){
	if(num <= 0)
		return;
	printf("recursive call! %d \r\n", num);
	recursive(num - 1);
}
