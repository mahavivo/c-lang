# C 库函数 – tolower()


## 描述

C 库函数 **int tolower(int c)** 把给定的字母转换为小写字母。

## 声明jikexueyuan

下面是 tolower() 函数的声明。

    int tolower(int c);

## 参数

* **c** \-- 这是要被转换为小写的字母。

## 返回值

如果 c 有相对应的小写字母，则该函数返回 c 的小写字母，否则 c 保持不变。返回值是一个可被隐式转换为 char 类型的 int 值。

## 实例

下面的实例演示了 tolower() 函数的用法。

    #include 
    #include 

    int main()
    {
       int i = 0;
       char c;
       char str[] = "jikexueyuan TUTORIALS";

       while( str[i] )
       {
          putchar(tolower(str[i]));
          i++;
       }

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    jikexueyuan tutorials