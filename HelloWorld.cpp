#include <iostream>

int add(const int& a, const int& b){
  return a+b;
}

int main(){

  std::cout << "Hola Mundo\n";
  std::cout << "3 + 5 =" << add(3,5) << std::endl;
  return 0;

}



