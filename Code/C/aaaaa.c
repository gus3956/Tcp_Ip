#include <stdio.h>

int main(){
	int a = 0;
	int b = 0;

	while(a<5)
	{

		

	  while(b<a)
	  {
		  printf("o");
		  b++;
	  }
	  printf("*\r\n");
	  b = 0;
	  a++;
	  
	}
	return 0;
}
