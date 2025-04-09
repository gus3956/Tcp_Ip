#include <stdio.h>

int main(){
	int c =  2;
	int is = 0;

	for(c = 2; c < 10; c++){
		
		for(is =1;is < 10; is++){
			printf("%dx%d = %d \r\n", c, is, c * is);
			}
	}
	return 0 ;
}
