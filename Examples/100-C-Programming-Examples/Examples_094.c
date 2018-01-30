#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void caizi(void)
{
    int n;
    char begin;
    int count = 1;
    srand((int)time(NULL));
    int m = (rand() % 100) + 1;
    puts("游戏开始，请输入数字:");
    while (1)
    {
        scanf("%d", &n);
        if (n == m)
        {
            printf("猜中了，使用了 %d 次！\n", count);
            if (count == 1)
            {
                printf("你是神级人物了！膜拜\n");
                getchar();
                printf("你已经达到最高级别，还需要玩吗？Y/N \n");
                scanf("%c", &begin);
                if (begin == 'Y' || begin == 'y')      //重复玩的一个嵌套循环
                {
                    caizi();
                }
                else
                {
                    printf("谢谢，再见!\n");
                }
            }
            else if (count <= 5)
            {
                printf("你是王级人物了！非常赞\n");
                getchar();
                printf("需要挑战最高级别不？Y/N \n");
                scanf("%c", &begin);
                if (begin == 'Y' || begin == 'y')
                {
                    caizi();
                }
                else
                {
                    printf("谢谢，再见!\n");
                }
            }
            else if (count <= 10)
            {
                printf("你是大师级人物了！狂赞\n");
                getchar();
                printf("需要挑战最高级别不？Y/N \n");
                scanf("%c", &begin);
                if (begin == 'Y' || begin == 'y')
                {
                    caizi();
                }
                else
                {
                    printf("谢谢，再见!\n");
                }
            }
            else if (count <= 15)
            {
                printf("你是钻石级人物了！怒赞\n");
                getchar();
                printf("需要挑战最高级别不？Y/N \n");
                scanf("%c", &begin);
                if (begin == 'Y' || begin == 'y')
                {
                    caizi();
                }
                else
                {
                    printf("谢谢，再见!\n");
                }
            }
            else
            {
                getchar();
                printf("你的技术还有待提高哦！重玩？ Y/N\n");
                scanf("%c",&begin);
                if (begin == 'Y' || begin == 'y')
                {
                    caizi();
                }
                else
                {
                    printf("谢谢，再见!\n");
                }
            }
            break;
        }
        else if (n < m)
        {
            puts("太小了!");
            puts("重新输入:");
        }
        else
        {
            puts("太大了!");
            puts("重新输入:");
        }
        count++;//计数器
        
        
    }
}


int main(void)
{
    
    caizi();
    system("pause");
    return 0;
}