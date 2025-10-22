#include<iostream>

void say_age(int age);

int main(){
    int age{33};

    std ::cout << "Before calling say_age, age = " << age << std :: endl;
    say_age(age);
    std ::cout << "After calling say_age, age = " << age << std :: endl;


}

void say_age(int age){
    age += 1;
    std :: cout << "Inside say_age, age = " << age << std :: endl;

}

