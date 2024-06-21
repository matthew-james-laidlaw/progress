#pragma once

#include "Publisher.hpp"
#include "Subscriber.hpp"

#include <unordered_set>

namespace Progress
{

using PercentComplete = int;

class Task final : public IPublisher<PercentComplete>
{
public:
	void Subscribe(std::shared_ptr<ISubscriber<PercentComplete>> subscriber) override;
	void Unsubscribe(std::shared_ptr<ISubscriber<PercentComplete>> subscriber) override;
	void Notify(PercentComplete const& message) override;
private:
	std::unordered_set<std::shared_ptr<ISubscriber<PercentComplete>>> subscribers;
};

}
