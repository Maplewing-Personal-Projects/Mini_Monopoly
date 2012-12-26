#ifndef KNIGHT_CPLAYER_H
#define KNIGHT_CPLAYER_H
#include <string>
#include <vector>

class CPlayer{
  public:
    CPlayer(int id, std::string name, int money = INIT_MONEY)
      :id_(id), name_(name), money_(money), location_(0){
    }

    int getLocation() const { return location_; }

    static const int INIT_MONEY = 5000;
  private:
    int id_;
    std::string name_;
    int money_;
    int location_;
    std::vector<int> own_units_id_;
};

#endif // KNIGHT_CPLAYER_H
