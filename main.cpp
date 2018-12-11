#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "database/N5.h"
using namespace std;

int main(){
    string input;
    srand(time(NULL));
    int index;
    while(1){
        cout << "Enter 1 to start the game, enter 0 to end the program: ";
        cin >> input;
        if (input == "0") // end the program
            break;
        else if (input == "1"){ // start the game
            while(1){
                index = (rand() % (sizeOfQuestion / 2)) * 2;
                cout << question[index] << " → "; 
                cin >> input;
                if (input == question[index + 1]){
                    cout << "Correct answer." << endl;
                    continue;
                }
                else {
                    cout << "Wrong answer." << endl;
                    break;
                }
            }
        }
    }
    cout << "Goodbye." << endl;
    return 0;
}
    