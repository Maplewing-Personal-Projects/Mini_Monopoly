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
    explicit CWorldMap(std::istream& in);
    CWorldMap(const CWorldMap& map);
    ~CWorldMap();
    CWorldMap& operator= (const CWorldMap& map);
    void swap(CWorldMap& map);

  private:
    std::vector<CMapUnit*> map_units_;
};

#endif // KNIGHT_CWORLDMAP_H
