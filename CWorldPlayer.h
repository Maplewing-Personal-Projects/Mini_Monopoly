#ifndef KNIGHT_CWORLDPLAYER_H
#define KNIGHT_CWORLDPLAYER_H
#include <vector>
#include "CPlayer.h"

class CWorldPlayer{
  public:
    void add(const CPlayer& player){ players_.push_back(player); }
    int totalPlayerNum(){ return players_.size(); }

    void promptInitialize();
    static const int MAX_PLAYER_NUM = 4;
    static const std::string DEFAULT_NAME[MAX_PLAYER_NUM];
  private:
    std::vector<CPlayer> players_;
};

#endif // KNIGHT_CWORLDPLAYER_H
