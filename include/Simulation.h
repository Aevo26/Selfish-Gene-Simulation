#pragma once
#include "StrategyType.h"

class Agent {
public:
    Agent(StrategyType strategy);
    StrategyType getStrategy() const;

private:
    StrategyType strategy;
};
