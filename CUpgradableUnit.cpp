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
    buyThisUnit(player);
  }
  else if( owner_->getID() == player.getID() ){
    if( level_ < MAX_LEVEL ){
      string command;
      cout << player.getName() << ", do you want to pay";
      cout << upgrade_price_ << "to upgrade your unit? (1: Yes [default] / 2: No) ...>";
      getline( cin, command );

      if(command[0] != '2'){
        if(upgrade_price_ > player.getMoney()){
          cout << "You don't have enough money to upgrade it.";
        }
        else{
          cout << "You pay $" << upgrade_price_ << " to upgrade " << name_ << '.' << endl;
          player.setMoney(player.getMoney()-upgrade_price_);
          ++level_;
        }
      }
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
