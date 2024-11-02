#pragma once

#include <vector>

class CellularAutomaton
{
public:
   CellularAutomaton(std::size_t rule, std::size_t steps);

   void generateNextState();
   void displayCurrentState() const;
   void run();

private:
   std::size_t rule;
   std::size_t size;
   std::size_t steps;
   std::vector<std::size_t> currentState;
   std::size_t ruleSet[8];
};