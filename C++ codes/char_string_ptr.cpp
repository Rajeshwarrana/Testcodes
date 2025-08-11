// A special thing that pointer to char can do is we can initialize with a string literal


#include<iostream>

int main(){
    const char *p_message{"HELLO WORLD"};


    std :: cout << p_message << std :: endl;
    std :: cout << std :: endl;

    std :: cout << "The first character is: " << *p_message << std :: endl;

}