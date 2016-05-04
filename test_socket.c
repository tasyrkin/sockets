#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>

#include <sys/socket.h>

int main(int argc, char** argv) {

  int sock_fd = socket(PF_INET, SOCK_STREAM, 0);
  if (sock_fd == -1) {
    printf("Unable to open sock_fd: %d\n", errno);
    exit(1);
  }
  printf("Successfully opened a sock_fd: %d\n", sock_fd);
 
  struct sockaddr_in serv_addr;
  memset(&serv_addr, 0, );

  connect(sock_fd, )

  int close_res = close(sock_fd);
  if (close_res == -1) {
    printf("Unable to close sock_fdet: %d\n", errno);
  }
  printf("Successfully closed sock_fdet\n");

  return 0;
}
