#include<iostream>

void say_fn(int* age);

int main() {
    int age = 25;
    say_fn(&age); // Passing the address of age
    std::cout << "Age in main: " << age << std::endl; // Should print 30
    return 0;
}

void say_fn(int* age){
    *age = 30; // Modifying the value at the address
    std::cout << "Age in say_fn: " << *age << std::endl; // Should print 30
}