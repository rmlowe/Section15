#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
    : Savings_Account{name, balance, int_rate} {
}

bool Trust_Account::deposit(double amount) {
    bool result = Savings_Account::deposit(amount);
    
    if ((amount >= 5000.00) && result) {
        Account::deposit(50.00);
    }
    
    return result;
}

bool Trust_Account::withdraw(double amount) {
    if (amount / balance >= 0.2) {
        return false;
    }
    
    if (number_of_withdrawals >= 3) {
        return false;
    }
    
    ++number_of_withdrawals;
    
    return Savings_Account::withdraw(amount);
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account) {
    os << "[Trust_Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "%]";
    return os;
}
