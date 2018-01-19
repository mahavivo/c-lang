# C 库函数 – memcmp()


## 描述

C 库函数 **int memcmp(const void *str1, const void *str2, size_t n))** 把存储区 **str1** 和存储区 **str2** 的前 **n** 个字节进行比较。

## 声明

下面是 memcmp() 函数的声明。

    int memcmp(const void *str1, const void *str2, size_t n)

## 参数

* **str1** \-- 指向内存块的指针。
* **str2** \-- 指向内存块的指针。
* **n** \-- 要被比较的字节数。

## 返回值

* 如果返回值 < 0，则表示 str1 小于 str2。
* 如果返回值 > 0，则表示 str2 小于 str1。
* 如果返回值 = 0，则表示 str1 等于 str2。

## 实例

下面的实例演示了 memcmp() 函数的用法。

    #include 
    #include 

    int main ()
    {
       char str1[15];
       char str2[15];
       int ret;

       memcpy(str1, "abcdef", 6);
       memcpy(str2, "ABCDEF", 6);

       ret = memcmp(str1, str2, 5);

       if(ret > 0)
       {
          printf("str2 小于 str1");
       }
       else if(ret > 0)
       {
          printf("str1 小于 str2");
       }
       else
       {
          printf("str1 等于 str2");
       }

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    str2 小于 str1