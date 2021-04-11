#include "demogData.h"
#include <iostream>
#include "tddFuncs.h"
using namespace std;

int main() {
  cout << "Testing class demogData..." << endl;

  demogData c1("Santa Barbara", "CA", 14.0, 22.4, 6.4, 440668);
  ASSERT_EQUALS("Santa Barbara",c1.getName());

  return 0;
}
