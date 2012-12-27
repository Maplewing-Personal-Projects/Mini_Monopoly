#include <iostream>
#include "CCollectableUnit.h"
using std::cout;

void CCollectableUnit::printInformation() const{
  CSingleFineUnit::printInformation();
  if(owner_ != NO_OWNER) cout << "x1     ";
  cout << "   ";
}
