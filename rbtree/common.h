#ifndef COMMON_H
#define COMMON_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

#define true 1
#define false 0
#define STR_EQUAL 0
#define STR_BIG 1
#define STR_SMALL -1

//디버그 로그출력 매크로
#define MYDEBUG(fmt, ...)\
{ printf("[%s:%d] %s "fmt, __FILE__, __LINE__, __FUNCTION__, ##__VA_ARGS__); }

#endif