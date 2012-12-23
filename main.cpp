#include <iostream>
#include <fstream>
#include "CWorldMap.h"
using namespace std;

int main(){
  ifstream fin("map.dat");
  CWorldMap cwm(fin);

  return 0;
}
