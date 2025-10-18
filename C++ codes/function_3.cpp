#include<iostream>

int max(int a, int b);                                                  // Function prototype
int min(int a, int b);

int main(){
    
    int a , b;

    std :: cout<<"Enter two numbers: ";
    std :: cin >> a >> b;
    std :: cout << "Maxmimu is : " << max(a,b) << std :: endl;              // Function call
    std :: cout << "Minimum is : " << min(a,b) << std :: endl;              // Function call
    return 0;
}

int max(int a , int b){                                                  // Function definition
    if(a > b){
        return a;

    }
    else{
        return b;
    }
}

int min(int a, int b){                                                 // Function definition
    if (a < b){
        return a;
    }
    else{
        return b;
    }
}