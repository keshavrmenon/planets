#ifndef positions_H
#define positions_H

#include<iostream>
#include<cmath>
#include<vector>

template <typename T>
struct position{
  T x, y, z;
};

template <class T>
class positions{
 private:
  std::vector<position<T>> pos;

 public:
  positions(){
    pos=NULL;
  }
  ~positions(){
    deallocate();
  }
  
};

#endif
