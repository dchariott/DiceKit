#include <iostream>
#include "dice.h"

using namespace std;

int main() {

    for (;;){
        cout << "Select an option: " << endl;
        cout << "1: Roll D4" << endl;
        cout << "2: Roll D6" << endl;
        cout << "3: Roll D8" << endl;
        cout << "4: Roll D12" << endl;
        cout << "5: Roll D20" << endl;
        cout << "6: Roll D100" << endl;
        cout << "Enter a number not in the range 1-6 to exit the loop" << endl;
        int choice = 0;
        cin >> choice;

        cout << "How many times would you like to roll the dice? " << endl;
        int counter = 0;
        cin >> counter;
        int result = 0;
        switch (choice){
            case 1: result = rollD4(counter); break;
            case 2: result = rollD6(counter); break;
            case 3: result = rollD8(counter); break;
            case 4: result = rollD12(counter); break;
            case 5: result = rollD20(counter); break;
            case 6: result = rollD100(counter); break;
            default: break;
        }
        if (choice < 1 || choice > 6){
            break;
        }
        cout << "Result: " << result << endl;
    }

    return 0;
}