#pragma once
#include <vector>
#include "Agent.h"

class Environment {
public:
    Environment();
    void addAgent(const Agent& agent);
    void simulateTick();

private:
    std::vector<Agent> agents;
};
