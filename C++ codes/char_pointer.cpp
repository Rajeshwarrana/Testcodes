//we can use normal pointers for char as int or double


// * --> VALUE
// no * --> ADDRESS

#include<iostream>

int main(){

    char *p_char_var {nullptr};
    char char_var {'A'};

    p_char_var = &char_var;

    std :: cout << "The value stored in p_char_var is : " <<  *p_char_var << std :: endl;

    char char_var1 {'c'};
    p_char_var = &char_var1;

    std :: cout << "The value stored in p_char_var is : " << * p_char_var << std :: endl;
}