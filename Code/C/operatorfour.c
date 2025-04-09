#include <stdio.h>
#define n1 10
#define n2 12
int main(){

    int r1, r2, r3;

	r1 = (n1 == 10 && n2 ==12);
	r2 = (n1 < 12 || n2 > 12);
    r3 = (!n1);

printf("r1: %d\r\n", r1);
printf("r2: %d\r\n", r2);
printf("r3: %d\r\n", r3);
return 0;
}

