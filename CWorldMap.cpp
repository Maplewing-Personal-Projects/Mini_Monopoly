#include "CWorldMap.h"
using std::istream;
using std::string;
using std::vector;

CWorldMap::CWorldMap(istream& in)
{
  char unit_type;
  string unit_name;
  int unit_price, unit_upgrade_price, unit_singlefine;
  int unit_fine[CUpgradableUnit::MAX_LEVEL];

  while(in >> unit_type >> unit_name){
    switch(unit_type){
      case 'U':
        in >> unit_price >> unit_upgrade_price;
        for(int i = 0 ; i < CUpgradableUnit::MAX_LEVEL ; i++)
          in >> unit_fine[i];
        map_units_.push_back(new CUpgradableUnit(map_units_.size(), unit_name,
                                                 unit_price, unit_upgrade_price, unit_fine));
        break;
      case 'C':
        in >> unit_price >> unit_singlefine;
        map_units_.push_back(new CCollectableUnit(map_units_.size(), unit_name,
                                                   unit_price, unit_singlefine));
        break;
      case 'R':
        in >> unit_price >> unit_singlefine;
        map_units_.push_back(new CRandomCostUnit(map_units_.size(), unit_name,
                                                  unit_price, unit_singlefine));
        break;
      case 'J':
        map_units_.push_back(new CJailUnit(map_units_.size(), unit_name));
        break;
    }
  }
}

CWorldMap::CWorldMap(const CWorldMap& map){
  for(int i = 0 ; i < map.map_units_.size() ; i++)
    map_units_.push_back(map.map_units_[i]->clone());
}

CWorldMap& CWorldMap::operator= (const CWorldMap& map){
  CWorldMap temp(map);
  swap(temp);
  return *this;
}

void CWorldMap::swap(CWorldMap& map){
  vector<CMapUnit*> temp;
  temp = map_units_;
  map_units_ = map.map_units_;
  map.map_units_ = temp;
}

CWorldMap::~CWorldMap(){
  for(int i = 0 ; i < map_units_.size() ; i++){
    delete map_units_[i];
  }
}
