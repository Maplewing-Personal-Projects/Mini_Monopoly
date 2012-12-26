#include <iostream>
#include <fstream>
#include <string>
#include "CGame.h"
using namespace std;

void initialize();

int main(){
  ifstream fin("map.dat");
  CWorldMap world_map(fin);
  CWorldPlayer world_player;
  world_player.promptInitialize();

  CGame game( world_map,  world_player);

  return 0;
}

