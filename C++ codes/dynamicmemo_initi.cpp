#include<iostream>  // REMEMBER TO DELETE THE DYNAMIC MEMORY

int main(){
    
    // we can initialize the dynamic memory in different ways

    int *p1 {new int};  
    int *p2 {new int(10)};    // DIFFERENT WAYS OF ALLOACTION DYNAMIC MEMORY
    int *p3 {new int{20}};


    std :: cout << std :: endl;
    std :: cout << "p1 : " << p1 << std :: endl;
    std :: cout << "*p1 : " << *p1 << std :: endl;

    std :: cout << std :: endl;
    std :: cout << "p2 : " << p2 << std :: endl;
    std :: cout << "*p2 : " << *p2 << std :: endl;


    std :: cout << std :: endl;
    std :: cout << "p3 : " << p3 << std :: endl;
    std :: cout << "*p3 : " << *p3 << std :: endl;
    std :: cout << std :: endl;


    delete p1;
    p1 = nullptr;

    delete p2;
    p2 = nullptr;

    delete p3;
    p3 = nullptr;




}