#ifndef KNIGHT_CUPGRADABLEUNIT_H
#define KNIGHT_CUPGRADABLEUNIT_H
#include <string>
#include "CPriceUnit.h"

class CUpgradableUnit : public CPriceUnit{
  public:
    CUpgradableUnit(int id, std::string name, int price, int upgrade_price, int fine[], int owner_id = NO_OWNER)
      :CPriceUnit(id, name, price, owner_id), upgrade_price_(upgrade_price){
      for( int i = 0 ; i < MAXLEVEL ; i++ )
        fine_[i] = fine[i];
    }

    virtual UnitType type(){ return UPGRADABLE; }
    virtual void action(){}

    static const int MAXLEVEL = 5;
  private:
    int upgrade_price_;
    int fine_[MAXLEVEL];
};

#endif // KNIGHT_CUPGRADABLEUNIT_H
