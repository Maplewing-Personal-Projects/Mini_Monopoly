#ifndef KNIGHT_CSINGLEFINEUNIT_H
#define KNIGHT_CSINGLEFINEUNIT_H
#include <iostream>
#include <string>
#include "CPriceUnit.h"

class CSingleFineUnit : public CPriceUnit{
  public:
    CSingleFineUnit(int id, std::string name, int price, int fine, CPlayer* owner = NO_OWNER)
      :CPriceUnit(id, name, price, owner), fine_(fine){
    }
    virtual ~CSingleFineUnit(){}

  protected:
    void ignoreOwnerArrive(const CPlayer& player) const;
    void printCostMoney(const CPlayer& player, int multiple) const;

    int fine_;
};

#endif // KNIGHT_CSINGLEFINEUNIT_H
