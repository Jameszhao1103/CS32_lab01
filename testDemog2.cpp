#include "demogData.h"
#include <iostream>
#include "tddFuncs.h"
using namespace std;

int main() {
  cout << "Testing class county demographics..." << endl;

  /* will not work until student modifies class */
  demogData c1("Santa Barbara", "CA", 14.0, 22.4, 6.4, 31.3, 79.1, 440668);
  ASSERT_EQUALS("Santa Barbara",c1.getName());
  ASSERT_EQUALS("CA",c1.getState());
  ASSERT_EQUALS(14.0,c1.getpopOver65());
  ASSERT_EQUALS(22.4,c1.getpopUnder18());
  ASSERT_EQUALS(6.4,c1.getpopUnder5());
  ASSERT_EQUALS(31.3,c1.getBAup());
  ASSERT_EQUALS(79.1,c1.getHSup());
  ASSERT_EQUALS(440668,c1.getPop());

  ASSERT_EQUALS(int(14.0/100.0*c1.getPop()),c1.getpopOver65Count());
  ASSERT_EQUALS(int(22.4/100.0*c1.getPop()),c1.getpopUnder18Count());
  ASSERT_EQUALS(int(6.4/100.0*c1.getPop()),c1.getpopUnder5Count());
  ASSERT_EQUALS(int(31.3/100.0*c1.getPop()),c1.getBAupCount());
  ASSERT_EQUALS(int(79.1/100.0*c1.getPop()),c1.getHSupCount());

  return 0;
}
