#include <iostream>
#include <string>
#include <cstdlib>
#include "CGame.h"
using std::cin;
using std::cout;
using std::endl;
using std::string;

void CGame::run(){
  while(!is_end_ && !is_exit_){
    system("cls");
    printInformation();
    cout << endl;
    controlGo();
    if( is_exit_ ) break;

    system("pause");
  }

}

void CGame::controlGo(){
  cout << world_player_[current_player_id_].getName();
  cout << ", your action? (1:Dice [default] / 2:Exit)...>";

  string command;
  getline(cin, command);

  if(command[0] == '2'){
    is_exit_ = true;
    return;
  }

  int new_location = world_player_[current_player_id_].getLocation()+(rand()%6+1);
  if( new_location > world_map_.totalMapUnitNum() ){
    world_player_[current_player_id_].addMoney(2000);
  }
  world_player_[current_player_id_].setLocation(new_location % world_map_.totalMapUnitNum());
}

void CGame::printInformation() const{
  for(int i = 0 ; i < world_map_.totalMapUnitNum()/2 ; i++){
    printMapInformation(i);
    cout << "    ";
    printMapInformation(world_map_.totalMapUnitNum()-i-1);
    cout << endl;
  }

  cout << endl;

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
  world_player_[player_id].printInformation();
  cout << endl;
}
