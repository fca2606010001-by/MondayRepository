#pragma once

#include <string>

class BankAccount
{
private:
    std::string accountHolder;  // å˚ç¿ñºã`êl
    double balance;             // écçÇ

public:
    BankAccount(const std::string& holder, double initialBalance);

    void deposit(double amount);
    void withdraw(double amount);

    double getBalance() const;
    void displayAccountInfo() const;
};
