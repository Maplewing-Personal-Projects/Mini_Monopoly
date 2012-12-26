#include <iostream>
#include <string>
#include "CWorldPlayer.h"
using std::cout;
using std::cin;
using std::string;

const string CWorldPlayer::DEFAULT_NAME[CWorldPlayer::MAX_PLAYER_NUM] = { "Sonic", "Tails", "Knuckles", "Amy" };

void CWorldPlayer::promptInitialize(){
  int player_num;
  cout << "How many players? (Maximum:" << MAX_PLAYER_NUM << ")...>";
  cin >> player_num;

  string breakline;
  getline(cin, breakline);

  for(int i = 0 ; i < player_num ; i++){
    string name;
    cout << "Please input player" << i+1 << "'s name (Default: " << DEFAULT_NAME[i] << "): ";
    getline(cin, name);
    if(name == "") name = DEFAULT_NAME[i];
    add(CPlayer(totalPlayerNum(), name));
  }
}
