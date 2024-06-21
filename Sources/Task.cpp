#include "Task.hpp"

using namespace Progress;

void Task::Subscribe(std::shared_ptr<ISubscriber<PercentComplete>> subscriber)
{
	subscribers.insert(subscriber);
}

void Task::Unsubscribe(std::shared_ptr<ISubscriber<PercentComplete>> subscriber)
{
	subscribers.erase(subscriber);
}

void Task::Notify(PercentComplete const& message)
{
	for (auto const& subscriber : subscribers)
	{
		subscriber->Update(message);
	}
}
