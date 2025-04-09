#include <stdio.h>
#include <string.h>

struct Person
{
	char name[20];
	char phonenum[20];
	int age;
};
int main(){
struct Person man1, man2;
strcpy(man1.name, "안성준");
strcpy(man2.phonenum, "010-1122-3344");
man1.age = 23;
fputs("이름 입력: ", stdout);
scanf("%s", &man2.name);

fputs("번호 입력: ", stdout);
scanf("%s", &man2.phonenum);


fputs("나이  입력: ", stdout);
scanf("%s", &man2.age);


	return 0;
}
