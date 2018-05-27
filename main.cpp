#include <iostream>

//足し算函数add．
template <typename T = double>
T plus(T&& x, T&& y){
  return x + y;
}

//引き算
template <typename T = double>
T minus(T&& x, T&& y){
  return x - y;
}

int main(){
  std::cout << "2 + 3" << std::endl;
  std::cout << plus(2, 3) << std::endl;
  std::cout << plus<int>(2, 3) << std::endl;
  std::cout << minus<int>(2, 3) << std::endl;
  std::cout << 2 * 3 << std::endl;
}
