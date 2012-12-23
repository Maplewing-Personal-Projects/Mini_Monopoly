#ifndef KNIGHT_CSINGLEFINEUNIT_H
#define KNIGHT_CSINGLEFINEUNIT_H
#include <string>
#include "CPriceUnit.h"

class CSingleFineUnit : public CPriceUnit{
  public:
    CSingleFineUnit( int id, std::string name, int price, int fine )
      :CPriceUnit(id, name, price), fine_(fine){
    }
  protected:
    int fine_;
};

#endif // KNIGHT_CSINGLEFINEUNIT_H
