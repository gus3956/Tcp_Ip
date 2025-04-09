#include <stdio.h>

int main(){

	int num = 0;

	printf("현재 당신이 소유하고 있는 금액 : ");
	scanf("%d", &num);

	if(500 + 700 + 400 >  num)
	{
		printf("물건 하나이상 못삽니다. 다시 입력하세요. \r\n");
	
		main();
	}
	for(int i = 1; i < num / 500; i++)
	{
		for(int j = 1; j < num / 700; j++)
		{
			for(int k = 1; k < num / 400; k++)
			{

	if(500 * i + 700 * j + 400 *  k == num) // (i > 0 && j > 0 && k >0)
	printf("크림빵 : %d개, 새우깡 : %d개, 콜 라 : %d개\r\n", i, j, k);
    

			}

		}
	}



	return 0;

}
