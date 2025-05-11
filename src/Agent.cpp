#include "Agent.h"

Agent::Agent(StrategyType strategy) : strategy(strategy) {}

StrategyType Agent::getStrategy() const {
    return strategy;
}
