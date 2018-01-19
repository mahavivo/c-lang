# C 数据类型

在 C 语言中，数据类型指的是用于声明不同类型的变量或函数的一个广泛的系统。变量的类型决定了变量存储占用的空间，以及如何解释存储的位模式。

C 中的类型可分为以下几种：

</p> <table > <tr><th>序号</th><th>类型与描述</th></tr> <tr><td>1</td><td><b>基本类型：</b><br />它们是算术类型，包括两种类型：整数类型和浮点类型。</td></tr> <tr><td>2</td><td><b>枚举类型：</b><br />它们也是算术类型，被用来定义在程序中只能赋予其一定的离散整数值的变量。</td></tr> <tr><td>3</td><td><b>void 类型：</b><br />类型说明符 <i>void</i> 表明没有可用的值。</td></tr> <tr><td>4</td><td><b>派生类型：</b><br />它们包括：指针类型、数组类型、结构类型、共用体类型和函数类型。</td></tr> </table> <br /> <p>

数组类型和结构类型统称为聚合类型。函数的类型指的是函数返回值的类型。在本章节接下来的部分我们将介绍基本类型，其他几种类型会在后边几个章节中进行讲解。

## 整数类型
下表列出了关于标准整数类型的存储大小和值范围的细节：

</p> <table > <tr><th>类型</th><th>存储大小</th><th>值范围</th></tr> <tr><td>char</td><td>1 byte</td><td>-128 到 127 或 0 到 255</td></tr> <tr><td>unsigned char</td><td>1 byte</td><td>0 到 255</td></tr> <tr><td>signed char</td><td>1 byte</td><td>-128 到 127</td></tr> <tr><td>int</td><td>2 或 4 bytes</td><td>-32,768 到 32,767 或 -2,147,483,648 到 2,147,483,647</td></tr> <tr><td>unsigned int</td><td>2 或 4 bytes</td><td>0 到 65,535 或 0 到 4,294,967,295</td></tr> <tr><td>short</td><td>2 bytes</td><td>-32,768 到 32,767</td></tr> <tr><td>unsigned short</td><td>2 bytes</td><td>0 到 65,535</td></tr> <tr><td>long</td><td>4 bytes</td><td>-2,147,483,648 到 2,147,483,647</td></tr> <tr><td>unsigned long</td><td>4 bytes</td><td>0 到 4,294,967,295</td></tr> </table> <p>

为了得到某个类型或某个变量在特定平台上的准确大小，您可以使用 **sizeof** 运算符。表达式 _sizeof(type)_ 得到对象或类型的存储字节大小。下面的实例演示了获取 int 类型的大小：

```
    #include 
    #include 

    int main()
    {
       printf("Storage size for int : %d n", sizeof(int));

       return 0;
    }
```

当您在 Linux 上编译并执行上面的程序时，它会产生下列结果：

```
    Storage size for int : 4
```

## 浮点类型
下表列出了关于标准浮点类型的存储大小、值范围和精度的细节：

</p> <table > <tr><th>类型</th><th>存储大小</th><th>值范围</th><th>精度</th></tr> <tr><td>float</td><td>4 byte</td><td>1.2E-38 到 3.4E+38</td><td>6 位小数</td></tr> <tr><td>double</td><td>8 byte</td><td>2.3E-308 到 1.7E+308</td><td>15 位小数</td></tr> <tr><td>long double</td><td>10 byte</td><td>3.4E-4932 到 1.1E+4932</td><td>19 位小数</td></tr> </table> <p>

头文件 float.h 定义了宏，在程序中可以使用这些值和其他有关实数二进制表示的细节。下面的实例将输出浮点类型占用的存储空间以及它的范围值：

```
    #include 
    #include 

    int main()
    {
       printf("Storage size for float : %d n", sizeof(float));
       printf("Minimum float positive value: %En", FLT_MIN );
       printf("Maximum float positive value: %En", FLT_MAX );
       printf("Precision value: %dn", FLT_DIG );

       return 0;
    }
```

当您在 Linux 上编译并执行上面的程序时，它会产生下列结果：

```
    Storage size for float : 4
    Minimum float positive value: 1.175494E-38
    Maximum float positive value: 3.402823E+38
    Precision value: 6
```

## void 类型
void 类型指定没有可用的值。它通常用于以下三种情况下：

</p> <table > <tr><th>序号</th><th>类型与描述</th></tr> <tr><td>1</td><td><b>函数返回为空</b><br />C 中有各种函数都不返回值，或者您可以说它们返回空。不返回值的函数的返回类型为空。例如 <b>void exit (int status);</b></td></tr> <tr><td>2</td><td><b>函数参数为空</b><br />C 中有各种函数不接受任何参数。不带参数的函数可以接受一个 void。例如 <b>int rand(void);</b></td></tr> <tr><td>3</td><td><b>指针指向 void</b><br />类型为 void * 的指针代表对象的地址，而不是类型。例如，内存分配函数 <b>void *malloc( size_t size );</b> 返回指向 void 的指针，可以转换为任何数据类型。</td></tr> </table> <p>

如果现在您还是无法完全理解 void 类型，不用太担心，在后续的章节中我们将会详细讲解这些概念。  