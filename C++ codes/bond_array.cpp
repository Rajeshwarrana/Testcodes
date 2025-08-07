


//Write beyond bounds. The compiler allows it. But you don't own
//the memory at index 12, so other programs may modify it and your
//program may read bogus data at a later time. Or you can even
//corrupt data used by other parts of your ptogram
    
    
#include<iostream>

int main(){
    int numbers[] {1,2,3,4,5,6,7,8,9,0};

    //Read beyond bounds : Will read garbage or crash your program
    std :: cout << "numbers[12] : " << numbers[12] << std :: endl;

    /*even though you changes the value of [12] but if this location is 
    restricted by the system then even by doing this you cant change the value 
    it will throw some garbage values 
    ↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓*/                     
    numbers[12] = 1000;               

    std :: cout << "numbers[12]:" << numbers[12] << std :: endl;
    std :: cout << "numbers[11] : " << numbers[11] << std :: endl;
    std :: cout << "numbers[10] : " << numbers[10] << std :: endl;
    std :: cout << "numbers[9] : " << numbers[9] << std :: endl;

    std :: cout << numbers << std :: endl;

    return 0;
}