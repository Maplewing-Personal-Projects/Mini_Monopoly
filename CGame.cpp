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

    if( world_player_[current_player_id_].getJailRoundCount() > 0 ){
      cout << world_player_[current_player_id_].getName();
      cout << ", you have to stay ";
      cout << world_player_[current_player_id_].getJailRoundCount();
      cout << " round.\n";
      world_player_[current_player_id_]
        .setJailRoundCount(world_player_[current_player_id_]
                            .getJailRoundCount()-1);
      system("pause");
    }
    else{
      controlGo();
      if( is_exit_ ) break;

      system("cls");
      printInformation();
      cout << endl;
      controlMapAction();
      system("pause");
    }
    ++current_player_id_;
    current_player_id_ %= world_player_.totalPlayerNum();
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

  int new_location = world_player_[current_player_id_].getLocation()+CGame::dice();
  if( new_location > world_map_.totalMapUnitNum() ){
    world_player_[current_player_id_]
      .setMoney(world_player_[current_player_id_].getMoney()+2000);
  }
  world_player_[current_player_id_].setLocation(new_location % world_map_.totalMapUnitNum());
}

void CGame::controlMapAction(){
  world_map_[world_player_[current_player_id_].getLocation()]
    .action(world_player_[current_player_id_]);
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
