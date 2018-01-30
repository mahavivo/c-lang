#include <stdio.h>
#include <stdlib.h>

int main()
{
	// 输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组。。
	int arr[20];
    int i, n, offset;
    //输入数组大小和数组内容
    printf("Total numbers?\n");
    scanf("%d", &n);
    printf("Input %d numbers.\n",n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    //输入滚动偏移量
    printf("Set your offset.\n");
    scanf("%d", &offset);
    printf("Offset is %d.\n", offset);
    //打印滚动前数组
    print_arr(arr, n);
    //滚动数组并打印
    move(arr, n, offset);
    print_arr(arr, n);
}

//打印数组
void print_arr(int array[],int n)
{
    int i;
    for (i = 0; i < n; ++i) {
        printf("%4d", array[i]);
    }
    printf("\n");
}
//滚动数组
void move(int array[],int n,int offset)
{
    int *p, *arr_end;
    arr_end = array + n;      //数组最后一个元素的下一个位置
    int last;
 
    //滚动直到偏移量为0
    while(offset)
    {
        last=*(arr_end - 1);
        for (p = arr_end - 1; p != array; --p) {   //向右滚动一位
            *p=*(p-1);
        }
        *array=last;
        --offset;
    }
}