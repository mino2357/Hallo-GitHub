#include <iostream>

//足し算函数add．
template <typename T = double>
T add(T&& x, T&& y){
  return x + y;
}

int main(){
  std::cout << "Hello World!" << std::endl;
  std::cout << "2 + 3" << std::endl;
  std::cout << 2 + 3 << std::endl;
  std::cout << add(2, 3) << std::endl;
}
