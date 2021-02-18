//exa_10 判断 
/*
1-if
	if(boolean_expression)
	{
	   // 如果布尔表达式为真将执行的语句
	}
2-if else
	if(boolean_expression)
	{
	   // 如果布尔表达式为真将执行的语句
	}
	else
	{
	   // 如果布尔表达式为假将执行的语句
	}

3-switch语句
	switch(expression){
		case constant-expression  :
		   statement(s);
		   break; // 可选的
		case constant-expression  :
		   statement(s);
		   break; // 可选的

		// 您可以有任意数量的 case 语句
		default : // 可选的
		   statement(s);
	}
eg：
/ 局部变量声明
	   char grade = 'D';

	   switch(grade)
	   {
	   case 'A' :
		  cout << "很棒！" << endl;
		  break;
	   case 'B' :
	   case 'C' :
		  cout << "做得好" << endl;
		  break;
	   case 'D' :
		  cout << "您通过了" << endl;
		  break;
	   case 'F' :
		  cout << "最好再试一下" << endl;
		  break;
	   default :
		  cout << "无效的成绩" << endl;
	   }
	   cout << "您的成绩是 " << grade << endl;
*/