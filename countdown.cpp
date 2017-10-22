#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

const int TOTAL_COUNT = 12;
const int BLINKING = 5;

void main()
{
	for (size_t i = TOTAL_COUNT; i > 0; i--)
	{
		cout << "\rTime until takeoff: " << i << " " << flush;
		this_thread::sleep_for(std::chrono::seconds(1));
	}

	system("cls");
	for (size_t i = BLINKING; i > 0; i--)
	{
		cout << "\rTakeoff" <<  flush;
		this_thread::sleep_for(std::chrono::milliseconds(500));
		cout << "\r       " << flush;
		this_thread::sleep_for(std::chrono::milliseconds(500));
	}
}
