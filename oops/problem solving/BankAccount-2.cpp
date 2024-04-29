#include <bits/stdc++.h>
using namespace std;

class BankAccount
{
public:
    string account_name;
    int account_number;
    string address;
    int age;

protected:
    int balance;

private:
    string password;

public:
    // BankAccount(string accName, int accNumber, string accAddress, int accAge, int accBalance, string accPassword) : account_name(accName), address(accAddress), age(accAge), password(accPassword) {}
    BankAccount(string account_name, string address, int age, string password)
    {
        this->account_name = account_name;
        this->address = address;
        this->age = age;
        this->password = password;
        this->account_number = rand() % 1000000000;
        this->balance = 0;
        cout << "Account number is: " << this->account_number << endl;
    }
    int show_balance(string password)
    {
        if (this->password == password)
        {
            return this->balance;
        }
        else
        {
            return -1;
        }
    }
    void add_money(string password, int amount)
    {
        if (this->password == password)
        {
            this->balance += amount;
            cout << "Money added successfully!" << endl;
        }
        else
        {
            cout << "Failed to add money!" << endl;
        }
    }
    void deposit_money(string password, int amount)
    {
        if (amount < 0)
        {
            cout << "Invalid Amount" << endl;
            return;
        }
        if (this->password == password && this->balance >= amount)
        {
            this->balance -= amount;
            cout << "Money diposited successfully!" << endl;
        }
        else
        {
            cout << "Failed to deposit money!" << endl;
        }
    }
    friend class MyCash;
};

class MyCash
{
protected:
    int balance;

public:
    MyCash()
    {
        this->balance = 0;
    }
    void add_money_from_bank(BankAccount *myAccount, string password, int amount)
    {
        if (amount < 0)
        {
            cout << "Invalid Amount" << endl;
            return;
        }
        if (myAccount->balance < amount)
        {
            cout << "Insufficient Balance" << endl;
            return;
        }
        if (myAccount->password == password)
        {
            this->balance += amount;
            myAccount->balance -= amount;
            cout << "Added money successfully to my cash!" << endl;
        }
        else
        {
            cout << "Password didn't match." << endl;
        }
    }
    int show_balance()
    {
        return this->balance;
    }
};

BankAccount *createAccount()
{
    string account_name, address, password;
    int age;
    cout << "Create Account: " << endl;
    cin >> account_name >> address >> age >> password;
    BankAccount *myAccount = new BankAccount(account_name, address, age, password);
    return myAccount;
}

void add_money(BankAccount *myAccount)
{
    string password;
    int amount;
    cout << "Add Money:" << endl;
    cin >> password >> amount;
    myAccount->add_money(password, amount);
    cout << "Current Bank Balance is : " << myAccount->show_balance("abcd") << endl;
    cout << endl;
}

void deposit_money(BankAccount *myAccount)
{
    string password;
    int amount;
    cout << "Deposit Money:" << endl;
    cin >> password >> amount;
    myAccount->deposit_money(password, amount);
    cout << "Current Bank Balance is : " << myAccount->show_balance("abcd") << endl;
    cout << endl;
}
void add_money_from_bank(MyCash *myCash, BankAccount *myAccount)
{
    string password;
    int amount;
    cout << "Add Money from Bank to myCash:" << endl;
    cin >> password >> amount;
    myCash->add_money_from_bank(myAccount, password, amount);
    cout << "Your My Cash Balance is : " << myCash->show_balance() << endl;
    cout << "Current Bank Balance is : " << myAccount->show_balance("abcd") << endl;
}

int main()
{
    BankAccount *myAccount = createAccount();
    MyCash *myCash = new MyCash();

Bank:
    cout << "Select Options:" << endl;
    cout << "1. Add money to bank" << endl;
    cout << "2. Deposit money from bank" << endl;
    cout << "3. Add money to MyCash from bank" << endl;
    int option;
    cin >> option;

    if (option == 1)
    {
        add_money(myAccount);
    }
    else if (option == 2)
    {
        deposit_money(myAccount);
    }
    else if (option == 3)
    {
        add_money_from_bank(myCash, myAccount);
    }
    else
    {
        cout << "Invalid Option" << endl;
    }
    goto Bank;

    // while(true){
    //     cout<<"Select Options:"<<endl;
    //     cout<<"1. Add money to bank"<<endl;
    //     cout<<"2. Deposit money from bank"<<endl;
    //     cout<<"3. Add money to MyCash from bank"<<endl;
    //     int option;
    //     cin>>option;

    //     if(option == 1){
    //         add_money(myAccount);
    //     }else if(option == 2){
    //         deposit_money(myAccount);
    //     }else if(option == 3){
    //         add_money_from_bank(myCash, myAccount);
    //     }else{
    //         cout<<"Invalid Option"<<endl;
    //     }
    // }
    // add_money(myAccount);
    // deposit_money(myAccount);

    // MyCash *myCash = new MyCash();
    // add_money_from_bank(myCash, myAccount);

    // cout << "Your Current Bank Balance is : " << myAccount->show_balance("abcd") << endl;
    // if(myAccount->show_balance("abcd") == -1){
    //     cout<<"Password didn't match."<<endl;
    // }else{
    //     cout<<"Your Bank Balance is : "<<myAccount->show_balance("abcd")<<endl;
    // }
}