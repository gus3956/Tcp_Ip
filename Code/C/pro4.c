#include <stdio.h>

int main(){
	int num1 = 1;
	int b = 0;
	int c = 0;

	printf("소수 몇 개까지 출력 원하십니까?: ");
	scanf("%d" , &c);

	for(int i = 1; i <= num1; i++) 
	{
		int a = 0;

	for(int j = 1; j <= i; j++)
	{
		if( i % j == 0) 
			a++; 

	}
	  
	  
       if( a == 2 ) // 1과 자신만 있을때 출력
	   { 
		   printf("%d " , i);
		   b++;
	   }
      if(b == c) // c 갯수만큼 출력
	  return 0;

	  num1++;
	}
	
	return 0;
}
