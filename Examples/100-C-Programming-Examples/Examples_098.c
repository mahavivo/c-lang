#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE*fp=NULL;
    char str[50];
    int i,len;
    printf("输入一个字符串：\n");
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]<='z'&&str[i]>='a')
            str[i]-=32;
    }
    if((fp=fopen("test","w"))==NULL)
    {
        printf("error: cannot open file!\n");
        exit(0);
    }
    fprintf(fp,"%s",str);
    fclose(fp);
    
    system("pause");
    return 0;
}