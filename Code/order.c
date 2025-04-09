#include <stdio.h>

void main(){

int n = 0x1234567;
char* pn = &n;

printf("n: %#x\n", n);
printf("&n : %p\n", &n);
printf("1st: %p, %#x\n", &(*pn), *pn);
printf("2st: %p, %#x\n", &(*(pn+1)), *(pn+1));
printf("3rd: %p, %#x\n", &(*(pn+2)), *(pn+2));
printf("long : %ld\n", sizeof(long int));
printf("short : %ld\n", sizeof(short));

return 0;
}
