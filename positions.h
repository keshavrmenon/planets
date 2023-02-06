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
  
  int dim;
  
 public:
  positions(){
    r=NULL;
    dim=0;
  }
  positions(std::vector<T> x){
    r = x;
    dim=size(r);
  }
  std::vector<T> GetPositions(){
    return r;
  }
  friend double reldist(positions<T> r1, positions<T> r2, int norm=2){
    if(r1.dim != r2.dim)
      throw std::runtime_error("Math error: Different dimensions");
    double d=0;
    for (int i=0; i<r1.dim; i++){
      d+=pow((r1.r[i]-r2.r[i]),norm);
    }
    return pow(d,1.0/norm);
  }
};

#endif
