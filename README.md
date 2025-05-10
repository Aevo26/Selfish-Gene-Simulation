# Selfish-Gene-Simulation
A C++ simulation inspired by The Selfish Gene by Richard Dawkins, modeling how selfish behavior can evolve and outperform cooperative behavior in an artificial ecosystem. This project explores gene-centered evolution through agent-based modeling.

📌 Project Goals
Model agents (organisms) with different behavioral strategies.

Simulate interactions over time where agents compete for resources.

Observe the emergence and dominance of behaviors across generations.

Provide a configurable framework for experimenting with evolutionary rules.

🧠 Core Concepts
Gene-centered evolution: Agents replicate based on strategy fitness.

Strategies:

Selfish: Takes resources without helping others.

Cooperative: Shares with others nearby.

Tit-for-Tat: Remembers and reciprocates behavior.

Natural Selection: Fitter strategies are more likely to reproduce.

Mutation: Offspring may randomly mutate strategy or traits.

🏗️ Simulation Components
Agent
Variable	Description	Customizable
energy	Current energy for survival/reproduction	✅ via config
strategy	Behavior model (selfish/cooperative/other)	✅
genome	Encoded traits for evolution	✅ (optional)
id	Unique identifier	❌

Environment
Variable	Description	Customizable
resourcePool	Amount of resources available each tick	✅ via config
agents	Vector of all agents in the environment	✅
interactionRule	Defines how agents interact	✅

Simulation
Variable	Description	Customizable
generationCount	Total number of generations to simulate	✅ via CLI
mutationRate	Probability of strategy mutation	✅ via config
logging	Output stats per generation	✅

🔧 Configuration
Use config.json to tweak the simulation without recompiling:

json
Copy
Edit
{
  "initial_agents": 100,
  "resource_per_tick": 500,
  "mutation_rate": 0.05,
  "strategy_distribution": {
    "SELFISH": 0.4,
    "COOPERATIVE": 0.4,
    "TIT_FOR_TAT": 0.2
  }
}
🚀 How to Run
bash
Copy
Edit
git clone https://github.com/yourusername/selfish-gene-sim.git
cd selfish-gene-sim
make
./selfish-gene-sim config.json
📈 Output
CSV log files for each generation.

Columns: generation, selfish_count, cooperative_count, tit_for_tat_count, avg_energy, deaths, births.

💡 Planned Enhancements
✅ Agent evolution with genome-based traits

✅ Tit-for-tat behavior memory using maps

⏳ Spatial positioning (agents only affect neighbors)

⏳ Visualizations via Python or Gnuplot

⏳ GUI for interaction tuning

⏳ Reproduction costs and lifespans

📚 Inspiration
Based on concepts from The Selfish Gene by Richard Dawkins. This simulation does not model biology directly but is an abstract interpretation to demonstrate evolutionary principles computationally.
