#ifndef KNIGHT_CUPGRADABLEUNIT_H
#define KNIGHT_CUPGRADABLEUNIT_H
#include <string>
#include "CPriceUnit.h"

class CUpgradableUnit : public CPriceUnit{
  public:
    CUpgradableUnit(int id, std::string name, int price, int upgrade_price, int fine[], CPlayer* owner = NO_OWNER)
      :CPriceUnit(id, name, price, owner), upgrade_price_(upgrade_price), level_(0){
      for( int i = 0 ; i < MAX_LEVEL ; i++ )
        fine_[i] = fine[i];
    }

    virtual CMapUnit* clone(){ return new CUpgradableUnit(*this); }
    virtual void action(CPlayer& player);
    virtual void printInformation() const;

    static const int MAX_LEVEL = 5;
  private:
    int upgrade_price_;
    int fine_[MAX_LEVEL];
    int level_;
};

#endif // KNIGHT_CUPGRADABLEUNIT_H
