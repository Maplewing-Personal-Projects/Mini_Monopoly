#ifndef KNIGHT_CWORLDPLAYER_H
#define KNIGHT_CWORLDPLAYER_H
#include <vector>
#include "CPlayer.h"

class CWorldPlayer{
  public:
    void add(const CPlayer& player);

    static const int MAXPLAYERS = 4;
  private:
    std::vector<CPlayer> players;
};

#endif // KNIGHT_CWORLDPLAYER_H
