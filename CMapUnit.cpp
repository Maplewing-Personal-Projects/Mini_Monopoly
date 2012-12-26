#include <iostream>
#include <iomanip>
#include <string>
#include "CMapUnit.h"
using std::cout;
using std::setw;
using std::setfill;
using std::string;

void CMapUnit::printInformation() const{
  cout << " [" << setfill('0') << setw(2) << id_ << ']' << setfill(' ');
  cout << setw(10) << name_;
}
