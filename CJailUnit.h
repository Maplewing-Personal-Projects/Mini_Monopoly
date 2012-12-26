#ifndef KNIGHT_CJAILUNIT_H
#define KNIGHT_CJAILUNIT_H
#include <string>
#include "CMapUnit.h"

class CJailUnit : public CMapUnit{
  public:
    CJailUnit(int id, std::string name)
      :CMapUnit(id, name){
    }

    virtual CMapUnit* clone(){ return new CJailUnit(*this); }
    virtual void action(){}
};

#endif // KNIGHT_CJAILUNIT_H
