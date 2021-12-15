#include <iostream>

void isRightTriangle(int a,int b, int c){
  if((c*c)== (a*a) + (b*b)){
    std::cout << "True\n";
  } else {
    std::cout << "False\n";
  }
}







int main(){
  isRightTriangle(3,4,5);
  return 0;
}