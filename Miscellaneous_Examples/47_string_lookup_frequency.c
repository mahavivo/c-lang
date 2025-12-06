#include <stdio.h>

int main()
{
    // 查找字符在字符串中的出现频率

    char str[1000], ch;
    int i, frequency = 0;

    printf("输入字符串：");
    fgets(str, (sizeof str / sizeof str[0]), stdin);

    printf("输入要查找的字符：");
    scanf("%c", &ch);

    for (i = 0; str[i] != '\0'; ++i)
    {
        if (ch == str[i])
            ++frequency;
    }

    printf("字符 %c 在字符串中的出现频率 %d", ch, frequency);

    return 0;
}
