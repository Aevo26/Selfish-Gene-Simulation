#include "Environment.h"
#include <iostream>

void Environment::addAgent(std::shared_ptr<Agent> agent) {
    agents.push_back(agent);
}

void Environment::tick() {
    for (size_t i = 0; i < agents.size(); ++i) {
        for (size_t j = i + 1; j < agents.size(); ++j) {
            agents[i]->interactWith(agents[j]);
            agents[j]->interactWith(agents[i]);
        }
    }
}
