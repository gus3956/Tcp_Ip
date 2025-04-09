#include <stdio.h>
#include <time.h>
int main(){
int sum = 0;
time_t start = time(NULL);
int d = 1;
int a = 0;
int c = 0;

printf("로그인 창 : ");
scanf("%d", &sum); 
while(d){
	printf("초기화 1, 종료 2 : ");
	scanf("%d", &a);
	

if(a == 1){
	system("pause");
	main();
}
else if (a == 2){
	d--;
}
}
time_t end = time(NULL);
printf("소요시간: %lf\r\n", (double)(end - start));
	return 0;
}
