#include "Savings_Account.h"

Savings_Account::Savings_Account(std::string name, double balance, double int_rate)
    : Account {name, balance}, int_rate{int_rate} {
}

// Deposit:
//     Amount supplied to deposit will be incremented by (amount * int_rate/100)
//     and then the updated amount will be deposited
//
bool Savings_Account::deposit(double amount) {
    amount += amount * (int_rate/100);
    return Account::deposit(amount);
}

std::ostream &operator<<(std::ostream &os, const Savings_Account &account) {
    os << "[Savings_Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "%]";
    return os;
}

Savings_Account &Savings_Account::operator+=(double amount) {
    deposit(amount);
    return *this;
}

Savings_Account &Savings_Account::operator-=(double amount) {
    withdraw(amount);
    return *this;
}
