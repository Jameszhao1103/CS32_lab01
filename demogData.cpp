#include "demogData.h"
#include <sstream>

/* print county demographic data */
std::ostream& operator<<(std::ostream &out, const demogData &DD) {
    out << "County Demographics Info: " << DD.getName() << ", " << DD.state;
    out << " total population: " << DD.totalPopulation2014;
    //consider re-writing with getters....
    out << "\nPopulation info: \n(\% over 65): " << DD.popOver65;
    out <<  " Count: " << DD.getpopOver65Count();
    out << "\n(\% under 18): " << DD.popUnder18;
    out <<  " Count: " << DD.getpopUnder18Count();
    out << "\n(\% under 5): " << DD.popUnder5;
    out <<  " Count: " << DD.getpopUnder5Count();
    out << "\nEducation info: ";
    out << "\n(\% Bachelor degree or more): " << DD.popBA;
    out <<  " Count: " << DD.getBAupCount();
    out << "\n(\% high school or more): " << DD.popHS;
    out <<  " Count: " << DD.getHSupCount();
    return out;
}
