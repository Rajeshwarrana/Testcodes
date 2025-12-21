#include<iostream>

int main(){
    struct {                                    //declearation of structure
        int age;
        std::string name;
        int height;
        std::string address;
    }person1, person2;                          //defining structure variables

    person1.age = 25;
    person1.name = "Alice";
    person1.height = 165;

    person2.age = 30;
    person2.name = "Bob";
    person2.height = 175;
    
    std::cout << std::endl;

    std::cout << "Person 1 Details:" << std::endl;
    std::cout << "Name: " << person1.name << std::endl; 
    std::cout << "Age: " << person1.age << std::endl;
    std::cout << "Height: " << person1.height << " cm" << std::endl; 

    std::cout << std::endl;

    std::cout << "Person 2 Details:" << std::endl;
    std::cout << "Name: " << person2.name << std::endl;
    std::cout << "Age: " << person2.age << std::endl;
    std::cout << "Height: " << person2.height << " cm" << std::endl;
    



    // ---------------------------------------------


    struct Student{                           // this is a named STRUCT 
        int id;                              // Student in decleared ......... now we can decleare multible structure variable using [student _var name_ ]
        std::string name;
        int age;
        bool isEnrolled;
    };

    Student student1 ;

    student1.id = 101;
    student1.name = "BHASHMASUR";
    student1.age = 4000;
    student1.isEnrolled = false;

    std::cout << std::endl;
    std::cout << "Student Details:" << std::endl;
    std::cout << "ID: " << student1.id << std::endl;
    std::cout << "Name: " << student1.name << std::endl;
    std::cout << "Age: " << student1.age << std::endl;
    std::cout << "Enrolled: " << (student1.isEnrolled ? "Yes" : "No") << std::endl;

    return 0;
}