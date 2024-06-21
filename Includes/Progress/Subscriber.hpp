#pragma once

namespace Progress
{

template <typename MessageType>
class ISubscriber
{
public:
	virtual ~ISubscriber() = default;
	virtual void Update(MessageType const& message) = 0;
};

}
