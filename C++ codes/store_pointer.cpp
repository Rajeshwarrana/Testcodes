/*Can't cross assign between pointers of different types
int *p_int1{nullptr};
double double_var{33};
p_int = &double_var; Compiler error*/






#include<iostream>

int main(){

    int var(44);
    int *p_var = &var ;

    std :: cout << std :: endl;
    std::cout << "VALUE OF VAR : " << var << std::endl;
    std :: cout << std :: endl;
    std :: cout << "VALUE OF P_VAR :" << p_var << std::endl;
    std :: cout << std :: endl;
    std :: cout << "VALUE OF *P_VAR :" << *p_var << std::endl;
    std :: cout << std :: endl;



    //Dereferencing a pointer :
    int* p_int2 {nullptr};
    int int_data {56};
    p_int2 = &int_data;

    std :: cout << "value : " << *p_int2 << std :: endl; // reading int_data through p_int2
    std :: cout << std :: endl;
    return 0;
    
}