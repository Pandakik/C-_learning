//exa_8 ѭ��
/*
1- whileѭ��
	while (condtition)
	{
		statement(s);
	}
eg:
	   while( a < 20 )
   {
	   cout << "a ��ֵ��" << a << endl;
	   a++;
   }

2-for ѭ��
	for ( init; condition; increment )
	{
	   statement(s);
	}
	init �����ȱ�ִ�У���ֻ��ִ��һ�Ρ�
	�����������ж� condition�����Ϊ�棬��ִ��ѭ�����塣
	��ִ���� for ѭ������󣬿���������������� increment ��䡣������������
eg:
	for( int a = 10; a < 20; a = a + 1 )
	   {
		   cout << "a ��ֵ��" << a << endl;
	   }
3-do...while
��β��������������ٻ�ִ��һ��
		do
	{
	   statement(s);

	}while( condition );
eg��
do
   {
	   cout << "a ��ֵ��" << a << endl;
	   a = a + 1;
   }while( a < 20 );
*/

// exa_8 ѭ��������
/*
1-break���
	�� break ��������һ��ѭ����ʱ��ѭ����������ֹ���ҳ�����������ִ�н�����ѭ������һ����䡣
	����������ֹ switch ����е�һ�� case

2-continue���
	C++ �е� continue ����е��� break ��䡣��������ǿ����ֹ��continue ��������ǰѭ���еĴ��룬ǿ�ȿ�ʼ��һ��ѭ����
	���� for ѭ����continue ���ᵼ��ִ���������Ժ�ѭ���������֡�
	���� while �� do...while ѭ����continue ���ᵼ�³�����ƻص�����������
3-goto���
	goto �������ѿ���������ת�Ƶ�ͬһ�����ڵı���ǵ����
	
	goto label;
	..
	.
	label: statement;
eg��
// do ѭ��ִ��
   LOOP:do
   {
	   if( a == 15)
	   {
		  // ��������
		  a = a + 1;
		  goto LOOP;
	   }
	   cout << "a ��ֵ��" << a << endl;
	   a = a + 1;
   }while( a < 20 );
*/