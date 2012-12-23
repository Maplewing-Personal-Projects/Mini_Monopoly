#ifndef KNIGHT_CPRICEUNIT_H
#define KNIGHT_CPRICEUNIT_H
#include "CMapUnit.h"
#include <string>

class CPriceUnit : public CMapUnit{
  public:
    CPriceUnit(int id, std::string name, int price)
      :CMapUnit(id, name), price_(price){
    }
  protected:
    int price_;
};

#endif // KNIGHT_CPRICEUNIT_H
