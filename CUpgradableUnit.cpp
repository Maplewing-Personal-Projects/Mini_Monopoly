#include <iostream>
#include <iomanip>
#include "CUpgradableUnit.h"
using std::cout;
using std::setw;

void CUpgradableUnit::printInformation() const{
  CPriceUnit::printInformation();
  if( owner_id_ == NO_OWNER ) cout << "   ";
  else cout << "U$" << setw(5) << fine_[level_] << " L" << level_+1;
}
