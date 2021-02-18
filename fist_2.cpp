//exa_8 循环
/*
1- while循环
	while (condtition)
	{
		statement(s);
	}
eg:
	   while( a < 20 )
   {
	   cout << "a 的值：" << a << endl;
	   a++;
   }

2-for 循环
	for ( init; condition; increment )
	{
	   statement(s);
	}
	init 会首先被执行，且只会执行一次。
	接下来，会判断 condition。如果为真，则执行循环主体。
	在执行完 for 循环主体后，控制流会跳回上面的 increment 语句。该语句可以留空
eg:
	for( int a = 10; a < 20; a = a + 1 )
	   {
		   cout << "a 的值：" << a << endl;
	   }
3-do...while
在尾部检查条件，至少会执行一次
		do
	{
	   statement(s);

	}while( condition );
eg：
do
   {
	   cout << "a 的值：" << a << endl;
	   a = a + 1;
   }while( a < 20 );
*/

// exa_8 循环相关语句
/*
1-break语句
	当 break 语句出现在一个循环内时，循环会立即终止，且程序流将继续执行紧接着循环的下一条语句。
	它可用于终止 switch 语句中的一个 case

2-continue语句
	C++ 中的 continue 语句有点像 break 语句。但它不是强迫终止，continue 会跳过当前循环中的代码，强迫开始下一次循环。
	对于 for 循环，continue 语句会导致执行条件测试和循环增量部分。
	对于 while 和 do...while 循环，continue 语句会导致程序控制回到条件测试上
3-goto语句
	goto 语句允许把控制无条件转移到同一函数内的被标记的语句
	
	goto label;
	..
	.
	label: statement;
eg：
// do 循环执行
   LOOP:do
   {
	   if( a == 15)
	   {
		  // 跳过迭代
		  a = a + 1;
		  goto LOOP;
	   }
	   cout << "a 的值：" << a << endl;
	   a = a + 1;
   }while( a < 20 );
*/