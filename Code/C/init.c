#include <stdio.h>

struct Point{
	int x_pos;
	int y_pos;
};

int main(){
	struct Point pos1 = {1, 2};
	struct Point pos2 = {100, 200};
	struct Point * pptr = &pos1;

	(*pptr).x_pos += 4;
	(*pptr).y_pos += 5;
	printf("[%d, %d] \r\n", pptr -> x_pos, pptr -> y_pos);

	pptr = &pos2;
	pptr -> x_pos += 1;
	pptr -> y_pos += 2;
	printf("[%d, %d] \r\n", (*pptr).x_pos, (*pptr).y_pos);
	return 0;
}
