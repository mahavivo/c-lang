#include <stdio.h>
#include <stdlib.h>

int main()
{
	// 有n个整数，使其前面各数顺序向后移m个位置，最后m个数变成最前面的m个数
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

void print_arr(int array[], int n)
{
	int i;
	for (i = 0; i < n; ++i)
	{
		printf("%4d", array[i]);
	}
	printf("\n");
}

// 滚动数组
void move(int array[], int n, int offset)
{
	int *p, *arr_end;
	arr_end = array + n;
	int last;

	while(offset)
	{
		last = *(arr_end - 1);
		for (p = arr_end - 1; p != array; --p)
		{
			*p = *(p-1);
		}
		*array = last;
		--offset;
	}
}