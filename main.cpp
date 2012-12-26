#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "CGame.h"
using namespace std;

void initialize();

int main(){
  ifstream fin("map.dat");
  CWorldMap world_map(fin);
  CWorldPlayer world_player;
  world_player.promptInitialize();

  CGame game( world_map,  world_player);
  srand(time(NULL));
  game.run();

  return 0;
}

