#include "Agent.h"
#include "Environment.h"
#include <iostream>
#include <memory>

int main() {
    Environment env;

    // Create test agents
    std::shared_ptr<Agent> agent1 = std::make_shared<Agent>(0, "Selfish");
    std::shared_ptr<Agent> agent2 = std::make_shared<Agent>(1, "Cooperative");

    // Add them to the environment
    env.addAgent(agent1);
    env.addAgent(agent2);

    std::cout << "Simulating one tick with 2 agents." << std::endl;
    env.tick();

    // Inspect agent state after the tick
    std::cout << "Agent 0 fitness: " << agent1->getFitness() << std::endl;
    std::cout << "Agent 1 fitness: " << agent2->getFitness() << std::endl;

    return 0;
}
