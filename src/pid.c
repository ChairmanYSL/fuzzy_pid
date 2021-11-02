#include <stdio.h>
#include "../inc/debug.h"
#include <string.h>

int ImportSrcData(unsigned char *SrcDataPath, int *SrcData)
{
    FILE *fp;

    if(SrcDataPath == NULL || SrcData == NULL)
    {
        return -1;
    }

    errno = 0;
    fp = fopen(SrcDataPath, "r+");
    if(fp == NULL)
    {
        Trace("error", "Open file failed! %s\r\n", strerror(errno));
        return -2;
    }

    fseek(fp, 0, SEEK_SET);


    fread(SrcData, sizeof(int), 1024, fp);


}