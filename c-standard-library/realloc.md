# C 库函数 – realloc()


## 描述

C 库函数 **void *realloc(void *ptr, size_t size)** 尝试重新调整之前调用 **malloc** 或 **calloc** 所分配的 **ptr** 所指向的内存块的大小。

## 声明

下面是 realloc() 函数的声明。

    void *realloc(void *ptr, size_t size)

## 参数

* **ptr** \-- 指针指向一个要重新分配内存的内存块，该内存块之前是通过调用 malloc、calloc 或 realloc 进行分配内存的。如果为空指针，则会分配一个新的内存块，且函数返回一个指向它的指针。
* **size** \-- 内存块的新的大小，以字节为单位。如果大小为 0，且 ptr 指向一个已存在的内存块，则 ptr 所指向的内存块会被释放，并返回一个空指针。

## 返回值

该函数返回一个指针 ，指向重新分配大小的内存。如果请求失败，则返回 NULL。

## 实例

下面的实例演示了 realloc() 函数的用法。

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

       free(str);

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    String = jikexueyuan, Address = 355090448
    String = jikexueyuan.com, Address = 355090448