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
//		// ������ ����
//		t[i] = thread(increase_value);
//	}
//	for (int i = 0; i < 1000; i++)
//	{
//		// ������ ��� ����
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
    // ���ؽ��� ����Ͽ� value ������ ���� ������ ��ȣ�մϴ�.
    lock_guard<mutex> lock(mtx);
    value++;
    cout << value << endl;
}

int main()
{
    value = 0;
    thread t[1000];  // ������ �迭 ũ�⸦ 1000���� �����մϴ�.
    for (auto i = 0; i < 1000; i++)
    {
        // ������ ����
        t[i] = thread(increase_value);
    }
    for (int i = 0; i < 1000; i++)
    {
        // ������ ��� ����
        t[i].join();
    }
    return 0;
}
