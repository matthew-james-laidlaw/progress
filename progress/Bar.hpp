#pragma once

#include "Subscriber.hpp"

using PercentComplete = int;

class Bar final : public ISubscriber<PercentComplete>
{
public:
	void Update(PercentComplete const& message);
};
