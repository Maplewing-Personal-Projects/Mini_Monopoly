#ifndef KNIGHT_CPRICEUNIT_H
#define KNIGHT_CPRICEUNIT_H
#include "CMapUnit.h"
#include <string>

class CPriceUnit : public CMapUnit{
  public:
    CPriceUnit(int id, std::string name, int price, int owner_id = NO_OWNER)
      :CMapUnit(id, name), price_(price), owner_id_(owner_id){
    }
    virtual ~CPriceUnit(){}
    virtual void printInformation() const;

    static const int NO_OWNER = -1;
  protected:
    int owner_id_;
    int price_;
};

#endif // KNIGHT_CPRICEUNIT_H
