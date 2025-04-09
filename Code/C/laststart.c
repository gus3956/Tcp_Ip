#include <stdio.h>

int main(){
	int n;
	int f;
	int a = 1 ;


    while(a > 0){
		int f;
		
		printf("정수 입력 : ");
		scanf("%d", &n);
			if(n < 0)
				printf("입력 값은 0보다 작음 \r\n");
			if(n > 0)
				printf("입력 값은 0보다 크다\r\n");
			if(n == 0)
				printf("입력 값은 0이다. \r\n");

		printf("현재 횟수: %d\r\n", a);
		printf("다시 입력(ㄱ: 1 ㄴㄴ: 2): ");
		scanf("%d", &f);

      while(f == 2)
        {
			int f;
		   	printf("종료\r\n");
			a = 0;
		}
	  while(f == 1){
		  int f;
		 a++;
		  printf("다시\r\n");
	  }

	}
	return 0;
}
