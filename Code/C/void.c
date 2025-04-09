#include <stdio.h>
void sosimplefunc(void);
int main(){
int num = 20;
void * ptr;

ptr = &num;
printf("%p \r\n", ptr);
ptr = sosimplefunc;
printf("%p \r\n", ptr);


	return 0;

}

void sosimplefunc(void){
	printf("I'm so simple");
}
