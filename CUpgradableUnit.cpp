#include <iostream>
#include <iomanip>
#include <string>
#include "CPlayer.h"
#include "CUpgradableUnit.h"
using std::cin;
using std::cout;
using std::endl;
using std::setw;
using std::string;

void CUpgradableUnit::printInformation() const{
  CPriceUnit::printInformation();
  if( owner_ == NO_OWNER ) cout << "   ";
  else cout << "U$" << setw(5) << fine_[level_] << " L" << level_+1;
}

void CUpgradableUnit::action(CPlayer& player){
  if(owner_ == NO_OWNER){
    payForThisUnit(player, "buy", price_);
  }
  else if( owner_->getID() == player.getID() ){
    if( level_ < MAX_LEVEL-1 ){
      if(payForThisUnit(player, "upgrade", upgrade_price_)) ++level_;
    }
    else cout << player.getName() << ", your unit reached the highest level." << endl;
  }
  else{
    cout << player.getName() << ", you must pay $";
    cout << fine_[level_] << " to Player ";
    cout << owner_->getID() << " (" << owner_->getName() << ")." << endl;
    costMoney(player, fine_[level_]);
  }
}
