#include <iostream>
#include "CJailUnit.h"
using std::cout;

void CJailUnit::printInformation() const{
  CMapUnit::printInformation();
  cout << "     J         ";
}
