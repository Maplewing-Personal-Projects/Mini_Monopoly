#ifndef KNIGHT_CPLAYER_H
#define KNIGHT_CPLAYER_H
#include <string>
#include <vector>

class CPriceUnit;

class CPlayer{
  public:
    CPlayer(int id, std::string name, int money = INIT_MONEY)
      :id_(id), name_(name), money_(money), location_(0),
      jail_round_count_(0){
      own_units_.clear();
    }

    int getID() const { return id_; }
    void setLocation(int location) { location_ = location; }
    int getLocation() const { return location_; }
    int getOwnUnitNum() const { return own_units_.size(); }
    std::string getName() const { return name_; }
    int getMoney() const { return money_; }
    void setMoney(int money) { money_ = money; }
    int getJailRoundCount() const { return jail_round_count_; }
    void setJailRoundCount(int jail_round_count) { jail_round_count_ = jail_round_count; }

    void addUnit(CPriceUnit* unit){ own_units_.push_back(unit); }
    void clearUnits();
    bool isBankrupt() const { return (money_ <= 0); }
    void printInformation() const;

    static const int INIT_MONEY = 5000;
  private:
    int id_;
    std::string name_;
    int money_;
    int location_;
    std::vector<CPriceUnit*> own_units_;
    int jail_round_count_;
};

#endif // KNIGHT_CPLAYER_H
