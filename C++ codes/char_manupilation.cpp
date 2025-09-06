#include<iostream>

int main(){

    std::cout<<std::endl;
    std::cout<<"Checking ISALNUM()"<<std::endl;

    std::cout << "a is alnum : " << std::isalnum('a') << std::endl;
    std::cout << "1 is alnum : " << std::isalnum('a') << std::endl;
    std::cout<<std::endl;

    char input{};
    std::cout << "Enter a character : " ;
    std::cin >> input;
    std::cout<<std::endl;


    if(std::isalnum(input)){
        std::cout << input << " is alphanumeric character" << std::endl;
    }
    else{
        std::cout << input << " is not alphanumeric character" << std::endl;
    }
    std::cout<<std::endl;

    return 0;



}