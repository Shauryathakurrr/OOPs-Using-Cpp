#include<iostream>
using namespace std;
class ATM {
    private:
    double balance;

    public:
    ATM(){
        balance=2000;
    }
    
    void checkbalance(){
        cout<<"Balance : "<<balance<<endl;
    }

    void deposit(){
        double amount;
        cout<<"ENTER AMOUNT TO DEPOSIT :";
        cin>>amount;
        balance+=amount;
        cout<<"Amount deposited successfully"<<endl;
    }

    void withdraw(){
        double amount;
        cout<<"enter amount to withdraw :";
        cin>>amount;
        if(amount>balance){
            cout<<"Insufficient balance"<<endl;

        }
        else{
            balance-=amount;
            cout<<"withdrawal successful"<<endl;

        }
        }
    };
int main(){
    ATM user;
    user.checkbalance();
    user.deposit();
    user.withdraw();
    user.checkbalance();

    return 0;

}