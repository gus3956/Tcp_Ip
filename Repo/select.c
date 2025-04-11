#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/selcet.h>

int main()
{

fd_set read_fds;
struct timeval timeout;
int ret;
FD_ZERO(&read_fds);
FD_SET(0, &read_fds);
timeout.tv_sec = 5;
timeout.tv_usec = 0;
puts("5초 동안 입력을 기다립니다.");

ret = select(1, &read_fds, NULL, NULL,  &timeout);
if(ret== -1){
perror("select () failed");
return 1;
}
else if(ret == 0){
puts("시간 초과 ! 입력이 없습니다");
}else
{
if(FD_ISSET(0, &read_fds){
char buf[1024];
fgets(buf, sizeof(buf), stdin);
printf("입력받은: %s \n", buf);
}
}
return 0;
}
