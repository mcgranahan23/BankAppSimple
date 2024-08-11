#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

#include "Setup.h"

using namespace std;

void startMenu() {
    cout << "Enter a Selection 1-4" << "\n1.) Show Accounts \n2.) Create New Account "
                                       "\n3.) Quit" << endl;
}

void saveAcct(string name, int inv, int dep, float interest, int year) {

}

int main() {
    int menuSelect;
    Setup preview;

    startMenu();

    try {
        cin >> menuSelect;
        if (menuSelect > 4 or menuSelect < 1) { throw; }
    } catch(...) {
        cout << "Enter a number 1-4." << endl;
    }
    while (menuSelect != 4) {
        switch (menuSelect) {
            case 1:
                // show accts
                    break;
            case 2: // new acct
                preview = preview.enterValues();
            if(preview.IsSaved()) {
                preview.addAccount(preview.GetName(), preview.GetInvest(), preview.GetDeposit(),
                    preview.GetInterest(), preview.GetYears());
                cout << "Account has been saved." << endl;

            }
            else if (!preview.IsSaved()) { cout << "Account not saved." << endl; }
            else { cout << "Error. Please try again." << endl;}

            break;
            case 3:
                menuSelect = 4;
            return 0;
            default:
                cout << "Please enter a selection 1-4." << endl;
            startMenu();
            cin >> menuSelect;
            break;
        }
        startMenu();
        cin >> menuSelect;

    }



    return 0;
}
