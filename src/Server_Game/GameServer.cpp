#include <iostream>
#include <sstream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <sys/termios.h>
#include <ctype.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <unistd.h>
#include <signal.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/time.h>
#include <stdlib.h>
#include <memory.h>
#include <ifaddrs.h>
#include <net/if.h>
#include <stdarg.h>
#include "types.h"
using namespace std;

// Создание слушающего сокета
int make_listen_sock(unsigned short int port){
        int soc_fd;

        if((soc_fd = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
                perror("socket");
                exit(1);
        }

        struct sockaddr_in addr;
        addr.sin_family = AF_INET;
        addr.sin_port = htons(port);
        addr.sin_addr.s_addr = INADDR_ANY;

        if (0 != bind(soc_fd, (struct sockaddr *) &addr, sizeof(addr))) {
                perror("bind");
                exit(2);
        }

        if (listen(soc_fd, 5) == -1){
                perror("listen");
                exit(3);
        }

        return soc_fd;
}

int main(int argc, char *argv[])
{
	unsigned short port = (argc > 1 ? atoi(argv[1]):1799);
	
        int listen_sock = make_listen_sock(port);
	while(1){
		door = doors[i];
		++i;

	}
    return 0;
}
