#ifndef KNIGHT_CPLAYER_H
#define KNIGHT_CPLAYER_H
#include <string>

class CPlayer{
  public:
    CPlayer(int id, std::string name, int money = INIT_MONEY)
      :id_(id), name_(name), money_(money){
    }

    static const int INIT_MONEY = 5000;
  private:
    int id_;
    std::string name_;
    int money_;
};

#endif // KNIGHT_CPLAYER_H
