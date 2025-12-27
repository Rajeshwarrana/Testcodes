#include<iostream>

int sum (int n){
    if (n==0){
        return 0;
    }
    return n + sum(n-1);
}

void countdown(int n) {
  if (n > 0) {
    std :: cout << n << " ";
    countdown(n - 1);
  }
}

int main(){
    int number;
    std::cout<<"Enter a number to find the sum from 1 to that number: ";
    std::cin>>number;
    int result = sum(number);
  std::cout<<"The sum from 1 to "<<number<<" is: "<<result<<std::endl;

  // `countdown` returns void and prints the numbers itself.
  // You cannot insert a void-expression into the output stream
  // (that caused the compiler error). Call it separately instead.
  std::cout << "The countdown from " << number << " to 1: ";
  countdown(number);                     // prints the sequence
  std::cout << std::endl;
    return 0;
}

