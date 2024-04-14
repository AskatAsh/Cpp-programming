#include<iostream>
#include<string>
using namespace std;

class BankAccount{
    private:
    string accountNumber;
    double balance;

    public:
    BankAccount(string accNum, int initialBalance): 
    accountNumber(accNum), balance(initialBalance){}

    void deposit(double amount){
        balance += amount;
        cout<<"Deposit successful. Current Balance: "<<balance<<endl;
    }

    void withdraw(double amount){
        // if(balance-amount >= 0){
        if(amount <= balance){
            balance -= amount;
            cout<<"Withdraw successful. Current Balance: "<<balance<<endl;
        }else{
            cout<<"Sorry. Not enough balance..!"<<endl;
        }
    }
};

int main(){
    BankAccount bankAcc("sb-123", 5000);
    bankAcc.deposit(1250);
    bankAcc.withdraw(4050);
    bankAcc.withdraw(2300);
}