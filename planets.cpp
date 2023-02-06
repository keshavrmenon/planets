#include<iostream>
#include<cmath>
#include<vector>
#include "positions.h"
int main(){
  std::vector<positions<double>> p{positions(std::vector<double>{1,0}),positions(std::vector<double>{0,1})};
  std::cout<<reldist(p[0],p[1])<<std::endl;
  return 0;
}
