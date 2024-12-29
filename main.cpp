#include <iostream>
using namespace std;

// Video: https://www.youtube.com/watch?v=wccZgjs90S8

void showMenu() {
    cout << "**********MENU**********" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdrawal" << endl;
    cout << "************************" << endl;
};

int main() {

    // Store user menu option
    int option;
    
    showMenu();
    cout << "Please make a selection:" << endl;
    cin >> option;

    return 0;
}
