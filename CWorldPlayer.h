#ifndef KNIGHT_CWORLDPLAYER_H
#define KNIGHT_CWORLDPLAYER_H
#include <vector>
#include "CPlayer.h"

class CWorldPlayer{
  public:
    void add(const CPlayer& player){ players_.push_back(player); }
    int totalPlayerNum() const{ return players_.size(); }

    const CPlayer& operator[]( int index ) const{ return players_[index]; }
    CPlayer& operator[]( int index ){ return const_cast<CPlayer&>(static_cast<const CWorldPlayer&>(*this)[index]); }
  private:
    std::vector<CPlayer> players_;
};

#endif // KNIGHT_CWORLDPLAYER_H
