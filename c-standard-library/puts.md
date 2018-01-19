jikexueyuan# C 库函数 – puts()


## 描述

C 库函数 **int puts(const char *str)** 把一个字符串写入到标准输出 stdout，直到空字符，但不包括空字符。换行符会被追加到输出中。

## 声明

下面是 puts() 函数的声明。

    int puts(const char *str)

## 参数

* **str** \-- 这是要被写入的 C 字符串。

## 返回值

如果成功，该函数返回一个非负值，如果发生错误则返回 EOF。

## 实例

下面的实例演示了 puts() 函数的用法。

    #include 
    #include 

    int main()
    {
       char str1[15];
       char str2[15];

       strcpy(str1, "jikexueyuan");
       strcpy(str2, "jkcbird");

       puts(str1);
       puts(str2);

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    jikexueyuan
    jkcbird