/* torproxylink.c */

#include <stdlib.h>
#include "../include/torproxylink.h"

/* /.torproxylink 127.0.0.1 8080 */

int main(int argc, char *argv[]) {

    char *host_addr;
    long host_port;

    if (argc < 3) {
        fprintf(stderr, "Usage: %s <host> <port> \n",
                argv[0]);
        return -1;
    }
    host_addr = argv[1];

    char *endptr;
    errno = 0;
    host_port = strtol(argv[2], &endptr, 10);


}