#ifndef positions_H
#define positions_H

#include<iostream>
#include<cmath>
#include<vector>
#include<stdexcept>

template <class T>
class positions{
 private:
  //coordinates in arbitrary dimensions
  std::vector<T> r;
  
  int dim=size(r);
  
 public:
  positions(){
    r=NULL;
  }
  positions(std::vector<T> x){
    r = x;
  }
  friend double dist(positions<T> r1, positions<T> r2, int norm=2){
    if(r1.dim != r2.dim)
      throw std::runtime_error("Math error: Different dimensions");
    double d=0;
    for (int i=0; i<r1.dim; ++i){
      d+=pow((r1.r[i]-r2.r[i]),norm);
    }
    return pow(d,1.0/norm);
  }
};

#endif
