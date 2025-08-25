#include<iostream>

int main(){

    std :: cout << "Varbose null ptr check " << std :: endl;
    
    int *p_number {};
    p_number = new int(2);

    if (!(p_number == nullptr)){
        std :: cout << "ADDRESS IS VALID : " << p_number << std :: endl;
        std :: cout << "VALUE IS : " << *p_number << std :: endl;
    }
    else{
        std :: cout << "ADDRESS IS NOT VALID" << std :: endl;
    }

    delete p_number;
    p_number = nullptr;

    return 0;

    
}