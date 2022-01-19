#include <iostream> // allow print out and get info from user
#include <string> // works with string
using namespace std; // 

int main() {

    // PRINTING
    cout << "// Printing" << endl;
    cout << "hello" << endl;

    string name = "Logan";
    cout << "this is " << name << " testing out C++"  << endl;

    // casting
    cout << endl;
    cout << "// Casting" << endl;
    cout << (int) 3.14 << endl;
    cout << (double) 3/2 << endl;   


    // Pointers -- memory address
    cout << endl;
    cout << "// Pointers" << endl;
    int num = 10;
    cout << &num << endl; 

    int *pNum = &num;
    cout << pNum << endl;
    cout << *pNum << endl;

    return 0;
}