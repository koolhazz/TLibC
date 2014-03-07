#ifndef _H_TLIBC_PLATFORM_LINUX
#define _H_TLIBC_PLATFORM_LINUX

#define TLIBC_FILE_SEPARATOR '/'

#include <stddef.h>
#include <inttypes.h>
#include <sys/stat.h>
//���������stdlib.h strtoll�����
#include <stdlib.h>

#define tlibc_mkdir(path, mode) mkdir(path, mode)

#if __WORDSIZE == 32
#define TLIBC_WORDSIZE 32
#elif __WORDSIZE == 64
#define TLIBC_WORDSIZE 64
#else
#error "unknow wordsize"
#endif

#endif