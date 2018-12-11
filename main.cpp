#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "database/N5.h"
using namespace std;

int main(){
    string input;
    srand(time(NULL));
    int index, nosp; // nosp stands for # Of Solved Problems
    while(1){
        nosp = 0;
        cout << "Enter 1 to start the game, enter 0 to end the program: ";
        cin >> input;
        if (input == "0") // end the program
            break;
        else if (input == "1"){ // start the game
            while(1){
                index = (rand() % (sizeOfQuestion / 2)) * 2;
                cout << question[index] << " > "; 
                cin >> input;
                if (input == question[index + 1]){
                    cout << "Correct answer. \nYou have solved " << ++nosp << ((nosp == 1)? " problem.": " problems.") << endl;
                    continue;
                }
                else {
                    cout << "Wrong answer. \nThe correct answer is "<< question[index + 1] << ".\nYou solved " << nosp << " problems this time." << endl;
                    break;
                }
            }
        }
    }
    cout << "Goodbye." << endl;
    return 0;
}
    