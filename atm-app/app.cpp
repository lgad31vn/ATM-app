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

    cout << "ATM Application" << endl;
    showMenu();

    return 0;
}