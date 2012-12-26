#include <iostream>
#include "CGame.h"
using std::cout;

void CGame::run(){
  while( !is_end_ && !is_exit_ ){

  }

}

void CGame::update(){

}

void CGame::draw() const{
  for( int i = 0 ; i < world_map_.totalMapUnitNum() ; i++ ){

    cout << '=';
    for( int j = 0 ; j < world_player_.totalPlayerNum() ; j++ ){
      if( world_player_[j].getLocation() == i ){
        cout << j;
      }
      else cout << " ";
    }


  }
}
