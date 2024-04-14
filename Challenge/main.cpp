// Section 15
// Challenge
#include <iostream>
#include <vector>
#include "Savings_Account.h"
#include "Account_Util.h"

using namespace std;

int main( ) {
    cout.precision(2);
    cout << fixed;
    
    // Accounts
    vector<Account> accounts;
    accounts.push_back(Account {});
    accounts.push_back(Account {"Larry"});
    accounts.push_back(Account {"Moe", 2000} );
    accounts.push_back(Account {"Curly", 5000} );
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts,2000);
    
    // Savings
    
    vector<Savings_Account> sav_accounts;
    sav_accounts.push_back(Savings_Account {} );
    sav_accounts.push_back(Savings_Account {"Superman"} );
    sav_accounts.push_back(Savings_Account {"Batman", 2000} );
    sav_accounts.push_back(Savings_Account {"Wonderwoman", 5000, 5.0} );
    
    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);
    
    // Checking
    
    vector<Checking_Account> chk_accounts;
    chk_accounts.push_back(Checking_Account {});
    chk_accounts.push_back(Checking_Account {"Larry"});
    chk_accounts.push_back(Checking_Account {"Moe", 2000});
    chk_accounts.push_back(Checking_Account {"Curly", 5000});
    
    display(chk_accounts);
    deposit(chk_accounts, 1000);
    withdraw(chk_accounts, 2000);
    
    // Trust
    
    vector<Trust_Account> trst_accounts;
    trst_accounts.push_back(Trust_Account {});
    trst_accounts.push_back(Trust_Account {"Superman"});
    trst_accounts.push_back(Trust_Account {"Batman", 2000});
    trst_accounts.push_back(Trust_Account {"Wonderwoman", 5000, 5.0});
    
    display(trst_accounts);
    deposit(trst_accounts, 1000);
    deposit(trst_accounts, 5000);
    withdraw(trst_accounts, 1000);
    withdraw(trst_accounts, 1000);
    withdraw(trst_accounts, 1000);
    withdraw(trst_accounts, 1000);
    
    Savings_Account ww_acc = sav_accounts.at(3);
    ww_acc += 1000;
    std::cout << ww_acc << std::endl;
    ww_acc -= 2000;
    std::cout << ww_acc << std::endl;
    
    
    return 0;
}

