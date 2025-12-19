#include<iostream>

int main(){
    struct {
        int age;
        std::string name;
        int height;
        std::string address;
    }person1, person2;

    person1.age = 25;
    person1.name = "Alice";
    person1.height = 165;

    person2.age = 30;
    person2.name = "Bob";
    person2.height = 175;

    std::cout << "Person 1 Details:" << std::endl;
    std::cout << "Name: " << person1.name << std::endl; 
    std::cout << "Age: " << person1.age << std::endl;
    std::cout << "Height: " << person1.height << " cm" << std::endl;

    std::cout << "Person 2 Details:" << std::endl;
    std::cout << "Name: " << person2.name << std::endl;
    std::cout << "Age: " << person2.age << std::endl;
    std::cout << "Height: " << person2.height << " cm" << std::endl;
    return 0;
}