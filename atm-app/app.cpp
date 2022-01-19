#include <iostream>
using namespace std;

void showMenu() {
    cout << "-----------MENU----------" <<endl;
    cout << "|   1. Check Balance    |" << endl;
    cout << "|   2. Deposit          |" << endl;
    cout << "|   3. Withdraw         |" << endl;
    cout << "-------------------------" <<endl;
}


int main() {
    int option;
    double balance = 500.00;

    cout << "ATM Application" << endl;
    showMenu();

    cout << "what service do you want to perform? (1, 2, or 3)" << endl;
    cin >> option;

    switch(option) {
        case 1: 
            cout << "Your current balance is: $" << balance << endl;
            break;

        case 2: 
            cout << "Your current balance: $" << balance << endl;
            cout << "Deposit amount: ";
            double amount = 0.00;
            cin >> amount;
            balance += amount;
            cout << "You deposited $" << amount << endl;
            cout << "Your current balance: $" << balance << endl;
    }



    return 0;
}