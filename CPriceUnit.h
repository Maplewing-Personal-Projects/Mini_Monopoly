#ifndef KNIGHT_CPRICEUNIT_H
#define KNIGHT_CPRICEUNIT_H
#include "CMapUnit.h"
#include <string>

class CPriceUnit : public CMapUnit{
  public:
    CPriceUnit(int id, std::string name, int price, CPlayer* owner = NO_OWNER)
      :CMapUnit(id, name), price_(price), owner_(owner){
    }
    virtual ~CPriceUnit(){}
    virtual void printInformation() const;
    virtual void clearOwner() { owner_ = NO_OWNER; }

    static CPlayer* const NO_OWNER;
  protected:
    bool buyThisUnit(CPlayer& player);
    void costMoney(CPlayer& player, int money);

    int price_;
    CPlayer* owner_;
};

#endif // KNIGHT_CPRICEUNIT_H
