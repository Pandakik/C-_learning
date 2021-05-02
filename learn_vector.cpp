#include<iostream>
//#include<stack>
#include<vector>
#include<algorithm>//使用sort函数的头文件
using namespace std;

//vector容器的使用
int main()
{   
//一维数组
    //1_定义vector
    vector<char> astr;
    //2_在数组末尾增添数据
    astr.push_back('s');
    //3_去掉数组某位的一个数据
    astr.pop_back();
    //4_清除所有数据
    astr.clear();
    //5_排序
    sort(astr.begin(),astr.end());//升序，降序可重写函数
    //降序
    bool compare(int a,int b)
    {
        return a>b;
    }
    sort(astr.begin(),astr.end());
    //5_访问
    //1循环访问
    //2迭代器访问
    vector<char>::iterator it;//声明一个迭代器，来访问vector容器，
                            //作用：遍历或者指向vector容器的元素 
    for(it = astr.begin();it!=str.end();it++)
    cout<<*it<<endl;
//二维数组    
    int n = 6,m = 6;
    //1
    vector<vector<int> tstr(6);//定义为六行
    //2
    vector<vector<int>> t2str(6,vector<int> 6);
    return 0; 
}
/*
基本函数整合
1.push_back 在数组的最后添加一个数据

2.pop_back 去掉数组的最后一个数据

3.at 得到编号位置的数据

4.begin 得到数组头的指针

5.end 得到数组的最后一个单元+1的指针

6．front 得到数组头的引用

7.back 得到数组的最后一个单元的引用

8.max_size 得到vector最大可以是多大

9.capacity 当前vector分配的大小

10.size 当前使用数据的大小

11.resize 改变当前使用数据的大小，如果它比当前使用的大，者填充默认值

12.reserve 改变当前vecotr所分配空间的大小

13.erase 删除指针指向的数据项

14.clear 清空当前的vector

15.rbegin 将vector反转后的开始指针返回(其实就是原来的end-1)

16.rend 将vector反转构的结束指针返回(其实就是原来的begin-1)

17.empty 判断vector是否为空

18.swap 与另一个vector交换数据

*/
