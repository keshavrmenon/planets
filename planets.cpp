#include<iostream>
#include<cmath>
#include<vector>
#include "positions.h"
double dist(positions<double> r1, positions<double> r2, int norm=2);
int main(){
  std::vector<positions<double>> p={position(1,0),position(0,1)};
  std::cout<<dist(p[0],p[1])<<std::endl;
  return 0;
}
