#include<iostream>
int main(){
    int scores[] {10,12,15,11,18,17,22,23,24};

    std::cout << std::endl;

    //Can get the size with                                                       std :: size() [c++17]       
    std :: cout << "scores size : " << std :: size(scores) << std :: endl;  
    std::cout << std::endl;

    //Print data out
    for( size_t i{0} ; i < std :: size(scores) ; ++i){
    std :: cout << "scores[" << i << "] : " << scores[i] << std :: endl;

    }

    std::cout << std::endl;


    //------------------------------------------------------------------------------------------------------------------




    std :: cout << "size of scores : " << sizeof(scores) << std :: endl;
    std::cout << std::endl;
    std :: cout << "size of scores[0] : " << sizeof(scores[0]) << std :: endl;
    std::cout << std::endl;
    std :: cout << "score item count : " << (sizeof(scores)/ sizeof(scores[0])) << std :: endl;
    std::cout << std::endl;

    size_t count {sizeof(scores)/ sizeof(scores[0])};

    std :: cout << "Printing out array items : " << std :: endl;
    std::cout << std::endl;
    for( size_t i{0} ; i < count ; ++i){
    std :: cout << "scores[" << i << "] : " << scores[i] << std :: endl;
    }

    return 0;
}