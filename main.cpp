#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "CGame.h"
using namespace std;

void initializePlayers(CWorldPlayer& world_player);

int main(){
  ifstream fin("map.dat");
  CWorldMap world_map(fin);
  CWorldPlayer world_player;
  initializePlayers(world_player);

  CGame game( world_map,  world_player);
  srand(time(NULL));
  game.run();

  return 0;
}

void initializePlayers(CWorldPlayer& world_player){
  int player_num;
  cout << "How many players? (Maximum:" << CGame::MAX_PLAYER_NUM << ")...>";
  cin >> player_num;

  string breakline;
  getline(cin, breakline);

  for(int i = 0 ; i < player_num ; i++){
    string name;
    cout << "Please input player" << i+1 << "'s name (Default: " << CGame::DEFAULT_NAME[i] << "): ";
    getline(cin, name);
    if(name == "") name = CGame::DEFAULT_NAME[i];
    world_player.add(CPlayer(world_player.totalPlayerNum(), name));
  }
}
