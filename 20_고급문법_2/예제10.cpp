#include<iostream>
#include<cassert>
using namespace std;

int main(void)
{
	int score;
	while (true)
	{
		cout << "Input score : ";
		cin >> score;
		//0보다 작은 score가 들어오면 assert error!!
		assert(score >= 0);
		cout << "=> score : " << score << endl;
	}
	return 0;
}