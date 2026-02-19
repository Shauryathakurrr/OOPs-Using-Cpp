#include <iostream>
using namespace std;

class BankAccount
{
    string accountHolder;
    long accountNumber;
    double balance;

    bool isValidAmount(double amount)
    {
        return amount > 0;
    }

public:
    BankAccount(string n, long a, double ibal)
    {
        accountHolder = n;
        accountNumber = a;

        if (ibal >= 0)
        {
            balance = ibal;
        }
        else
        {
            balance = 0;
        }
    }

    string getAccountHolder()
    {
        return accountHolder;
    }

    long getAccountNumber()
    {
        return accountNumber;
    }

    double getBalance()
    {
        return balance;
    }

    void deposit(double amt);
    void withdraw(double amt);
    void display();
};
void BankAccount::deposit(double amt)
{
    if (isValidAmount(amt))
    {
        balance += amt;
        cout << "Deposit successful. New balance: " << balance << endl;
    }
    else
    {
        cout << "Invalid amount. Deposit failed." << endl;
    }
}

void BankAccount::withdraw(double amt)
{
    if (isValidAmount(amt) && amt <= balance)
    {
        balance -= amt;
        cout << "Withdrawal successful. New balance: " << balance << endl;
    }
    else
    {
        cout << "Invalid amount or insufficient funds. Withdrawal failed." << endl;
    }
}

void BankAccount::display()
{
    cout << "\nAccount Holder: " << accountHolder << endl;
    cout << "Account Number: " << accountNumber << endl;
    cout << "Current Balance: " << balance << endl;
}

int main()
{
    BankAccount b("SHAURYA THAKUR", 44046698745, 45484);

    b.display();

    b.deposit(1500);
    b.withdraw(2000);
    b.withdraw(10000);

    b.display();

    return 0;
}
