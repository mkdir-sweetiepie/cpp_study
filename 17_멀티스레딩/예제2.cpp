#include <iostream>
#include <thread>
using namespace std;

class Task
{
public:
	void execute(string command)
	{
		for (int i = 0; i < 5; i++)
		{
			cout << command << " :: "<< i << endl;
		}
	}
};

int main()
{
	Task* taskPtr = new Task();
	// Create a thread using member function
	thread th(&Task::execute, taskPtr, "Sample Task");
	th.join();
	delete taskPtr;
}
