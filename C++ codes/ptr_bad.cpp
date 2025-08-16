#include<iostream>

int main(){

    //Writing into uninitialized pointer through dereference

    int *p_number2; // Contains junk address : could be anything

    *p_number2 = 55; // Writing into junk address : BAD!

    std :: cout << std :: endl;
    std :: cout << "Writing into uninitialized pointer through dereference" << std :: endl;
    std :: cout << "p_number2 : " << p_number2 << std :: endl; // Reading from junk address.
    std :: cout << "*p_number2 :" << *p_number2 << std :: endl;

    //Initializing pointer to null
    //int *p_number3{nullptr}; // Also works


    int * p_number3 {}; // Initialized with pointer equivalent of zero : nullptr


    // A pointer pointing nowhere
    //*p_number3 = 33; // Writting into a pointer pointing nowhere : BAD, CRASH

    std :: cout << std :: endl;
    std :: cout << "Reading and writting through nullptr : " << std :: endl;
    
    //std: : cout << "p_number3 :" << p_number3 << std :: endl;
    //std: : cout << "*p_number3 :" << *p_number3 << std :: endl;// Reading from nullptr
    // BAD, CRASH.
}