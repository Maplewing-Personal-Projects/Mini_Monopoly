#include <iostream>
#include "CRandomCostUnit.h"
using std::cout;

void CRandomCostUnit::printInformation() const{
  CSingleFineUnit::printInformation();
  if(owner_ != NO_OWNER) cout << "?      ";
  cout << "   ";
}
