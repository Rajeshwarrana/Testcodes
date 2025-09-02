#include<iostream>

int main(){

    int data {100};
    double data2{1001};


    //reference 

    int& ref_of_data = data ;
    double& ref_of_data2{data2};

    std :: cout << "=======================" << std :: endl;

    std :: cout << "data : " << data << std :: endl;
    std :: cout << "ref_of_data : " << ref_of_data << std :: endl;

    std :: cout << "=======================" << std :: endl;

    std::cout << data2 << std::endl;
    std::cout << ref_of_data2 << std::endl;

    std :: cout << "=======================" << std :: endl;

    std :: cout << "ADDRESS OF DATA " << &data << std :: endl;
    std :: cout << "ADDRESS OF REF_OF_DATA " << &ref_of_data << std :: endl;
    
    std :: cout << "=======================" << std :: endl;

    std :: cout << "ADDRESS OF DATA2" << &data2 << std :: endl;
    std :: cout << "ADDRESS OF REF_OF_DATA2 " << &ref_of_data2 << std :: endl;

    std :: cout << "=======================" << std :: endl;
    
    //modification using reference
    ref_of_data = 200;

    std :: cout << "data : " << data << std :: endl;
    std :: cout << "ref_of_data : " << ref_of_data << std :: endl;
    
    std :: cout << "=======================" << std :: endl;

    //modification using original variable

    data = 300;
    std :: cout << "data : " << data << std :: endl;
    std :: cout << "ref_of_data : " << ref_of_data << std :: endl;
    std :: cout << "=======================" << std :: endl;




    return 0;




}