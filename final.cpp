#include <iostream>

// question 1
void isRightTriangle(int a,int b, int c){
  if((c*c)== (a*a) + (b*b)){
    std::cout << "True\n";
  } else {
    std::cout << "False\n";
  }
}

// question 2
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
  std::cout << "----Question 1----\n";
  isRightTriangle(3,4,5);
  std::cout << "----Question 2----\n";
  fizzbuzz(21);
  return 0;
}