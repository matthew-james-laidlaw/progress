#pragma once

#include <memory>

namespace Progress
{

template <typename Messagetype>
class ISubscriber;

template <typename MessageType>
class IPublisher
{
public:
	virtual ~IPublisher() = default;
	virtual void Subscribe(std::shared_ptr<ISubscriber<MessageType>> subscriber) = 0;
	virtual void Unsubscribe(std::shared_ptr<ISubscriber<MessageType>> subscriber) = 0;
	virtual void Notify(MessageType const& message) = 0;
};

}
