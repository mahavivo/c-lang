# C 库函数 – ldiv()


## 描述

C 库函数 **div_t div(long int numer, long int denom)** 把 **numer（分子）**除以 **denom（分母）**。

## 声明

下面是 ldiv() 函数的声明。

    div_t div(long int numer, long int denom)

## 参数

* ** numer ** \-- 分子。
* ** denom ** \-- 分母。

## 返回值

该函数返回定义在  中的结构中的值，该结构有两个成员，如 ldiv_t:_long quot; long rem;_。

## 实例

下面的实例演示了 ldiv() 函数的用法。

    #include 
    #include 

    int main ()
    {
       ldiv_t output;

       output = ldiv(100000L, 30000L);

       printf("商 = %ldn", output.quot);

       printf("余数 = %ldn", output.rem);

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    商 = 3
    余数 = 10000