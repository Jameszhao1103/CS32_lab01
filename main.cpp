#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <memory>
#include "demogData.h"
#include "parse.h"

using namespace std;

int main() {
    //read in a csv file and create a vector of objects representing each counties data
    std::vector<shared_ptr<demogData>> theData = read_csv(
            "county_demographics.csv", DEMOG);

    //debug print out
    for (const auto &obj : theData) {
        std::cout << *obj << std::endl;
    }

	 cout << "There are " << theData.size() << " counties in data set." << endl;

    return 0;
}

