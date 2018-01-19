# 传递数组给函数

如果您想要在函数中传递一个一维数组作为参数，您必须以下面三种方式来声明函数形式参数，这三种声明方式的结果是一样的，因为每种方式都会告诉编译器将要接收一个整型指针。同样地，您也可以传递一个多维数组作为形式参数。

### 方式 1

形式参数是一个指针（您可以在下一章中学习到有关指针的知识）：

    void myFunction(int *param)
    {
    .
    .
    .
    }

### 方式 2

形式参数是一个已定义大小的数组：

    void myFunction(int param[10])
    {
    .
    .
    .
    }

### 方式 3

形式参数是一个未定义大小的数组：

    void myFunction(int param[])
    {
    .
    .
    .
    }

## 实例

现在，让我们来看下面这个函数，它把数组作为参数，同时还传递了另一个参数，根据所传的参数，会返回数组中各元素的平均值：

    double getAverage(int arr[], int size)
    {
      int    i;
      double avg;
      double sum;

      for (i = 0; i < size; ++i)
      {
        sum += arr[i];
      }

      avg = sum / size;

      return avg;
    }

现在，让我们调用上面的函数，如下所示：

    #include 

    /* 函数声明 */
    double getAverage(int arr[], int size);

    int main ()
    {
       /* 带有 5 个元素的整型数组 */
       int balance[5] = {1000, 2, 3, 17, 50};
       double avg;

       /* 传递一个指向数组的指针作为参数 */
       avg = getAverage( balance, 5 ) ;

       /* 输出返回值 */
       printf( "平均值是： %f ", avg );

       return 0;
    }

当上面的代码被编译和执行时，它会产生下列结果：

    平均值是： 214.400000

您可以看到，就函数而言，数组的长度是无关紧要的，因为 C 不会对形式参数执行边界检查。