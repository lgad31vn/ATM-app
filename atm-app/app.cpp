#include <iostream>
#include "components/showMenu.h"
using namespace std;




void checkBalance(double balance) {
        cout << "Your current balance is: $" << balance << endl;
}


int main() {
    int option;
    double balance = 500.00;

    while(option != 4) {
        cout << endl;
        cout << "ATM Application" << endl;
        showMenu();

        cout << "what service do you want to perform?" << endl;
        cin >> option;
        
        if (option < 1 || option > 4) {
            cout << "option " << option << " is not valid" << endl;
        } else {
            switch(option) {
            case 1: 
                checkBalance(balance);
                break;

            case 2: 
                checkBalance(balance);
                cout << "Deposit amount: $";
                double depositAmount;
                cin >> depositAmount;
                balance += depositAmount;
                cout << "You've deposited $" << depositAmount << endl;
                checkBalance(balance);
                break;
            case 3:
                checkBalance(balance);
                cout << "Withdraw amount: $";
                double withdrawAmount;
                cin >> withdrawAmount;

                if (withdrawAmount > balance) {
                    cout << "Not enough to withdraw" << endl;
                    checkBalance(balance);
                } else {
                    balance -= withdrawAmount;
                    cout << "You've withdrawn $" << withdrawAmount << endl;
                    checkBalance(balance);
                }
                break;
            
        }
    }
    }
    cout << "Goodbye!" << endl;

    return 0;
}