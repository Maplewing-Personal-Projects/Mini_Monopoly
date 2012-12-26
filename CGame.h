#ifndef KNIGHT_CGAME_H
#define KNIGHT_CGAME_H
#include "CWorldMap.h"
#include "CWorldPlayer.h"

class CGame{
  public:
    CGame(const CWorldMap& world_map, const CWorldPlayer& world_player)
      :world_map_(world_map), world_player_(world_player),
       is_exit_(false), is_end_(false), current_player_id_(0){
    }
    void run();
    void update();
    void printInformation() const;
    void printMapInformation(int map_unit_id) const;
    void printPlayerInformation(int player_id) const;

  private:
    CWorldMap world_map_;
    CWorldPlayer world_player_;
    int current_player_id_;
    bool is_exit_;
    bool is_end_;
};

#endif // KNIGHT_CGAME_H
