#include <stdio.h>
#include <string.h>
void removebsn(char *);
int main(){
char str[100];
printf("문자열 입력: ");
fgets(str, sizeof(str), stdin);
printf("길이: %ld, 내용: %s \r\n", strlen(str), str);

removebsn(str);
printf("길이: %ld, 내용: %s \r\n", strlen(str), str);

return 0;

}

void removebsn(char str[])
{
	int len = strlen(str);
	str[len - 1] = 0;
}
