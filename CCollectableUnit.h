#ifndef KNIGHT_CCOLLECTABLEUNIT_H
#define KNIGHT_CCOLLECTABLEUNIT_H
#include <string>
#include "CSingleFineUnit.h"

class CCollectableUnit : public CSingleFineUnit{
  public:
    CCollectableUnit(int id, std::string name, int price, int owner_id = NO_OWNER)
      :CSingleFineUnit(id, name, price, owner_id){
    }

    virtual void action(){}
};

#endif // KNIGHT_CCOLLECTABLEUNIT_H
