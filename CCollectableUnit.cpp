#include <iostream>
#include <iomanip>
#include <vector>
#include "CGame.h"
#include "CCollectableUnit.h"
using std::cout;
using std::setw;
using std::left;
using std::right;
using std::vector;

vector<int> CCollectableUnit::player_own_unit_num(CGame::MAX_PLAYER_NUM);

void CCollectableUnit::printInformation() const{
  CSingleFineUnit::printInformation();
  if(owner_ != NO_OWNER) cout << "x" << setw(2) << left << player_own_unit_num[owner_->getID()] << right << "    ";
  cout << "   ";
}

void CCollectableUnit::action(CPlayer& player){
  if(owner_ == NO_OWNER){
    if( payForThisUnit(player, "buy", price_) ) ++player_own_unit_num[player.getID()];
  }
  else if( owner_->getID() == player.getID() ){
    ignoreOwnerArrive(player);
  }
  else{
    printCostMoney(player, player_own_unit_num[owner_->getID()]);
    costMoney(player, fine_*player_own_unit_num[owner_->getID()]);
  }
}
