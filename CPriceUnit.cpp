#include <iostream>
#include <iomanip>
#include "CPriceUnit.h"
using std::cout;
using std::setw;

void CPriceUnit::printInformation() const{
  CMapUnit::printInformation();
  if( owner_id_ == NO_OWNER ){
    cout << "     B";
    cout << "$" << setw(5) << price_;
  }
  else{
    cout << " {" << owner_id_ << "} ";
  }
}
