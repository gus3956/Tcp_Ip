#include <stdio.h>
#include <stdlib.h>
int main(){
	int random =0;
	random = rand()%9;
	int is = 0;

	while(random < 10);
	{
		is = 1;
		while(is < 10)
		{
			printf("%dX%d = %d\r\n", random, is, random*is);
			is++;
		}
		random++;
	}
	return 0;
}
