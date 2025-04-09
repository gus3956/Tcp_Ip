#include <stdio.h>
#include <math.h>

struct Point
{
   int x_pos;
   int y_pos;
};

int main(){
struct Point pos1, pos2;
double distance = 0.0;

fputs("point1 pos : ", stdout);
scanf("%d %d", &pos1.x_pos, &pos1.y_pos);

fputs("point2 pos : ", stdout);
scanf("%d %d", &pos2.x_pos, &pos2.y_pos);

distance = sqrt((double)((pos1.x_pos - pos2.x_pos) * (pos1.x_pos - pos2.x_pos) +
			(pos1.y_pos - pos2.y_pos) * (pos1.y_pos - pos2.y_pos)));

printf("두 점의 거리는 %g 입니다. \r\n", distance);

	return 0;
}
