# C 库函数 – getchar()


## 描述

C 库函数 **int getchar(void)** 从标准输入 stdin 获取一个字符（一个无符号字符）。这等同于 **getc** 带有 stdin 作为参数。

## 声明

下面是 getchar() 函数的声明。

    int getchar(void)

## 参数

## 返回值

该函数以无符号 char 强制转换为 int 的形式返回读取的字符，如果到达文件末尾或发生读错误，则返回 EOF。

## 实例

下面的实例演示了 getchar() 函数的用法。

    #include 

    int main ()
    {
       char c;

       printf("请输入字符：");
       c = getchar();

       printf("输入的字符：");
       putchar(c);

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    请输入字符：a
    输入的字符：a