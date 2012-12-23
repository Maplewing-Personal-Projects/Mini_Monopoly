#ifndef KNIGHT_CPRICEUNIT_H
#define KNIGHT_CPRICEUNIT_H
#include "CMapUnit.h"
#include <string>

class CPriceUnit : public CMapUnit{
  public:
    CPriceUnit(int id, std::string name, int price, int fine)
      :CMapUnit(id, name), price_(price), fine_(fine){
    }
  protected:
    int price_;
    int fine_;
};

#endif // KNIGHT_CPRICEUNIT_H
