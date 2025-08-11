// is a variable that stores the address of another variable
// All pointer variables has the same size (int , double , char, etc.) coz they store addresses
// Pointer variables can be initialized to nullptr
// pointer only stores the type for which it was decleared0
// int * p_number; the * can be anywhere between the type and the variable name




#include<iostream>

int main(){
    int *p_number{};//can only store the address of a variable of type int

    double *p_double{}; //can only store the address of a variable of type double


    int * p_number1{nullptr};     //Explicitely initialize to nullptr
    int * p_fractional_number1 {nullptr};


    std::cout << "SIZE OF number POINTER : " << sizeof(p_number) << ", SIZE OF int : " << sizeof(int) << std::endl;
    std::cout << "SIZE OF frictional_number POINTER : " << sizeof(p_double) << ", SIZE OF double : " << sizeof(double) << std::endl;
    std :: cout << std :: endl;

    //Pointers to different variables are of the same size
    std :: cout << "sizeof(int) : " << sizeof(int) << std :: endl;
    std :: cout << std :: endl; 
    std :: cout << "sizeof(double) :" << sizeof(double) << std :: endl;
    std :: cout << std :: endl;
    std :: cout << "sizeof(double*) : " << sizeof(double*) << std :: endl;
    std :: cout << std :: endl;
    std :: cout << "sizeof(int*) : " << sizeof(int*) << std :: endl;
    std :: cout << std :: endl;
    std :: cout << "sizeof(p_number1) : " << sizeof(p_number1) << std :: endl;
    std :: cout << std :: endl;
    std :: cout << "sizeof(p_fractional_number1) : " << sizeof(p_fractional_number1) << std :: endl;
    std :: cout << std :: endl;
    std :: cout << std :: endl;

    // SO *p_number5 and *p_double6 are pointer and otr_int_var are int respectively
    
    int *p_number5{} , otr_int_var{};
    int *p_double6{} , otr_double_var6{};  // Confusing as you wonder if other int var
                                          //is also a pointer to int. It is not
                                          // The structure is exactly the same for the
                                          //previous statement

                                          
    std :: cout << "sizeof(p_number5) :" << sizeof(p_number5) << std :: endl;
    std :: cout << std :: endl;
    std :: cout << "sizeof(other_int_var) : " << sizeof(otr_int_var) << std :: endl;
    std :: cout << std :: endl;
    std :: cout << "sizeof(p_number6) :" << sizeof(p_number5) << std :: endl;
    std :: cout << std :: endl;
    std :: cout << "sizeof(other_int_var6) :" << sizeof(otr_double_var6) << std :: endl;






}