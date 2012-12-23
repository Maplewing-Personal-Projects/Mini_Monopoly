#ifndef KNIGHT_CMAPUNIT_H
#define KNIGHT_CMAPUNIT_H
#include <string>

class CMapUnit{
  public:
    enum UnitType{ UPGRADABLE, COLLECTABLE, RANDOMCOST, JAIL };

    CMapUnit( int id, std::string name )
      :id_(id), name_(name){
    }
    virtual ~CMapUnit(){}

    virtual UnitType type() = 0;
    virtual void action() = 0;
  protected:
    int id_;
    std::string name_;
};

#endif // KNIGHT_CMAPUNIT_H
