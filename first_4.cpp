//exa_11 函数
/*
1-定义函数
	return_type function_name( parameter list )
	{
	   body of the function
	}
eg：
		int max(int num1, int num2) 
	{
	   // 局部变量声明
	   int result;
 
	   if (num1 > num2)
		  result = num1;
	   else
		  result = num2;
 
	   return result; 
	}
2-函数声明
函数声明会告诉编译器函数名称及如何调用函数。
函数的实际主体可以单独定义。
	return_type function_name( parameter list );
eg:
	int max(int num1, int num2);

3-函数参数
传值调用
	向函数传递参数的传值调用方法，把参数的实际值复制给函数的形式参数
	在这种情况下，修改函数内的形式参数不会影响实际参数。

	eg：
	int a = 100;
	   int b = 200;

	   cout << "交换前，a 的值：" << a << endl;
	   cout << "交换前，b 的值：" << b << endl;

	   // 调用函数来交换值
	   swap(a, b);

	   cout << "交换后，a 的值：" << a << endl;
	   cout << "交换后，b 的值：" << b << endl;
	结果：
	交换前，a 的值： 100
	交换前，b 的值： 200
	交换后，a 的值： 100
	交换后，b 的值： 200
	上面的实例表明了，虽然在函数内改变了 a 和 b 的值，但是实际上 a 和 b 的值没有发生变化。

指针调用
	向函数传递参数的指针调用方法，把参数的地址复制给形式参数。在函数内，该地址用于访问调用中要用到的实际参数。
	这意味着，修改形式参数会影响实际参数。
	eg：
	void swap(int *x, int *y)
	{
	   int temp;
	   temp = *x;    /* 保存地址 x 的值
	* x = *y;        /* 把 y 赋值给 x 
	*y = temp;    /* 把 x 赋值给 y 

	return;
	}

引用调用
	把引用的地址复制给形式参数。在函数内，该引用用于访问调用中要用到的实际参数。
	这意味着，修改形式参数会影响实际参数。
	eg：
		void swap(int &x, int &y)
	{
	   int temp;
	   temp = x; // 保存地址 x 的值 
	x = y;    // 把 y 赋值给 x 
	y = temp; //把 x 赋值给 y  

	return;
	}

4-参数的默认值
	调用函数时，如果未传递参数的值，则会使用默认值，如果指定了值，则会忽略默认值，使用传递的值。
	eg：
	int sum(int a, int b=20)
{
  int result;
  result = a + b;
  return (result);
}
5-Lambda 函数与表达式
	Lambda 表达式把函数看作对象。
	Lambda 表达式可以像对象一样使用，比如可以将它们赋给变量和作为参数传递，还可以像函数一样对其求值。
	Lambda 表达式本质上与函数声明非常类似。
[capture](parameters)->return-type{body}

eg [](int x, int y) -> int { int z = x + y; return z + x;

*/