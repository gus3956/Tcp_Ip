#include <stdio.h>

int main(){
	double num = 3.14;
	double *ptr = &num;
	double **dptr = ptr;
	
	printf("%9p %9g \r\n", ptr, **dptr);

	return 0;
}
