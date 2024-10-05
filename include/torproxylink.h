#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define PROXY_ADDRESS "127.0.0.1"
#define PROXY_PORT 9050

typedef unsigned char int8;
typedef unsigned short int int16;
typedef unsigned int int32;

/* +----+----+----+----+----+----+----+----+----+----+....+----+
 * https://www.openssh.com/txt/socks4.protocol
		| VN | CD | DSTPORT |      DSTIP        | USERID       |NULL|
		+----+----+----+----+----+----+----+----+----+----+....+----+
 # of bytes:	   1    1      2              4           variable       1 */

typedef struct proxy_request_packet Request;

struct proxy_request_packet {
    int8 vn;
    int8 cd;
    int16 dstport;
    int32 dstip;
    unsigned char userid[8];
};

/* +----+----+----+----+----+----+----+----+
 * https://www.openssh.com/txt/socks4.protocol
		| VN | CD | DSTPORT |      DSTIP        |
		+----+----+----+----+----+----+----+----+
 # of bytes:	   1    1      2              4 */

typedef struct proxy_request_packet Response;

struct proxy_response_packet {
 int8 vn;
 int8 cd;
 int16 _;
 int32 __;
};


