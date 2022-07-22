#include <stdio.h>
#include <string.h>

#include "md5.h"

int main()
{
    char* s1 = "hello world";
    uint8_t bin1[MD5_DIGEST_LENGTH];
    uint8_t hex1[MD5_DIGEST_LENGTH * 2];
    Md5HashBuffer(s1, strlen(s1), bin1);
    Bin2Hex(bin1, MD5_DIGEST_LENGTH, hex1, 1);
    printf("plain:%s, md5:%s\n", s1, hex1);
    return 0;
}

