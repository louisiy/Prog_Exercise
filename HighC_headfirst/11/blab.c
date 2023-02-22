#include <sys/socket.h>
int listener_d = socket(PF_INET, SOCK_STREAM, 0);
if (listener_d == -1)
error("无法打开套接字");