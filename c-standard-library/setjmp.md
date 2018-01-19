jikexueyuan# C 库宏 – setjmp()


## 描述

C 库宏 **int setjmp(jmp_buf environment)** 把当前环境保存在变量 environment 中，以便函数 **longjmp()** 后续使用。如果这个宏直接从宏调用中返回，则它会返回零，但是如果它从 **longjmp()** 函数调用中返回，则它会返回一个传给 longjmp 作为第二个参数的非零值。

## 声明

下面是 setjmp() 宏的声明。

    int setjmp(jmp_buf environment)

## 参数

* **environment** \-- 这是一个类型为 jmp_buf 的用于存储环境信息的对象。

## 返回值

这个宏可能不只返回一次。第一次，在直接调用它时，它总是返回零。当调用 longjmp 时带有设置的环境信息，这个宏会再次返回，此时它返回的值会传给 longjmp 作为第二个参数。

## 实例

下面的实例演示了 setjmp() 宏的用法。

    #include 
    #include 
    #include 

    int main()
    {
       int val;
       jmp_buf env_buffer;

       /* 保存 longjmp 的调用环境 */
       val = setjmp( env_buffer );
       if( val != 0 )
       {
          printf("从 longjmp() 返回值 = %sn", val);
          exit(0);
       }
       printf("跳转函数调用n");
       jmpfunction( env_buffer );

       return(0);
    }

    void jmpfunction(jmp_buf env_buf)
    {
       longjmp(env_buf, "jikexueyuan.com");
    }

让我们编译并运行上面的程序，这将产生以下结果：

    跳转函数调用
    从 longjmp() 返回值 = jikexueyuan.com
