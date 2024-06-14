#include <queue> 
#include <string> 
#include <thread> 
#include <mutex> 
#include <condition_variable> 

#include <iostream>
#include <sstream>
#include <thread>
#include <vector>
using namespace std;

class Logger {
public:
	//Starts a background thread writing log entries to a file. Logger(); // Add log entry to the queue. void log(const std::string& entry); 
protected:
	void processEntries();
	mutex mMutex;
	condition_variable mCondVar;
	queue<std::string> mQueue;
	thread mThread; // The background thread. private: // Prevent copy construction and assignment. Logger(const Logger& src); 
	Logger& operator=(const Logger& rhs);
};

Logger::Logger() 
{
	// Start background thread. mThread = thread{&Logger::processEntries, this}; 
}


void Logger::log(const std::string& entry) 
{
	unique_lock<mutex> lock(mMutex);
	mQueue.push(entry);
	mCondVar.notify_all(); // Notify condition variable to wake up thread. 
} 

void Logger::processEntries()
{
	ofstream ofs("log.txt"); // Open log file. 
	if (ofs.fail()) 
	{
		cerr << "Failed to open logfile." << endl; return;
	}
	// Start processing loop. unique_lock<mutex> lock(mMutex); 
	while (true) 
	{
		mCondVar.wait(lock); // Wait for a notification. 
		// Condition variable is notified, so something is in the queue. 
		lock.unlock();
		while (true) 
		{
			lock.lock();
			if (mQueue.empty()) break;
			else 
			{
				ofs << mQueue.front() << endl;
				mQueue.pop();
			}
			lock.unlock();
		}
	}
}

void logsomeMessages(int id, Logger& logger)
{
	for (int i = 0; i < 10; ++i)
	{
		stringstream ss;
		ss << "log entry " << i << " from thread " << id;
		logger.log(ss.str());
	}
}

int main()
{
	Logger logger;
	vector <thread> threads;

	for (int i = 0; i < 10; ++i)
	{
		threads.push_back(thread{ logsomeMessages, i, ref(logger) });
	}
	for (auto& t : threads)
	{
		t.join();
	}

	return 0;
}
