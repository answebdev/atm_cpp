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
    double balance =  500.00;
    
    showMenu();
    cout << "Please make a selection: ";
    cin >> option;

    switch (option) {
        case 1:
            cout << "Your balance is $" << balance << "." << endl;
            break;
        case 2: 
            cout << "Deposit amount: ";
            double depositAmount;
            cin >> depositAmount;
            balance += depositAmount;
            break;
        case 3: 
            cout << "Withdrawal amount: ";
            double withdrawalAmount;
            cin >> withdrawalAmount;
            if(withdrawalAmount <= balance) {
                balance -= depositAmount;
            } else {
                cout << "Insufficient funds in account." << endl;
            }
            break;
    };

    return 0;
}
