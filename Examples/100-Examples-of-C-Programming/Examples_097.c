#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE*fp=NULL;
    char filename[25];
    char ch;
    printf("输入你要保存到的文件的名称：\n");
    gets(filename);
    if((fp = fopen(filename,"w")) == NULL)
    {
        printf("error: cannot open file!\n");
        exit(0);
    }
    printf("现在你可以输入你要保存的一些字符，以#结束：\n");
    getchar();
    while((ch = getchar()) != '#'){
        fputc(ch, fp);
    }
    fclose(fp);
    system("pause");
    return 0;
}