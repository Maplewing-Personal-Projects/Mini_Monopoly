#include "CWorldPlayer.h"

CWorldPlayer::CWorldPlayer(int player_num, CPlayer players[]){
  for( int i = 0 ; i < player_num ; i++ ){
    players_.push_back(players[i]);
  }
}
