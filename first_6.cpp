//exa_14 数组
/*
(1)--C++ 支持数组数据结构，它可以存储一个固定大小的相同类型元素的顺序集合。
数组是用来存储一系列数据，但它往往被认为是一系列相同类型的变量。

声明数组
type arrayName [ arraySize ];
eg:double balance[10];

初始化数组
double balance[5] = {1000.0, 2.0, 3.4, 7.0, 50.0};
所有的数组都是以 0 作为它们第一个元素的索引，也被称为基索引，数组的最后一个索引是数组的总大小减去 1。

访问数组元素
double salary = balance[9];

(2)--多维数组
type name[size1][size2]...[sizeN];
eg：int threedim[5][10][4];

二维数组：type arrayName [ x ][ y ];

1初始化二维数组：
int a[3][4] = {
 {0, 1, 2, 3} ,   //  初始化索引号为 0 的行 
 {4, 5, 6, 7},   // 初始化索引号为 1 的行 
 { 8, 9, 10, 11 }   //  初始化索引号为 2 的行 
};
或者：int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};

2访问二维数组元素
int val = a[2][3];

(3)--指向数组的指针
数组名是指向数组中第一个元素的常量指针。
eg:
double runoobAarray[50];
runoobAarray 是一个指向 &runoobAarray[0] 的指针，即数组 runoobAarray 的第一个元素的地址。
因此，下面的程序片段把 p 赋值为 runoobAarray 的第一个元素的地址：

double *p;
double runoobAarray[10];
p = runoobAarray;

(4)--传递数组给函数
C++ 中您可以通过指定不带索引的数组名来传递一个指向数组的指针。
C++ 传数组给一个函数，数组类型自动转换为指针类型，因而传的实际是地址。

如果您想要在函数中传递一个一维数组作为参数，您必须以下面三种方式来声明函数形式参数，
这三种声明方式的结果是一样的，因为每种方式都会告诉编译器将要接收一个整型指针。
同样地，您也可以传递一个多维数组作为形式参数。

1形式参数是一个指针
void myFunction(int *param)
{
...
}

2形式参数是一个已定义大小的数组：
void myFunction(int param[10])
{
...}

3形式参数是一个未定义大小的数组：
void myFunction(int param[])
{
}


*/