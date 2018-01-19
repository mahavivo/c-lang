# C 标准库 - <math.h>

## 简介

math.h 头文件定义了各种数学函数和一个宏。在这个库中所有可用的功能都带有一个 double 类型的参数，且都返回 double 类型的结果。

## 库宏

下面是这个库中定义的唯一的一个宏：

</p> <table > <tr><th style="width:5%">序号</th><th>宏 &amp; 描述</th></tr> <tr><td>1 </td><td><b>HUGE_VAL</b><br /><p>当函数的结果不可以表示为浮点数时。如果是因为结果的幅度太大以致于无法表示，则函数会设置 errno 为 ERANGE 来表示范围错误，并返回一个由宏 HUGE_VAL 或者它的否定（- HUGE_VAL）命名的一个特定的很大的值。</p><p>如果结果的幅度太小，则会返回零值。在这种情况下，error 可能会被设置为 ERANGE，也有可能不会被设置为 ERANGE。</p></td></tr> </table> 

## 库函数

下面列出了头文件 math.h 中定义的函数：
</p> <table > <tr><th style="width:5%">序号</th><th>函数 &amp; 描述</th></tr> <tr><td>1</td><td><a href="acos.md">double acos(double x)</a><br />返回以弧度表示的 x 的反余弦。</td></tr> <tr><td>2</td><td><a href="asin.md">double asin(double x)</a><br />返回以弧度表示的 x 的反正弦。</td></tr> <tr><td>3</td><td><a href="atan.md">double atan(double x)</a><br />返回以弧度表示的 x 的反正切。</td></tr> <tr><td>4</td><td><a href="atan2.md">double atan2(double y, double x)</a><br />返回以弧度表示的 y/x 的反正切。y 和 x 的值的符号决定了正确的象限。</td></tr> <tr><td>5</td><td><a href="cos.md">double cos(double x)</a><br />返回弧度角 x 的余弦。</td></tr> <tr><td>6</td><td><a href="cosh.md">double cosh(double x)</a><br />返回 x 的双曲余弦。</td></tr> <tr><td>7</td><td><a href="sin.md">double sin(double x)</a><br />返回弧度角 x 的正弦。</td></tr> <tr><td>8</td><td><a href="sinh.md">double sinh(double x)</a><br />返回 x 的双曲正弦。</td></tr> <tr><td>9</td><td><a href="tanh.md">double tanh(double x)</a><br />返回 x 的双曲正切。</td></tr> <tr><td>10</td><td><a href="exp.md">double exp(double x)</a><br />返回 e 的 x 次幂的值。</td></tr> <tr><td>11</td><td><a href="frexp.md">double frexp(double x, int *exponent)</a><br />把浮点数 x 分解成尾数和指数。返回值是尾数，并将指数存入 exponent 中。所得的值是 x = mantissa * 2 ^ exponent。</td></tr> <tr><td>12</td><td><a href="ldexp.md">double ldexp(double x, int exponent)</a><br />返回 x 乘以 2 的 exponent 次幂。</td></tr> <tr><td>13</td><td><a href="log.md">double log(double x)</a><br />返回 x 的自然对数（基数为 e 的对数）。</td></tr> <tr><td>14</td><td><a href="log10.md">double log10(double x)</a><br />返回 x 的常用对数（基数为 10 的对数）。</td></tr> <tr><td>15</td><td><a href="modf.md">double modf(double x, double *integer)</a><br />返回值为小数部分（小数点后的部分），并设置 integer 为整数部分。</td></tr> <tr><td>16</td><td><a href="pow.md">double pow(double x, double y)</a><br />返回 x 的 y 次幂。</td></tr> <tr><td>17</td><td><a href="sqrt.md">double sqrt(double x)</a><br />返回 x 的平方根。</td></tr> <tr><td>18</td><td><a href="ceil.md">double ceil(double x)</a><br />返回大于或等于 x 的最小的整数值。</td></tr> <tr><td>19</td><td><a href="fabs.md">double fabs(double x)</a><br />返回 x 的绝对值。</td></tr> <tr><td>20</td><td><a href="floor.md">double floor(double x)</a><br />返回小于或等于 x 的最大的整数值。</td></tr> <tr><td>21</td><td><a href="fmod.md">double fmod(double x, double y)</a><br />返回 x 除以 y 的余数。</td></tr> </table> 