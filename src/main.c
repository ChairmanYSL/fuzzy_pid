#include <stdio.h>
#include "../inc/debug.h"
#include "../inc/pid.h"

int main(void)
{
    unsigned char FileName[64];
    int SrcData[1024];
    unsigned int i;

    printf("请输入数据路径：");
    scanf("%s", FileName);

    ImportSrcData(FileName, SrcData);

    Trace("info","输入的数据路径为：%s\r\n", FileName);
    Trace("info","数据：");
    for(i = 0; i < strlen)
    return 0;
}
