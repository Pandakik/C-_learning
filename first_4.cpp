//exa_11 ����
/*
1-���庯��
	return_type function_name( parameter list )
	{
	   body of the function
	}
eg��
		int max(int num1, int num2) 
	{
	   // �ֲ���������
	   int result;
 
	   if (num1 > num2)
		  result = num1;
	   else
		  result = num2;
 
	   return result; 
	}
2-��������
������������߱������������Ƽ���ε��ú�����
������ʵ��������Ե������塣
	return_type function_name( parameter list );
eg:
	int max(int num1, int num2);

3-��������
��ֵ����
	�������ݲ����Ĵ�ֵ���÷������Ѳ�����ʵ��ֵ���Ƹ���������ʽ����
	����������£��޸ĺ����ڵ���ʽ��������Ӱ��ʵ�ʲ�����

	eg��
	int a = 100;
	   int b = 200;

	   cout << "����ǰ��a ��ֵ��" << a << endl;
	   cout << "����ǰ��b ��ֵ��" << b << endl;

	   // ���ú���������ֵ
	   swap(a, b);

	   cout << "������a ��ֵ��" << a << endl;
	   cout << "������b ��ֵ��" << b << endl;
	�����
	����ǰ��a ��ֵ�� 100
	����ǰ��b ��ֵ�� 200
	������a ��ֵ�� 100
	������b ��ֵ�� 200
	�����ʵ�������ˣ���Ȼ�ں����ڸı��� a �� b ��ֵ������ʵ���� a �� b ��ֵû�з����仯��

ָ�����
	�������ݲ�����ָ����÷������Ѳ����ĵ�ַ���Ƹ���ʽ�������ں����ڣ��õ�ַ���ڷ��ʵ�����Ҫ�õ���ʵ�ʲ�����
	����ζ�ţ��޸���ʽ������Ӱ��ʵ�ʲ�����
	eg��
	void swap(int *x, int *y)
	{
	   int temp;
	   temp = *x;    /* �����ַ x ��ֵ
	* x = *y;        /* �� y ��ֵ�� x 
	*y = temp;    /* �� x ��ֵ�� y 

	return;
	}

���õ���
	�����õĵ�ַ���Ƹ���ʽ�������ں����ڣ����������ڷ��ʵ�����Ҫ�õ���ʵ�ʲ�����
	����ζ�ţ��޸���ʽ������Ӱ��ʵ�ʲ�����
	eg��
		void swap(int &x, int &y)
	{
	   int temp;
	   temp = x; // �����ַ x ��ֵ 
	x = y;    // �� y ��ֵ�� x 
	y = temp; //�� x ��ֵ�� y  

	return;
	}

4-������Ĭ��ֵ
	���ú���ʱ�����δ���ݲ�����ֵ�����ʹ��Ĭ��ֵ�����ָ����ֵ��������Ĭ��ֵ��ʹ�ô��ݵ�ֵ��
	eg��
	int sum(int a, int b=20)
{
  int result;
  result = a + b;
  return (result);
}
5-Lambda ��������ʽ
	Lambda ���ʽ�Ѻ�����������
	Lambda ���ʽ���������һ��ʹ�ã�������Խ����Ǹ�����������Ϊ�������ݣ�����������һ��������ֵ��
	Lambda ���ʽ�������뺯�������ǳ����ơ�
[capture](parameters)->return-type{body}

eg [](int x, int y) -> int { int z = x + y; return z + x;

*/