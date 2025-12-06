# C 库函数 – vprintf()


## 描述

C 库函数 **int vprintf(const char *format, va_list arg)** 使用参数列表发送格式化输出到标准输出 stdout。

## 声明

下面是 vprintf() 函数的声明。

    int vprintf(const char *format, va_list arg)

## 参数

* **format** \-- 这是字符串，包含了要被写入到标准输出 stdout 的文本。它可以包含嵌入的 format 标签，format 标签可被随后的附加参数中指定的值替换，并按需求进行格式化。format 标签属性是 ** %[flags][width][.precision][length]specifier**，具体讲解如下：

</li> </ul> <table class="reference notranslate"> <tr><th style="width:18%">specifier（说明符）</th><th>输出</th></tr> <tr><td>c</td><td>字符</td></tr> <tr><td>d 或 i</td><td>有符号十进制整数</td></tr> <tr><td>e</td><td>使用 e 字符的科学科学记数法（尾数和指数）</td></tr> <tr><td>E</td><td>使用 E 字符的科学科学记数法（尾数和指数）</td></tr> <tr><td>f</td><td>十进制浮点数</td></tr> <tr><td>g</td><td>自动选择 %e 或 %f 中合适的表示法</td></tr> <tr><td>G</td><td>自动选择 %E 或 %f 中合适的表示法</td></tr> <tr><td>o</td><td>有符号八进制</td></tr> <tr><td>s</td><td>字符的字符串</td></tr> <tr><td>u</td><td>无符号十进制整数</td></tr> <tr><td>x</td><td>无符号十六进制整数</td></tr> <tr><td>X</td><td>无符号十六进制整数（大写字母）</td></tr> <tr><td>p</td><td>指针地址</td></tr> <tr><td>n</td><td>无输出</td></tr> <tr><td>%</td><td>字符</td></tr> </table> <br/> <table class="reference notranslate"> <tr><th style="width:18%">flags（标识）</th><th>描述</th></tr> <tr><td>-</td><td>在给定的字段宽度内左对齐，默认是右对齐（参见 width 子说明符）。</td></tr> <tr><td>+</td><td>强制在结果之前显示加号或减号（+ 或 -），即正数前面会显示 + 号。默认情况下，只有负数前面会显示一个 - 号。</td></tr> <tr><td>(space)</td><td>如果没有写入任何符号，则在该值前面插入一个空格。</td></tr> <tr><td>#</td><td>与 o、x 或 X 说明符一起使用时，非零值前面会分别显示 0、0x 或 0X。<br/> 与 e、E 和 f 一起使用时，会强制输出包含一个小数点，即使后边没有数字时也会显示小数点。默认情况下，如果后边没有数字时候，不会显示显示小数点。<br/> 与 g 或 G 一起使用时，结果与使用 e 或 E 时相同，但是尾部的零不会被移除。</td></tr> <tr><td>0</td><td>在指定填充 padding 的数字左边放置零（0），而不是空格（参见 width 子说明符）。</td></tr> </table> <br/> <table class="reference notranslate"> <tr><th style="width:18%">width（宽度）</th><th>描述</th></tr> <tr><td>(number)</td><td>要输出的字符的最小数目。如果输出的值短于该数，结果会用空格填充。如果输出的值长于该数，结果不会被截断。</td></tr> <tr><td>*</td><td>宽度在 format 字符串中未指定，但是会作为附加整数值参数放置于要被格式化的参数之前。</td></tr> </table> <br/> <table class="reference notranslate"> <tr><th style="width:18%">.precision（精度）</th><th>描述</th></tr> <tr><td>.number</td><td>对于整数说明符（d、i、o、u、x、X）：precision 指定了要写入的数字的最小位数。如果写入的值短于该数，结果会用前导零来填充。如果写入的值长于该数，结果不会被截断。精度为 0 意味着不写入任何字符。<br/> 对于 e、E 和 f 说明符：要在小数点后输出的小数位数。<br/> 对于 g 和 G 说明符：要输出的最大有效位数。<br/> 对于 s: 要输出的最大字符数。默认情况下，所有字符都会被输出，直到遇到末尾的空字符。<br/> 对于 c 类型：没有任何影响。<br/> 当未指定任何精度时，默认为 1。如果指定时不带有一个显式值，则假定为 0。</td></tr> <tr><td>.*</td><td>精度在 format 字符串中未指定，但是会作为附加整数值参数放置于要被格式化的参数之前。</td></tr> </table> <br/> <table class="reference notranslate"> <tr><th style="width:18%">length（长度）</th><th>描述</th></tr> <tr><td>h</td><td>参数被解释为短整型或无符号短整型（仅适用于整数说明符：i、d、o、u、x 和 X）。</td></tr> <tr><td>l</td><td>参数被解释为长整型或无符号长整型，适用于整数说明符（i、d、o、u、x 和 X）及说明符 c（表示一个宽字符）和 s（表示宽字符字符串）。</td></tr> <tr><td>L</td><td>参数被解释为长双精度型（仅适用于浮点数说明符：e、E、f、g 和 G）。</td></tr> </table> <ul class="list"> <li>

* **arg** \-- 一个表示可变参数列表的对象。这应被  中定义的 va_start 宏初始化。

## 返回值

如果成功，则返回写入的字符总数，否则返回一个负数。

## 实例

下面的实例演示了 vprintf() 函数的用法。

    #include 
    #include 

    void WriteFrmtd(char *format, ...)
    {
       va_list args;

       va_start(args, format);
       vprintf(format, args);
       va_end(args);
    }

    int main ()
    {
       WriteFrmtd("%d variable argumentn", 1);
       WriteFrmtd("%d variable %sn", 2, "arguments");

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    1 variable argument
    2 variable arguments