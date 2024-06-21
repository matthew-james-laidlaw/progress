#include "Task.hpp"
#include "Bar.hpp"

#include <thread>

// #include <conio.h>

class Terminal
{
public:
	void EnableVirtualTerminal();
	void SetRawMode();
	void RestoreMode();
	void SendEscapeCode();
};

int main()
{
	Progress::Task task;
	Progress::Bar bar;
	task.Subscribe(std::make_shared<Progress::Bar>(bar));
	for (int i = 0; i < 10; ++i)
	{
		task.Notify(i * 10);
		std::this_thread::sleep_for(std::chrono::milliseconds(100));
	}
	return 0;
}
