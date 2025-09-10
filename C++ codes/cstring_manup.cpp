#include<iostream>
#include<cstring>

int main(){

    std :: cout << std::endl;
    std :: cout << "std::strlen" << std::endl;


    const char str1[]{"My name is Rajeshwar RAna i am from India"};

    const char* str2 {"My name is Rajeshwar RAna i am from India"};


    std::cout << "message 1 : " << str1  << " : " ;

    std::cout << std::strlen(str1) << std::endl;

    std::cout << "size of  str1 : " << sizeof(str1)  << std::endl;

    std :: cout << std::endl;

    std::cout << "message 2 : " << str2  << " : " ;

    std::cout << std::strlen(str2) << std :: endl;

    std::cout << "size of  str2 : " << sizeof(str2)  << std::endl;








    std :: cout << std::endl;
    std :: cout << std::endl;
    std :: cout << "-----------------------------------------------------------------"<<std :: endl;
    std :: cout << "std::strcmp" << std::endl;

    //std: : strcmp - signature : int strcmp( const char *lhs, const char *rhs );
    //Returns negative value if lhs appears before rhs in lexicographical order,
    //Zero if lhs and rhs compare equal.
    //and Positive value if lhs appears after rhs in lexicographical order.

    const char* str_1{"NAMAN"};
    const char* str_2{"MANAN"};

    char str_3[]{"NAMAN"};
    char str_4[]{"NAMAN"};

    std :: cout << std::strcmp(str_1,str_2) << std::endl; // 0 if both are same , -ve if str_1 < str_2 , +ve if str_1 > str_2
    std :: cout << std::strcmp(str_3,str_4) << std::endl; // 0 if both are same , -ve if str_3 < str_4 , +ve if str_3 > str_4








    std :: cout << std::endl;
    std :: cout << std::endl;
    std :: cout << "-----------------------------------------------------------------"<<std :: endl;

    std :: cout << "std::strchr" << std::endl;

    const char* str {"Hello, my name is Rajeshwar Rana"};
    char target {'R'};
    const char* result = str;
    int iterations{0};


    while((result = std :: strchr(result ,target)) != nullptr){
        std :: cout << "Found " << target << " at : " << (result - str) << std :: endl;
        result++;
        iterations++;
    }

    std :: cout << std::endl;




    return 0;


}