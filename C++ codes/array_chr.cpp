

// '\0' is the null terminator for C-style strings
// it indicates the end of the string
// this needs to be used so that array dont print any garbbage values


#include<iostream>

int main(){

    char letters[] {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i','\0'};

    std::cout << std::endl;
    std::cout << letters << std::endl;

    //Can get the size with std::size() [c++17]
    std::cout << "letters size : " << std::size(letters) << std::endl;  
    std::cout << std::endl;

    //Print data out
    for(size_t i{0}; i < std::size(letters); ++i){
        std::cout << "letters[" << i << "] : " << letters[i] << std::endl;
    }

    std::cout << std::endl;

    //------------------------------------------------------------------------------------------------------------------

    std::cout << "size of letters : " << sizeof(letters) << std::endl;
    std::cout << std::endl;
    std::cout << "size of letters[0] : " << sizeof(letters[0]) << std::endl;
    std::cout << std::endl;
    std::cout << "letter item count : " << (sizeof(letters) / sizeof(letters[0])) << std::endl;
    std::cout << std::endl;

    size_t count {sizeof(letters) / sizeof(letters[0])};

    std::cout << "Printing out array items : " << std::endl;
    for(size_t i{0}; i < count; ++i){
        std::cout << "letters[" << i << "] : " << letters[i] << std::endl;
    }

    return 0;
}