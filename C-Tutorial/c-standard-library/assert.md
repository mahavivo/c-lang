# C 库宏 – assert()

## 描述

C 库宏 **void assert(int expression)** 允许诊断信息被写入到标准错误文件中。换句话说，它可用于在 C 程序中添加诊断。

## 声明

下面是 assert() 宏的声明。

    void assert(int expression);

## 参数

* **expression** \-- 这可以是一个变量或任何 C 表达式。如果 **expression** 为 TRUE，assert() 不执行任何动作。如果 **expression** 为 FALSE，assert() 会在标准错误 stderr 上显示错误消息，并中止程序执行。

## 返回值

这个宏不返回任何值。

## 实例

下面的实例演示了 assert() 宏的用法。

    #include 
    #include 

    int main()
    {
       int a;
       char str[50];

       printf("请输入一个整数值： ");
       scanf("%dn", &a);
       assert(a >= 10);
       printf("输入的整数是： %dn", a);

       printf("请输入字符串： ");
       scanf("%sn", &str);
       assert(str != NULL);
       printf("输入的字符串是： %sn", str);

       return(0);
    }

让我们在交互模式下编译并运行上面的程序，如下所示：

    请输入一个整数值： 11
    输入的整数是： 11
    请输入字符串： jikexueyuan
    输入的字符串是： jikexueyuan
