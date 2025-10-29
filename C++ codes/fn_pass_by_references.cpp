#include<iostream>

void say_fn(int& age);


int main(){

    int age {50};
    std :: cout << "age before  :- " << age << std :: endl;
    say_fn(age); // Passing age by reference
    std :: cout << "age before  :- " << age << std :: endl;
    return 0;
}

void say_fn(int &age){
    age = 100; // Modifying the original variable
    std :: cout << "age in say_fn :- " << age << std :: endl;
}
