#include <cellular_automaton.h>
#include <iostream>

int main()
{
   std::size_t rule;
   std::size_t steps;

   std::cout << "Enter rule number (0-255): ";
   std::cin >> rule;
   std::cout << "Enter number of steps: ";
   std::cin >> steps;

   CellularAutomaton automaton(rule, steps);
   automaton.run();

   return 0;
}