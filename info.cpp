//
// Created by Miles Mcgranahan on 8/1/24.
//
using namespace std;
#include "Setup.h"
#include <string>
#include <iostream>
#include <iomanip>


void Setup::SetName(string name) { acctName = name; }
void Setup::SetInvest(int inv) { acctInv = inv; }
void Setup::SetDeposit(int dep) { acctDep = dep; }
void Setup::SetInterest(float interest) { acctInterest = interest; }
void Setup::SetYears(int year) { acctYear = year; }
void Setup::PrintDeposit() const {
    cout << "Hello, " << acctName << ".\n" <<
            "Initial Investment - " << acctInv <<
            "\nMonthly Deposit - " << acctDep <<
            "\nInterest Rate - " << acctInterest <<
            "%\nYears - " << acctYear << endl;

    double acctBal = acctInv; // account balance starts from initial investment
    double monthlyInterestRate = acctInterest / 100 / 12; // convert interest rate from percentage to a monthly rate
    int totalMonths = acctYear * 12; // total months

    for (int i = 1; i <= totalMonths; ++i) {
        acctBal += acctDep; // add monthly deposit
        acctBal *=  (1 + monthlyInterestRate); // apply monthly interest

        if (i % 12 == 0) { // print yearly balance
            cout << "Investment after " << i/12 << " year(s):" << endl;
            cout << fixed << setprecision(2) << acctBal << endl;
        }
    }
}

