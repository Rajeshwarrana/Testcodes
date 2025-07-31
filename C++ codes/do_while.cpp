#include<iostream>
int main (){

    const unsigned int count {0};
    size_t i {0};

    do{
    std :: cout << i << " : I LOVE C++" << std :: endl;
    ++i;
    }while(i<count);

    return 0;
}