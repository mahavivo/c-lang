jikexueyuan# C 库函数 – longjmp()


## 描述

C 库函数 **void longjmp(jmp_buf environment, int value)** 恢复最近一次调用 **setjmp()** 宏时保存的环境，**jmp_buf** 参数的设置是由之前调用 setjmp() 生成的。

## 声明

下面是 longjmp() 函数的声明。

    void longjmp(jmp_buf environment, int value)

## 参数

* **environment** \-- 这是一个类型为 **jmp_buf** 的对象，包含了调用 setjmp 时存储的环境信息。
* **value** \-- 这是 **setjmp** 表达式要判断的值。

## 返回值

该函数不返回任何值。

## 实例

下面的实例演示了 longjmp() 函数的用法。

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