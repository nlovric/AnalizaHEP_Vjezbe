// C++
#include <iostream>

// My own class
#include <ElementaryParticle.h>

using namespace std;

int main()
{
  ElementaryParticle *Higgs;

  Higgs = new ElementaryParticle("Higgs boson", 125.26, true);

  Higgs->printInfo();
  
  return 0;
}
