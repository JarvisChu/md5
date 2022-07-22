#include <stdint.h>

#define MD5_DIGEST_LENGTH	16

/* example
    char* s1 = "hello world";
    uint8_t bin1[MD5_DIGEST_LENGTH];
    uint8_t hex1[MD5_DIGEST_LENGTH * 2];
    Md5HashBuffer(s1, strlen(s1), bin1);
    Bin2Hex(bin1, MD5_DIGEST_LENGTH, hex1, 0);
    printf("plain:%s, md5:%s\n", s1, hex1);
*/

// Md5
// inBuffer: buffer to calc md5
// inBufferLen: length of inBuffer in Bytes
// outBuffer: buffer to store md5 result, outBuffer length is MD5_DIGEST_LENGTH
void Md5HashBuffer(const void* inBuffer, uint32_t inBufferLen, uint8_t *outBuffer);

// Bin2Hex
// inBuffer: binary buffer
// inBufferLen: length of binary buffer in Bytes
// outHexBuffer: buffer to store Hex result, outBuffer length is inBufferLen * 2
// lowCase: 0 hex in upper case, other in low case
void Bin2Hex(const void* inBuffer, uint32_t inBufferLen, uint8_t* outHexBuffer, int lowCase);

