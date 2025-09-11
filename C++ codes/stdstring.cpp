#include<iostream>
#include<string>

int main(){

    std :: string str1 ;                               //empty initialization
    std :: string str2 {"hello world"};              //direct initialization
    std :: string str3 {str2};                     //copy initialization
    std :: string str4 {"hello" , 3};              //substring initialization   
    std :: string str5(5 ,'R');                 //n character initialization
    std :: string str6 (str2 , 6 , 5);          //substring copy initialization

    
    std :: cout << str1 << std :: endl;
    std :: cout << str2 << std :: endl;
    std :: cout << str3 << std :: endl;
    std :: cout << str4 << std :: endl;
    std :: cout << str5 << std :: endl;
    std :: cout << str6 << std :: endl;

}