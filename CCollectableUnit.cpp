#include <iostream>
#include "CCollectableUnit.h"
using std::cout;

void CCollectableUnit::printInformation() const{
  CSingleFineUnit::printInformation();
  if(owner_id_ != NO_OWNER) cout << "x1     ";
  cout << "   ";
}
