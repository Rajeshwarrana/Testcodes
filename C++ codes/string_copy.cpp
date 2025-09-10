#include<iostream>
#include<cstring>

int main()
{
    char str2[50] = "MY NAME IS ";
    char str1[20] = "RAVI KUMAR";

    std :: cout << std :: endl;
    

    std :: cout << "Before concinate : " << str2 << std :: endl;

    std :: strcat(str2 , str1);

    std :: cout << "After concinate : " << str2 << std :: endl;











    std :: cout << std :: endl;
    std :: cout << std :: endl;

    char string1[50] = "HELLO WORLD";
    char string2[20];

    std :: strcpy(string2 , string1);

    std :: cout << "After copy string1 to string2 : " << string2 << std :: endl;
    std :: cout << string1 << std :: endl;
    std :: cout << std :: endl;




    return 0;



}