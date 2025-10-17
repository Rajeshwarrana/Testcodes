#include<iostream>


//Function that takes multiple permeters and gives the calculated output 

int _arithmetic(int a , int b){
    std::cout << "The sum of both number is : " << a + b << std::endl;
    std::cout << "The minus of both number is : " << a - b << std::endl;
    std::cout << "The div of both number is : " << a / b << std::endl;
    std::cout << "The multiply of both number is : " << a * b << std::endl;
    std :: cout << std :: endl;
    return 0;
}


//NO input no ouput function

void _greet(){                                      
    std::cout << "Hello User , Welcome to C++ Funtion programming" << std::endl;  
    std :: cout << std :: endl;

}



// function that takes input and dosent give back result explicitly
void bar_entry(int age){
    if(age >= 18){
        std :: cout << "You are eligible to enter the bar" << std::endl;
        std :: cout << std :: endl;
    
    }
    else{
        std :: cout << "You are not eligible to enter the bar" << std::endl;
        std :: cout << std :: endl;
    }

}



int main(){
   
    std :: cout << std :: endl;
    int a , b , age ;

    std::cout << "Number 1 : ";
    std :: cin >>  a ;


    std::cout << "Number 2 : " ;
    std :: cin  >>  b ;


    std :: cout << "Enter your age : ";
    std :: cin >> age ;


    _greet();                      //fn 1
    bar_entry(age);                //fn 2   
    _arithmetic(a , b);            //fn 3


    return 0;
}