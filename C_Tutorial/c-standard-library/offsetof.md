# C 库宏 – offsetof()


## 描述

C 库宏 **offsetof(type, member-designator)** 会生成一个类型为 **size_t** 的整型常量，它是一个结构成员相对于结构开头的字节偏移量。成员是由 member-designator 给定的，结构的名称是在 type 中给定的。

## 声明

下面是 offsetof() 宏的声明。

    offsetof(type, member-designator)

## 参数

* **type** \-- 这是一个 class 类型，其中，member-designator 是一个有效的成员指示器。
* **member-designator** \-- 这是一个 class 类型的成员指示器。

## 返回值

该宏返回类型为 **size_t** 的值，表示 type 中成员的偏移量。

## 实例

下面的实例演示了 offsetof() 宏的用法。

    #include 
    #include 

    struct address {
       char name[50];
       char street[50];
       int phone;
    };

    int main()
    {
       printf("address 结构中的 name 偏移 = %d 字节。n",
       offsetof(struct address, name));

       printf("address 结构中的 street 偏移 = %d 字节。n",
       offsetof(struct address, street));

       printf("address 结构中的 phone 偏移 = %d 字节。n",
       offsetof(struct address, phone));

       return(0);
    }

让我们编译并运行上面的程序，这将产生以下结果：

    address 结构中的 name 偏移 = 0 字节。
    address 结构中的 street 偏移 = 50 字节。
    address 结构中的 phone 偏移 = 100 字节。