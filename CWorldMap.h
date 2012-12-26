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

    const CMapUnit& operator[]( int index ) const{ return *(map_units_[index]); }
    CMapUnit& operator[]( int index ){ return const_cast<CMapUnit&>(static_cast<const CWorldMap&>(*this)[index]); }
    CWorldMap& operator= (const CWorldMap& map);

    void swap(CWorldMap& map);
    int totalMapUnitNum() const{ return map_units_.size(); }
  private:
    std::vector<CMapUnit*> map_units_;
};

#endif // KNIGHT_CWORLDMAP_H
