#pragma once

#include "Subscriber.hpp"

namespace Progress
{

using PercentComplete = int;

class Bar final : public ISubscriber<PercentComplete>
{
public:
	void Update(PercentComplete const& message);
};

}
