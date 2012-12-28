#include <iostream>
#include "CPlayer.h"
#include "CSingleFineUnit.h"
using std::cout;
using std::endl;

void CSingleFineUnit::ignoreOwnerArrive(const CPlayer& player) const{
  cout << player.getName() << ", you arrived your unit." << endl;
}

void CSingleFineUnit::printCostMoney(const CPlayer& player, int multiple) const{
    cout << player.getName() << ", you must pay $";
    cout << fine_ << " x " << multiple << " = $";
    cout << fine_*multiple << " to Player ";
    cout << owner_->getID() << " (" << owner_->getName() << ")." << endl;
}
