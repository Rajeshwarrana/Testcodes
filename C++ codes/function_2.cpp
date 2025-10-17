#include<iostream>


//Parameters passed this way are scoped localy in the function.
//Changes to them are not visible outside the function. What we
//have inside the function are actually COPIES of the arguments
//passed to the function.


double inc_multiplication (double a , double b){
    a += 1.0;
    b += 1.0;
    std :: cout << "Indside value of a :- " << a << std :: endl;
    std :: cout << "Indside value of b :- " << b << std :: endl;
    std :: cout << "Multiplication is " << a * b << std :: endl;
    return 0;
    
}

int main(){
    double val56{6.0};
    double val2{18.5};

    std :: cout << std :: endl;
    
    std :: cout << "Outside value of val56 :- " << val56 << std :: endl;
    std :: cout << "Outside value of val2 :- " << val2 << std :: endl;
    std :: cout << std :: endl;

    std :: cout  << "The multiplication of increased values is :-" <<  std :: endl;
    std :: cout  << inc_multiplication (val56 , val2) << std :: endl;
    std :: cout << std :: endl;

    return 0;
    
}