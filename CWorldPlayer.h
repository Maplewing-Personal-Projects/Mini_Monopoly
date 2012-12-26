#ifndef KNIGHT_CWORLDPLAYER_H
#define KNIGHT_CWORLDPLAYER_H
#include <vector>
#include "CPlayer.h"

class CWorldPlayer{
  public:
    CWorldPlayer(int player_num, CPlayer players[]);

  private:
    std::vector<CPlayer> players_;
};

#endif // KNIGHT_CWORLDPLAYER_H
