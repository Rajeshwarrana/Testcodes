#include<iostream>

int main(){

    std::cout << std ::endl;
    std::cout << "ABOUT ISBLANK() FUNCTION IN C++" << std ::endl;
    std::cout << std ::endl;

    char message[]{"My name is Rajeshwar Rana ."};
    std::cout << std ::endl;

    

    int blank_count{};

    for(size_t i{0} ; i < sizeof(message) ; ++i){
        if(std::isblank(message[i])){
            std::cout << "Blank character found at index : " << i << std ::endl;
            ++blank_count;
        }
    }

    std :: cout << "TOTAL BLANK CHARACTERS IN MESSAGE : " << blank_count << std :: endl;

    std::cout << std ::endl;
    std :: cout << "Programm ended well " << std :: endl;
    std::cout << std ::endl;
    



    return 0;

}
