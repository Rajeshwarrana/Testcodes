#include<iostream>

int main(){

    for(size_t i{0} ; i < 100 ; ++i ){

        int * data = new(std::nothrow) int[1000000000000];

        if(data == nullptr){
              std::cout << "Memory allocation failed at iteration " << i << std::endl;  
        }
        else{
            std:: cout << "Memory allocation succeeded at iteration " << i << std::endl;
        }

    }

    std :: cout << "Program completed." << std::endl;
}