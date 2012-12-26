#include <iostream>
#include "CRandomCostUnit.h"
using std::cout;

void CRandomCostUnit::printInformation() const{
  CSingleFineUnit::printInformation();
  if(owner_id_ != NO_OWNER) cout << "?      ";
  cout << "   ";
}
