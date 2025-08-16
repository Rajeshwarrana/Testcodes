#include<iostream>

int main(){

    //------------------------------ALLOCATING MEMORY DYNAMICALLY----------------------
    
    int *p_number{};
    p_number = new int ;

    // Dynamically allocate space for a single int on the heap
    // This memory belongs to our program from now on. The system
    // can't use it for anything else, untill we return it.
    // After this line executes, we will have a valid memory location
    // allocated. The size of the allocated memory will be such that it
    // can store the type pointed to by the pointer

    *p_number = 77 ;
    std :: cout << "Dynamically allocated memory" << std :: endl;
    std :: cout << *p_number << std :: endl;

    //---------------------------------- DELETING THE ALLOCATED MEMORY -------------------

    delete p_number; // Free the memory we allocated
    p_number = nullptr; // Set pointer to nullptr to avoid dangling pointer

    return 0;

                             
}