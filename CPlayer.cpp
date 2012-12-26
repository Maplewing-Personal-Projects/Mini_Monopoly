#include <iostream>
#include <iomanip>
#include "CPlayer.h"
using std::cout;
using std::setw;

void CPlayer::printInformation() const{
  cout << setw(17) << name_;
  cout << "  $" << setw(5) << money_;
  cout << " with " << getOwnUnitNum() << " units.";
}
