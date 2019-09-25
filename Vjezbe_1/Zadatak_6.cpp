#include <iostream>

using namespace std;

// Declare class ElementaryParticle
class ElementaryParticle
{
    // Declare public members that can be called by objects of type ElementaryParticle
    public:

    string _name;
    float _mass;
    bool _isBoson;

    // Default Constructor
    ElementaryParticle( string name, float mass, bool isBoson)
    {
        _name = name;
        _mass = mass;
        _isBoson = isBoson;
    }

    void printInfo()
    {
       cout << "Particle named " << _name << " has a mass of " << _mass << " GeV." << endl;
       cout << "This particle is ";
       if ( !_isBoson ) cout << "not ";
       cout << "a boson!" << endl;
    }
};

int main() {

    // // Declare an object of class ElementaryParticle
    // ElementaryParticle Higgs;
    // ElementaryParticle TopQuark;
    //
    // // Declare object properties accessing public class members
    // Higgs.name = "Higgs boson";
    // Higgs.mass = 125.26;
    // Higgs.isBoson = true;
    //
    // TopQuark.name = "Top quark";
    // TopQuark.mass = 173.0;
    // TopQuark.isBoson = false;
    //
    // // accessing member functions
    // Higgs.printInfo();
    // TopQuark.printInfo();
    //
    // // Declare a pointer to an object of class ElementaryParticle
    // ElementaryParticle *Z;
    //
    // Z->name = "Z boson";
    // Z->mass = 91.12;
    // Z->isBoson = true;
    //
    // Z->printInfo();

    ElementaryParticle Higgs("Higgs boson", 125.6, true);
    ElementaryParticle TopQuark("Top quark", 173.0, false);

    Higgs.printInfo();
    TopQuark.printInfo();

    ElementaryParticle *Z;
    Z = new ElementaryParticle("Z boson", 91.2, true);
    Z->printInfo();
    delete Z;

    return 0;
}
