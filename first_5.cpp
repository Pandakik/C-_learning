//exa_12��ѧ����
/*
C++ �����˷ḻ����ѧ�������ɶԸ������ֽ������㡣�±��г��� C++ ��һЩ���õ����õ���ѧ������
Ϊ��������Щ����������Ҫ������ѧͷ�ļ� <cmath>
1	double cos(double);
�ú������ػ��Ƚǣ�double �ͣ������ҡ�
2	double sin(double);
�ú������ػ��Ƚǣ�double �ͣ������ҡ�
3	double tan(double);
�ú������ػ��Ƚǣ�double �ͣ������С�
4	double log(double);
�ú������ز�������Ȼ������
5	double pow(double, double);
�����һ������Ϊ x���ڶ�������Ϊ y����ú������� x �� y �η���
6	double hypot(double, double);
�ú�����������������ƽ���ܺ͵�ƽ������Ҳ����˵������Ϊһ��ֱ�������ε�����ֱ�Ǳߣ������᷵��б�ߵĳ��ȡ�
7	double sqrt(double);
�ú������ز�����ƽ������
8	int abs(int);
�ú������������ľ���ֵ��
9	double fabs(double);
�ú�����������һ���������ľ���ֵ��
10	double floor(double);
�ú�������һ��С�ڻ���ڴ�����������������
*/

//exa_13�����
/*
���������£���Ҫ������������������������������������صĺ�����
һ���� rand()���ú���ֻ����һ��α����������������֮ǰ�����ȵ��� srand() ������
*/
//ʾ��
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int i, j;

    // ��������
    srand((unsigned)time(NULL));

    /* ���� 10 ������� */
    for (i = 0; i < 10; i++)
    {
        // ����ʵ�ʵ������
        j = rand();
        cout << "������� " << j << endl;
    }
    return 0;
}
