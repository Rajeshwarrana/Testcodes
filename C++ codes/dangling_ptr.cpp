#include<iostream>

int main(){
    
    //1. UNinitiliazed pointers

    int *ptr1;


    std::cout << std::endl;
    std::cout << std::endl;
    std::cerr << "UNinitialized pointer value: " << std::endl;
    std::cout <<ptr1 <<"  " << *ptr1 << std::endl; // Undefined behavior, ptr1 is uninitialized
    std::cout << std::endl;
    std::cout << std::endl;



    //2. Deleted pointers

    int *ptr2 = new int(10);
    std :: cout << "VALUE OF THE POINTER BEFORE DELETION: " << *ptr2 << std::endl;
    std :: cout << "ADDRESS OF THE POINTER BEFORE DELETION: " << ptr2 << std::endl;

    delete ptr2;
    std :: cout << "VALUE OF THE POINTER AFTER DELETION: " << *ptr2 << "  " << ptr2 << std::endl; // Undefined behavior, ptr2 is deleted
    std::cout << std::endl;
    std::cout << std::endl;


    //3. MULTIPLE POINTERS POINTING THE SAME ADDRESS
    
    int *p_number3 {new int{83}};
    int *p_number4 {p_number3};

    std :: cout << "p_number3 - " << p_number3 << " - " << *p_number3 << std :: endl;
    std :: cout << "p_number4 - " << p_number4 << " -" <<* p_number4 << std :: endl;

    //Deleting p_number3
    delete p_number3;

    //p_number4 points to deleted memory. Dereferncing it will lead to
    //undefined behaviour : Crash/ garbage or whatever
    std :: cout << "p_number4(after deleting p_number3) -" << p_number4 << " -" <<* p_number4 << std :: endl;
    std::cout << std::endl;
    std::cout << std::endl;

    return 0;


}