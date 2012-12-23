#ifndef KNIGHT_CJAILUNIT_H
#define KNIGHT_CJAILUNIT_H
#include <iostream>
#include "CMapUnit.h"

class CJailUnit : public CMapUnit{
  public:
    CJailUnit(int id, std::string name)
      :CMapUnit(id, name){
    }

    virtual void action(){}
};

#endif // KNIGHT_CJAILUNIT_H
