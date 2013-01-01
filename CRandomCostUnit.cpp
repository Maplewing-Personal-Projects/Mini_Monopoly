#include <iostream>
#include <string>
#include "CGame.h"
#include "CRandomCostUnit.h"
#include "CPlayer.h"
using std::cout;
using std::string;

void CRandomCostUnit::printInformation() const{
  CSingleFineUnit::printInformation();
  if(owner_ != NO_OWNER) cout << "?      ";
  cout << "   ";
}

void CRandomCostUnit::action(CPlayer& player){
  if(owner_ == NO_OWNER){
    payForThisUnit(player, "buy", price_);
  }
  else if( owner_->getID() == player.getID() ){
    ignoreOwnerArrive(player);
  }
  else{
    int dice = CGame::dice();
    printCostMoney(player, dice);
    costMoney(player, fine_*dice);
  }
}
