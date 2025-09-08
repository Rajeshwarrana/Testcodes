#include<iostream>

int main(){

    std :: cout << std :: endl;
    char message[]{"mY name IS rajESHWAR Rana JHDS uhsda IFHS SHD hsidhhaISDHD "};

    int no_upper{};
    int no_lower{};

    for(size_t i{0}  ; i < sizeof(message) ; i++){

        if(std :: isupper(message[i])){
            std :: cout << " " << message[i] ;
            no_upper++;
            
        }    
    }

    std :: cout << std :: endl;

    for(size_t i{0}  ; i < sizeof(message) ; i++){
        if(std :: islower(message[i])){
            std :: cout << " " << message[i] ;
            no_lower++;
        }
    }

    std :: cout << std :: endl;

    std :: cout << "No of upper case letters : " << no_upper << std :: endl;
    std :: cout << std :: endl;
    std :: cout << "No of lower case letters : " << no_lower << std :: endl;
    std :: cout << std :: endl;

    return 0;


}