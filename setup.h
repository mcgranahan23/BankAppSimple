//
// Created by Miles Mcgranahan on 8/1/24.
//
#ifndef SETUP_H
#define SETUP_H
using namespace std;

#include <string>

#include <iostream>


class Setup {
    private:
        string acctName;
        int acctInv = -1;
        int acctDep = -1;
        float acctInterest = 1;
        int acctYear = -1;
        bool isSaved = false;

    public:
        void SetName(string name);
        void SetInvest(int inv);
        void SetDeposit(int dep);
        void SetInterest(float interest);
        void SetYears(int year);
        void SetIsSaved(bool value) { isSaved = value; }
        void PrintDeposit() const;
        // make getters
        string GetName() { return acctName; }
        int GetInvest() const { return acctInv; }
        int GetDeposit() const { return acctDep; }
        float GetInterest() const { return acctInterest; }
        int GetYears() const { return acctYear; }
        bool IsSaved() const { return isSaved; }

        static void addAccount(const string &name, int investment, int deposit,
                               float interest, int years);
    static Setup enterValues() {
        bool go = false;
        string name;
        int invest, deposit, years;
        float interest;
        Setup defaultSetup;

        while (!go) {
            try {
            int hold = -1;
            cin.clear();
            cin.ignore();
            cout << "What is your name?" << endl;
            getline(cin, name);
            cout << "How much do you plan to invest?" << endl;
            cin >> invest;
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout << "How much do you plan to deposit?" << endl;
            cin >> deposit;
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout << "How long do you plan to invest?" << endl;
            cin >> years;
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout << "What will your interest rate be?" << endl;
            cin >> interest;
            cin.ignore(numeric_limits<streamsize>::max(),'\n');

            Setup setup;
            setup.SetName(name);
            setup.SetInvest(invest);
            setup.SetDeposit(deposit);
            setup.SetYears(years);
            setup.SetInterest(interest);
            setup.PrintDeposit();
            cout << "Would you like to save this account?\n1.) Yes\n2.) No" << endl;
            cin >> hold;

            if (hold == 1) {
                setup.SetIsSaved(true);
                return setup;
            }
            if (hold == 2) {
                setup.SetIsSaved(false);
                return setup;
            }

            } catch (const exception& err) {
                // Output error message
                cerr << "Error: " << err.what() << endl;
                go = true;

            }



        }


    return defaultSetup;
    }

};



#endif //SETUP_H

