/*Define a class named `BankAccount` with private attributes `accountNumber`, `balance`, and `ownerName`. 
Encapsulate these attributes using appropriate access specifiers. Implement public member functions to credit, debit, and display the balance.
Demonstrate encapsulation by interacting with the class through its member functions.*/

#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    double balance;
    string ownerName;

public:
    
    BankAccount(int accNo, double bal, string name)
    {
        accountNumber = accNo;
        balance = bal;
        ownerName = name;
    }

    void credit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Amount credited successfully." << endl;
        }
        else
        {
            cout << "Invalid credit amount." << endl;
        }
    }

   
    void debit(double amount)
    {
        if (amount <= 0)
        {
            cout << "Invalid debit amount." << endl;
        }
        else if (amount <= balance)
        {
            balance -= amount;
            cout << "Amount debited successfully." << endl;
        }
        else
        {
            cout << "Insufficient balance." << endl;
        }
    }

    void displayBalance()
    {
        cout << "\nAccount Number: " << accountNumber << endl;
        cout << "Owner Name: " << ownerName << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount account(101, 5000, "dhyani");

    account.displayBalance();

    account.credit(2000);
    account.displayBalance();

    account.debit(1500);
    account.displayBalance();

    return 0;
}

