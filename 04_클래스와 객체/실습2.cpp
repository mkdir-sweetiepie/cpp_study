#include <iostream>
#include <string>
using namespace std;

class Account
{
public:
    string owner;
    int accountNumber;
    int balance;
    Account();
    Account(string ownerName, int accNumber, int initialBalance);
    void deposit(int amount);
    int withdraw(int amount);
    string getOwner();
    int inquiry();
};


Account::Account() {}

Account::Account(string ownerName, int accNumber, int initialBalance)
{
    owner = ownerName;
    accountNumber = accNumber;
    balance = initialBalance;
}

void Account::deposit(int amount)
{
    balance += amount;
}

int Account::withdraw(int amount)
{
    if (balance >= amount)
    {
        balance -= amount;
        return amount;
    }
    else
    {
        cout << "Insufficient balance!" << endl;
        return 0;
    }
}

string Account::getOwner()
{
    return owner;
}

int Account::inquiry()
{
    return balance;
}

int main()
{
    Account a("kitae", 1, 5000);
    a.deposit(50000);
    cout << a.getOwner() << "'s balance: " << a.inquiry() << endl;
    int money = a.withdraw(20000);
    cout << a.getOwner() << "'s balance: " << a.inquiry() << endl;
}
