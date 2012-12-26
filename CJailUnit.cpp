#include <iostream>
#include "CJailUnit.h"
#include "CPlayer.h"
using std::cout;

void CJailUnit::printInformation() const{
  CMapUnit::printInformation();
  cout << "     J         ";
}

void CJailUnit::action(CPlayer& player){
  cout << player.getName() << ", you have to stay " << STAY_ROUND << " round.\n";
  player.setJailRoundCount(player.getJailRoundCount()+STAY_ROUND);
}
