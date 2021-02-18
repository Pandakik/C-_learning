//exa_12数学运算
/*
C++ 内置了丰富的数学函数，可对各种数字进行运算。下表列出了 C++ 中一些有用的内置的数学函数。
为了利用这些函数，您需要引用数学头文件 <cmath>
1	double cos(double);
该函数返回弧度角（double 型）的余弦。
2	double sin(double);
该函数返回弧度角（double 型）的正弦。
3	double tan(double);
该函数返回弧度角（double 型）的正切。
4	double log(double);
该函数返回参数的自然对数。
5	double pow(double, double);
假设第一个参数为 x，第二个参数为 y，则该函数返回 x 的 y 次方。
6	double hypot(double, double);
该函数返回两个参数的平方总和的平方根，也就是说，参数为一个直角三角形的两个直角边，函数会返回斜边的长度。
7	double sqrt(double);
该函数返回参数的平方根。
8	int abs(int);
该函数返回整数的绝对值。
9	double fabs(double);
该函数返回任意一个浮点数的绝对值。
10	double floor(double);
该函数返回一个小于或等于传入参数的最大整数。
*/

//exa_13随机数
/*
在许多情况下，需要生成随机数。关于随机数生成器，有两个相关的函数。
一个是 rand()，该函数只返回一个伪随机数。生成随机数之前必须先调用 srand() 函数。
*/
//示例
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int i, j;

    // 设置种子
    srand((unsigned)time(NULL));

    /* 生成 10 个随机数 */
    for (i = 0; i < 10; i++)
    {
        // 生成实际的随机数
        j = rand();
        cout << "随机数： " << j << endl;
    }
    return 0;
}
