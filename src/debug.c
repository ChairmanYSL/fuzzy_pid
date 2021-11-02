#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void SdkDebugTrace(unsigned char const *pasTag, unsigned char const*  pasFile, unsigned char const *pasFun, int line,  char const *pheFmt, ...)
{
    unsigned char *temp = (unsigned char*)malloc(1024 + 128);
    va_list varg;

    sprintf((char*)temp, "TAG:%s file:%s FUN:%s  LINE:%d  \r\n", pasTag, pasFile, pasFun, line);
    va_start(varg, pheFmt);    //lint !e530  转换不定参数
    vsprintf(&temp[strlen(temp)], pheFmt, varg);
    printf(temp);
    va_end(varg);
    free(temp);
}