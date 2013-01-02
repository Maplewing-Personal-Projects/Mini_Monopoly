#include <iostream>
#include <iomanip>
#include <string>
#include "CPriceUnit.h"
#include "CPlayer.h"
using std::cin;
using std::cout;
using std::endl;
using std::min;
using std::max;
using std::setw;
using std::string;

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

bool CPriceUnit::payForThisUnit(CPlayer &player, string action, int price){
  string command;
  cout << player.getName() << ", do you want to " << action << " ";
  cout << name_ << "? (1: Yes [default] / 2: No) ...>";
  getline( cin, command );

  if(command[0] == '2') return false;
  if(price > player.getMoney()){
    cout << "You don't have enough money to " << action << " it.\n";
    return false;
  }
  cout << "You pay $" << price << " to " << action << " " << name_ << '.' << endl;
  player.setMoney(player.getMoney()-price);
  if( action == "buy" ){
    owner_ = &player;
    player.addUnit(this);
  }
  return true;
}

void CPriceUnit::costMoney(CPlayer& player, int money){
  owner_->setMoney(owner_->getMoney() + min(money, player.getMoney()));
  player.setMoney(player.getMoney()-money);
}
