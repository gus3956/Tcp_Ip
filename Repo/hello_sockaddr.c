#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>



struct mysockaddr_in{

    unsigned short sin_family;
    struct myin_addr sin_addr;
   uint16_t sin port;

int main()
{
  struct mysockaddr_in myaddr;
  const char * serv_ip = "127.0.0.1";
  const char * serv_port ="8090";

  memset(&myaddr, 0, sizeof(myaddr);
  myaddr.sin_family = AF_INET;
  myaddr.sin_addr.s_addr = inet_addr(serv_ip);
  myaddr.sin_port = htons(atoi(serv_port));

  printf("sin_family: %d\n", myaddr.sin_family);
  printf("sin_addr: %#x\n", myaddr.sin_addr);
  printf("sin_port; %#x\n", myaddr.sin_port);
return 0;
}
