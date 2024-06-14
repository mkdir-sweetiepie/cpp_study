//#include <iostream>
//#include <thread>
//#include <mutex>
//using namespace std;
//
//int value;
//void increase_value()
//{
//	value++;
//	cout << value << endl;
//}
//
//int main()
//{
//	value = 0;
//	thread t[10];
//	for (auto i = 0; i < 1000; i++)
//	{
//		// 스레드 생성
//		t[i] = thread(increase_value);
//	}
//	for (int i = 0; i < 1000; i++)
//	{
//		// 스레드 대기 종료
//		t[i].join();
//	}
//}

#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

int value;
mutex mtx; //

void increase_value()
{
    // 뮤텍스를 사용하여 value 변수에 대한 접근을 보호합니다.
    lock_guard<mutex> lock(mtx);
    value++;
    cout << value << endl;
}

int main()
{
    value = 0;
    thread t[1000];  // 스레드 배열 크기를 1000으로 설정합니다.
    for (auto i = 0; i < 1000; i++)
    {
        // 스레드 생성
        t[i] = thread(increase_value);
    }
    for (int i = 0; i < 1000; i++)
    {
        // 스레드 대기 종료
        t[i].join();
    }
    return 0;
}
