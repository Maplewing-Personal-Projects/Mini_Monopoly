#ifndef KNIGHT_CRANDOMCOSTUNIT_H
#define KNIGHT_CRANDOMCOSTUNIT_H
#include <string>
#include "CSingleFineUnit.h"

class CRandomCostUnit : public CSingleFineUnit{
  public:
    CRandomCostUnit(int id, std::string name, int price, int fine, CPlayer* owner = NO_OWNER )
      :CSingleFineUnit(id, name, price, fine, owner){
    }

    virtual CMapUnit* clone(){ return new CRandomCostUnit(*this); }
    virtual void action(CPlayer& player);
    virtual void printInformation() const;
};

#endif // KNIGHT_CRANDOMCOSTUNIT_H
