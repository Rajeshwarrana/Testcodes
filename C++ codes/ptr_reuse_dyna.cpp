#include<iostream>

int main(){

    int *p1 {new int{500}};
    int *p2 {new int{10}};


    std :: cout << "p1 ADDRESS : " << p1 << "   p1 VALUE : " << *p1 << std::endl;

    delete p1;
    p1 = nullptr;

//=============================================================================

    p1 = new int{55};                     // WE ACN REUSETHE POINTER AFTER DELETION 


    std :: cout << "p1 ADDRESS : " << p1 << "   p1 VALUE : " << *p1 << std::endl;


    delete p1;
    p1 = nullptr;


    std :: cout << std::endl;
    std :: cout << std::endl;



    std :: cout << "p2 ADDRESS : " << p2 << "   p2 VALUE : " << *p2 << std::endl;

    delete p2;
    p2 = nullptr;

//=============================================================================

    p2 = new int{55};                     // WE ACN REUSETHE POINTER AFTER DELETION 


    std :: cout << "p2 ADDRESS : " << p2 << "   p2 VALUE : " << *p2 << std::endl;


    delete p2;
    p2 = nullptr;


    return 0;

}