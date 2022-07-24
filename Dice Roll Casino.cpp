#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0)); 

    int userChoice; 
    int money = 100; 

    cout << "Welcome to the Dice Rolling Casino!" << endl;
    cout << "If you choose correctly, your gain $50." << endl;
    cout << "If you choose incorrectly, you lose $25." << endl;

    // If user has money, user can play
    while (money > 0) {

        // Generates a random number between 1-10
        int diceRoll = (rand() % 5) + 1;
        
        cout << "You currenty have $" << money << endl;
        cout << "Please choose a number between 1-5 to guess: "; cin >> userChoice;
        cout << "The dice rolled a: " << diceRoll << endl;

        // If user chose correctly
        if (userChoice == diceRoll) {

            money = money + 50;
            cout << "You picked right!" << endl;

        // If user chose incorrectly
        } else {

            money = money - 75;
            cout << "You lost!" << endl; 
    
        }

    } 

    cout << "Sorry you don't have any money left. Goodbye :3" << endl;

}