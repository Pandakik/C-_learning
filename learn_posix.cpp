#include<iostream>
#include<pthread.h>
using namespace std;

#definde tread_num = 5;
//1定义线程运行程序
void *say_hello(void *args)
{
    cout<<"hello,i am fine!"<<endl;
    return 0;
}


int main()
{
//2定义线程的id变量，多变量使用数组
    pthrad_t tids[tread_num];
        for(int i = 0; i < NUM_THREADS; ++i)
    {
//3参数依次是：创建的线程id，线程参数，调用的函数，传入的函数参数
        int ret = pthread_create(&tids[i], NULL, say_hello, NULL);
        if (ret != 0)
        {
           cout << "pthread_create error: error_code=" << ret << endl;
        }
    }
 //4等各个线程退出后，进程才结束，否则进程强制结束了，线程可能还没反应过来；
    pthread_exit(NULL);

}