#ifndef KNIGHT_CGAME_H
#define KNIGHT_CGAME_H
#include "CWorldMap.h"
#include "CWorldPlayer.h"

class CGame{
  public:
    CGame(const CWorldMap& world_map, const CWorldPlayer& world_player)
      :world_map_(world_map), world_player_(world_player){
    }

  private:
    CWorldMap world_map_;
    CWorldPlayer world_player_;
};

#endif // KNIGHT_CGAME_H
