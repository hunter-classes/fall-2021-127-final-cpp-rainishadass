#include <iostream>

void isRightTriangle(int a,int b, int c){
  if((c*c)== (a*a) + (b*b)){
    std::cout << "True\n";
  } else {
    std::cout << "False\n";
  }
}

void fizzbuzz(int n){
  
  for (int i=1; i<=n;i=i+1){
    if (i % 3 == 0 && i % 5 == 0){
      std::cout << "fizzbuzz\n";
    } else if (i % 3 == 0) {
      std::cout << "fizz\n";
    } else if (i % 5 == 0){
      std::cout << "buzz\n";
    } else{
      std::cout << i << "\n";
    }
  }
}


int main(){
  //isRightTriangle(3,4,5);
  fizzbuzz(21);
  return 0;
}