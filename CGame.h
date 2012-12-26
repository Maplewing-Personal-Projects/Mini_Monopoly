#ifndef KNIGHT_CGAME_H
#define KNIGHT_CGAME_H
#include "CWorldMap.h"
#include "CWorldPlayer.h"

class CGame{
  public:
    CGame(const CWorldMap& world_map, const CWorldPlayer& world_player)
      :world_map_(world_map), world_player_(world_player),
       is_exit_(false), is_end_(false){
    }
    void run();
    void update();
    void draw() const;

  private:
    CWorldMap world_map_;
    CWorldPlayer world_player_;
    bool is_exit_;
    bool is_end_;
};

#endif // KNIGHT_CGAME_H
