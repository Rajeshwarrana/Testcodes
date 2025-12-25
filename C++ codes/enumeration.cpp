//Enum are the user-defined data type in C++ that consists of integral constants, and each of them is assigned a name.

#include <iostream>

enum Ranking{
    Poor = 1,        // 0
    Average,     // 1
    Good ,        // 2
    Excellent    // 3
};

int main(){

    Ranking Player1 ;
    Ranking Player2 = Excellent;
    Ranking Player3 = Average;

    std::cout << "Player 1 Ranking: " << Player1 << std::endl;
    std::cout << "Player 2 Ranking: " << Player2 << std::endl;
    std::cout << "Player 3 Ranking: " << Player3 << std::endl;
    return 0;

    
}


