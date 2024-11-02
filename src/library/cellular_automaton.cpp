#include <cellular_automaton.h>
#include <iostream>
#include <bitset>

CellularAutomaton::CellularAutomaton(std::size_t rule, std::size_t steps)
    : rule(rule), steps(steps), size(steps * 2 + 1), currentState(size, 0)
{
   for (std::size_t i = 0; i < 8; ++i)
   {
      ruleSet[i] = (rule >> i) & 1;
   }

   currentState[size / 2] = 1;
}

void CellularAutomaton::generateNextState()
{
   std::vector<std::size_t> newState(size, 0);

   for (std::size_t i = 0; i < size; ++i)
   {
      std::size_t left = currentState[(i == 0) ? size - 1 : i - 1];
      std::size_t center = currentState[i];
      std::size_t right = currentState[(i == size - 1) ? 0 : i + 1];

      std::size_t neighborhood = (left << 2) | (center << 1) | right;

      newState[i] = ruleSet[neighborhood];
   }

   currentState = newState;
}

void CellularAutomaton::displayCurrentState() const
{
   for (std::size_t cell : currentState)
   {
      std::cout << (cell ? "██" : "  ");
   }

   std::cout << '\n';
}

void CellularAutomaton::run()
{
   for (std::size_t i = 0; i < steps; ++i)
   {
      displayCurrentState();
      generateNextState();
   }
}
