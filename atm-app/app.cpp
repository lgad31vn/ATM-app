#include <iostream>
using namespace std;

void showMenu() {
    cout << "-----------MENU----------" <<endl;
    cout << "|   1. Check Balance    |" << endl;
    cout << "|   2. Deposit          |" << endl;
    cout << "|   3. Withdraw         |" << endl;
    cout << "-------------------------" <<endl;
}

void checkBalance(double balance) {
        cout << "Your current balance is: $" << balance << endl;
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
            balance -= withdrawAmount;
            cout << "You've withdrawn $" << withdrawAmount << endl;
            checkBalance(balance);
        break;

    }



    return 0;
}