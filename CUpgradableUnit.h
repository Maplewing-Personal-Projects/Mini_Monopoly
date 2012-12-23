#ifndef KNIGHT_CUPGRADABLEUNIT_H
#define KNIGHT_CUPGRADABLEUNIT_H
#include <string>
#include "CPriceUnit.h"

class CUpgradableUnit : public CPriceUnit{
  public:
    CUpgradableUnit(int id, std::string name, int price, int upgrade_price, int fine[])
      :CPriceUnit(id, name, price), upgrade_price_(upgrade_price){
      for( int i = 0 ; i < MAXLEVEL ; i++ )
        fine_[i] = fine[i];
    }

    static const int MAXLEVEL = 5;
  protected:
    int upgrade_price_;
    int fine_[MAXLEVEL];
};

#endif // KNIGHT_CUPGRADABLEUNIT_H
