#include <stdio.h>
#include "../inc/debug.h"
#include "../inc/pid.h"

int main(void)
{
    unsigned char FileName[64];
    int SrcData[1024];
    unsigned int i;

    printf("����������·����");
    scanf("%s", FileName);

    ImportSrcData(FileName, SrcData);

    Trace("info","���������·��Ϊ��%s\r\n", FileName);
    Trace("info","���ݣ�");
    for(i = 0; i < strlen)
    return 0;
}
