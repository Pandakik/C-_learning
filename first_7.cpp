//exa_15�ַ���
/*
1-C ����ַ���
char site[7] = {'R', 'U', 'N', 'O', 'O', 'B', '\0'};
char site[] = "RUNOOB";
�ַ���ʵ������ʹ�� null �ַ� \0 ��ֹ��һά�ַ�����

2-C++ �е� String ��
#include <iostream>
#include <string>

using namespace std;

int main ()
{
   string str1 = "runoob";
   string str2 = "google";
   string str3;
   int  len ;

   // ���� str1 �� str3
   str3 = str1;
   cout << "str3 : " << str3 << endl;

   // ���� str1 �� str2
   str3 = str1 + str2;
   cout << "str1 + str2 : " << str3 << endl;

   // ���Ӻ�str3 ���ܳ���
   len = str3.size();
   cout << "str3.size() :  " << len << endl;

   return 0;
}

3-�ַ�������
1	strcpy(s1, s2);
�����ַ��� s2 ���ַ��� s1��
2	strcat(s1, s2);
�����ַ��� s2 ���ַ��� s1 ��ĩβ�������ַ���Ҳ������ + �ţ�����:
string str1 = "runoob";
string str2 = "google";
string str = str1 + str2;
3	strlen(s1);
�����ַ��� s1 �ĳ��ȡ�
4	strcmp(s1, s2);
��� s1 �� s2 ����ͬ�ģ��򷵻� 0����� s1<s2 �򷵻�ֵС�� 0����� s1>s2 �򷵻�ֵ���� 0��
5	strchr(s1, ch);
����һ��ָ�룬ָ���ַ��� s1 ���ַ� ch �ĵ�һ�γ��ֵ�λ�á�
6	strstr(s1, s2);
����һ��ָ�룬ָ���ַ��� s1 ���ַ��� s2 �ĵ�һ�γ��ֵ�λ�á�


*/