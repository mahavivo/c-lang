# C 库函数 – free()


## 描述

C 库函数 **void free(void *ptr)** 释放之前调用 calloc、malloc 或 realloc 所分配的内存空间。

## 声明

下面是 free() 函数的声明。

    void free(void *ptr)

## 参数

* **ptr** \-- 指针指向一个要释放内存的内存块，该内存块之前是通过调用 malloc、calloc 或 realloc 进行分配内存的。如果传递的参数是一个空指针，则不会执行任何动作。

## 返回值

该函数不返回任何值。

## 实例

下面的实例演示了 free() 函数的用法。

    #include 
    #include 

    int main()
    {
       char *str;

       /* 最初的内存分配 */
       str = (char *) malloc(15);
       strcpy(str, "jikexueyuan");
       printf("String = %s,  Address = %un", str, str);

       /* 重新分配内存 */
       str = (char *) realloc(str, 25);
       strcat(str, ".com");
       printf("String = %s,  Address = %un", str, str);

       /* 释放已分配的内存 */
       free(str);

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    String = jikexueyuan, Address = 355090448
    String = jikexueyuan.com, Address = 355090448