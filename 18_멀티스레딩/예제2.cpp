#include <iostream> 
#include <condition_variable> 
#include <mutex> 
#include <thread> 
using namespace std;

mutex m;
condition_variable cv;
string c;
bool ready = false, processed = false;

void worker_thread()
{
	// Wait until main() sends data
	unique_lock<std::mutex> lk(m);
	cv.wait(lk, [] { return ready; });
	// after the wait, we own the lock. 
	cout << "Worker thread is processing data\n";
	c += " after processing";
	// Send data back to main() 
	processed = true;
	cout << "Worker thread signals data processing completed\n";
	//notify 이전에 unlock 수행
	lk.unlock();
	cv.notify_one();
}

int main()
{
	thread th(worker_thread);
	c = "Example data";
	// send data to the worker thread 
	{
		lock_guard<std::mutex> lk(m);
		ready = true;
		cout << "main() signals data ready for processing\n";
	}
	cv.notify_one();
	// wait for the worker 
	{
		unique_lock<std::mutex> lk(m);
		cv.wait(lk, [] { return processed; });
	}
	cout << "Back in main(), data = " << c << '\n';
	th.join();
}