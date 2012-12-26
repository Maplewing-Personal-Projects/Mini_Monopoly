#include <iostream>
#include <cstdlib>
#include "CGame.h"
using std::cout;
using std::endl;

void CGame::run(){
  while(!is_end_ && !is_exit_){
    system("cls");
    printInformation();
    system("pause");
  }

}

void CGame::update(){

}

void CGame::printInformation() const{
  for(int i = 0 ; i < world_map_.totalMapUnitNum()/2 ; i++){
    printMapInformation(i);
    cout << "    ";
    printMapInformation(world_map_.totalMapUnitNum()-i-1);
    cout << endl;
  }

  for(int i = 0 ; i < world_player_.totalPlayerNum() ; i++){
    if( current_player_id_ == i ) cout << "=>";
    else cout << "  ";

    cout << "[" << i << "]";
    printPlayerInformation(i);
  }
}

void CGame::printMapInformation(int map_unit_id) const{
  cout << '=';
  for(int i = 0 ; i < world_player_.totalPlayerNum() ; i++){
    if(world_player_[i].getLocation() == map_unit_id){
      cout << i;
    }
    else cout << " ";
  }
  cout << '=';
  world_map_[map_unit_id].printInformation();
}

void CGame::printPlayerInformation(int player_id) const{

}
