#ifndef KNIGHT_CJAILUNIT_H
#define KNIGHT_CJAILUNIT_H
#include <string>
#include "CMapUnit.h"
#include "CPlayer.h"

class CJailUnit : public CMapUnit{
  public:
    CJailUnit(int id, std::string name)
      :CMapUnit(id, name){
    }

    static const int STAY_ROUND = 1;

    virtual CMapUnit* clone(){ return new CJailUnit(*this); }
    virtual void action(CPlayer& player);
    virtual void printInformation() const;
};

#endif // KNIGHT_CJAILUNIT_H
