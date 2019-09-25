// C++
#include <iostream>

// My own class
#include <ElementaryParticle.h>

using namespace std;

int main()
{
  ElementaryParticle *Higgs;

  Higgs = new ElementaryParticle("Higgs boson", 125.6, true);
  Higgs->printInfo();
  Higgs->setP(10., 15., 20.);
  cout << "Our " << Higgs->_name << " has a pT = " << Higgs->pt() << " GeV." << endl;

  ElementaryParticle *decayParticle_1, *decayParticle_2;
  decayParticle_1 = new ElementaryParticle();
  decayParticle_2 = new ElementaryParticle();

  Higgs->bosonDecay(decayParticle_1, decayParticle_2);

  cout << Higgs->_name << " decayed to:" << endl;
  decayParticle_1->printInfo();
  cout << "with four-momentum: ";
  decayParticle_1->printP4();

  cout << "and:" << endl;
  decayParticle_2->printInfo();
  cout << "with four-momentum: ";
  decayParticle_2->printP4();

  return 0;
}
