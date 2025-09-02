#include<iostream>

int main(){

    size_t size{10};

    //different aways to declerar an array dynamically 

    double *p_salary { new double[size] }; //salary array will contain garbage values

    int *p_students { new(std::nothrow) int[size]{} }; //all values initialized to 0

    double *p_scores { new (std::nothrow) double[size]{1,2,3,4,5}}; // first 5 will be initialised with 1 2 3 4 5 and rest will be with 0's


    //nullptr check and use the allocated array
    if(p_scores){
        //Print out elements. Can use regular array access notation, or pointer arithmetic
        for( size_t i{}; i < size ; ++i){
        std :: cout << "value : " << p_scores[i] << ":" << * ( p_scores + i) << std :: endl;

        }
    }


    delete[] p_salary;
    p_salary = nullptr;

    delete[] p_students;     // RELESASING THE ALLOCATED MEMORY (ARRAYS VERSION)
    p_students = nullptr;

    delete[] p_scores;
    p_scores = nullptr;


    return 0;


}