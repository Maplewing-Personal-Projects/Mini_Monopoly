#ifndef KNIGHT_CRANDOMCOSTUNIT_H
#define KNIGHT_CRANDOMCOSTUNIT_H
#include <string>
#include "CSingleFineUnit.h"

class CRandomCostUnit : public CSingleFineUnit{
  public:
    CRandomCostUnit(int id, std::string name, int price, int fine, int owner_id = NO_OWNER )
      :CSingleFineUnit(id, name, price, fine, owner_id){
    }

    virtual CMapUnit* clone(){ return new CRandomCostUnit(*this); }
    virtual void action(){}
};

#endif // KNIGHT_CRANDOMCOSTUNIT_H
