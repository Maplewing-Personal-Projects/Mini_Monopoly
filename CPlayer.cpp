#include <iostream>
#include <iomanip>
#include "CPriceUnit.h"
#include "CPlayer.h"
using std::cout;
using std::setw;

void CPlayer::printInformation() const{
  cout << setw(17) << name_;
  cout << "  $" << setw(5) << money_;
  cout << " with " << getOwnUnitNum() << " units.";
}

void CPlayer::clearUnits(){
  for( int i = 0 ; i < own_units_.size() ; i++ ){
    own_units_[i]->clearOwner();
  }
  own_units_.clear();
}
