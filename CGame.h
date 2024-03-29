#ifndef KNIGHT_CGAME_H
#define KNIGHT_CGAME_H
#include <cstdlib>
#include "CWorldMap.h"
#include "CWorldPlayer.h"

class CGame{
  public:
    CGame(const CWorldMap& world_map, const CWorldPlayer& world_player)
      :world_map_(world_map), world_player_(world_player), bankrupt_player_count(0),
       is_exit_(false), is_end_(false), current_player_id_(0){
    }

    static const int PASS_START_MONEY = 2000;
    static const int MAX_PLAYER_NUM = 4;
    static const std::string DEFAULT_NAME[MAX_PLAYER_NUM];

    static int dice(){ return rand()%6+1; }

    void run();
    void update();
    void printInformation() const;
    void printMapInformation(int map_unit_id) const;
    void printPlayerInformation(int player_id) const;
    void controlGo();
    void controlMapAction();
  private:
    CWorldMap world_map_;
    CWorldPlayer world_player_;
    int current_player_id_;
    int bankrupt_player_count;
    bool is_exit_;
    bool is_end_;
};

#endif // KNIGHT_CGAME_H
