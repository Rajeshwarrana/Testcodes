#include<iostream>
int main(){

    int score [10];
    score [1] = 20;


    std :: cout << "READING OUT SCORE VALUES" << std :: endl;
    std :: cout << "score [0] :- " << score[0] << std :: endl;
    std :: cout << "score [1] :- " << score[1] << std :: endl;
    std :: cout << "-------------------------" << std :: endl;

    for( size_t i{0} ; i < 10 ; ++i){
    std :: cout << "score[" << i << "] : " << score[i] << std :: endl;
    }

    return 0;



}