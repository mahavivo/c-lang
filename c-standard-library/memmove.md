# C 库函数 – memmove()


## 描述

C 库函数 **void *memmove(void *str1, const void *str2, size_t n)** 从 **str2** 复制 **n** 个字符到 **str1**，但是在重叠内存块这方面，memmove() 是比 memcpy() 更安全的方法。如果目标区域和源区域有重叠的话，memmove() 能够保证源串在被覆盖之前将重叠区域的字节拷贝到目标区域中，复制后源区域的内容会被更改。如果目标区域与源区域没有重叠，则和 memcpy() 函数功能相同。

## 声明

下面是 memmove() 函数的声明。

    void *memmove(void *str1, const void *str2, size_t n)

## 参数

* **str1** \-- 指向用于存储复制内容的目标数组，类型强制转换为 void* 指针。
* **str2** \-- 指向要复制的数据源，类型强制转换为 void* 指针。
* **n** \-- 要被复制的字节数。

## 返回值

该函数返回一个指向目标存储区 str1 的指针。

## 实例

下面的实例演示了 memmove() 函数的用法。

    #include 
    #include 

    int main ()
    {
       const char dest[] = "oldstring";
       const char src[]  = "newstring";

       printf("Before memmove dest = %s, src = %sn", dest, src);
       memmove(dest, src, 9);
       printf("After memmove dest = %s, src = %sn", dest, src);

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    Before memmove dest = oldstring, src = newstring
    After memmove dest = newstring, src = newstring