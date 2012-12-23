#ifndef KNIGHT_CWORLDMAP_H
#define KNIGHT_CWORLDMAP_H
#include <iostream>
#include <string>
#include <vector>
#include "CUpgradableUnit.h"
#include "CCollectableUnit.h"
#include "CRandomCostUnit.h"
#include "CJailUnit.h"

class CWorldMap
{
  public:
    CWorldMap(std::istream &in);
    ~CWorldMap();
  private:
    std::vector<CMapUnit*> map_units_;
};

#endif // KNIGHT_CWORLDMAP_H
