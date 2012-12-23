#ifndef KNIGHT_CSINGLEFINEUNIT_H
#define KNIGHT_CSINGLEFINEUNIT_H
#include <string>
#include "CPriceUnit.h"

class CSingleFineUnit : public CPriceUnit{
  public:
    CSingleFineUnit(int id, std::string name, int price, int fine, int owner_id = NO_OWNER)
      :CPriceUnit(id, name, price, owner_id), fine_(fine){
    }
    virtual ~CSingleFineUnit(){}

  protected:
    int fine_;
};

#endif // KNIGHT_CSINGLEFINEUNIT_H
