#ifndef KNIGHT_CMAPUNIT_H
#define KNIGHT_CMAPUNIT_H
#include <string>
#include "CPlayer.h"

class CMapUnit{
  public:
    CMapUnit(int id, std::string name)
      :id_(id), name_(name){
    }
    virtual ~CMapUnit(){}

    virtual CMapUnit* clone() = 0;
    virtual void action(CPlayer& player) = 0;
    virtual void printInformation() const;
  protected:
    int id_;
    std::string name_;
};

#endif // KNIGHT_CMAPUNIT_H
