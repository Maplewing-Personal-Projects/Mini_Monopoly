#include <iostream>
#include <iomanip>
#include "CPriceUnit.h"
#include "CPlayer.h"
using std::cout;
using std::setw;

CPlayer* const CPriceUnit::NO_OWNER = 0;

void CPriceUnit::printInformation() const{
  CMapUnit::printInformation();
  if( owner_ == NO_OWNER ){
    cout << "     B";
    cout << "$" << setw(5) << price_;
  }
  else{
    cout << " {" << owner_->getID() << "} ";
  }
}
