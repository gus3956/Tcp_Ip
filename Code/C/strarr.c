#include <stdio.h>

struct Point
{
	int x_pos;
	int y_pos;
};

int main(){
	struct Point arr[3];
	for(int i = 0; i < 3; i++)
	{
		printf("점의 좌표 입력: ");
		scanf("%d %d", &arr[i].x_pos, &arr[i].y_pos);
	}

	for(int i = 0; i < 3; i++)
	{
		printf("[%d, %d] ", arr[i].x_pos, arr[i].y_pos);
	}

	return 0;
}
