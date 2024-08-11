#include <memory>
#include <string>
#include <vector>
#include "Setup.h"

using namespace std;

vector<unique_ptr<Setup> > accounts;

void Setup::addAccount(const string &name, int investment, int deposit, float interest, int years) {
    auto newSetup = make_unique<Setup>();
    newSetup->SetName(name);
    newSetup->SetInvest(investment);
    newSetup->SetDeposit(deposit);
    newSetup->SetInterest(interest);
    newSetup->SetYears(years);
    accounts.push_back(std::move(newSetup));
}

void editAccount(const string &name, int investment, int deposit, float interest, int years) {
    for(auto& account : accounts) {
        if(account->GetName() == name) { // if account with provided name is found
            account->SetInvest(investment);
            account->SetDeposit(deposit);
            account->SetInterest(interest);
            account->SetYears(years);
            break;
        }
    }
}


