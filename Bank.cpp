#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    int accountNumber;
    string accountType;
    double balance;

public:
    BankAccount() {
        accountHolder = "";
        accountNumber = 0;
        accountType = "";
        balance = 0.0;
    }

    BankAccount(string A, int B, string C, double D) {
        accountHolder = A;
        accountNumber = B;
        accountType = C;
        balance = D;
    }

    void getAccountHolder() {
        cout<<"Account Holder: "<<accountHolder<<endl;
    }

    void getAccountNumber() {
        cout<<"Account Number: "<<accountNumber<<endl;
    }

    void getAccountType() {
        cout<<"Account Type: "<<accountType<<endl;
    }

    void getBalance() {
        cout<<"Balance: "<<balance<<endl<<endl;
    }

    void setAccountType(string x) {
        accountType = x;
    }

    void deposit() {
        double amount = 0;
        cout <<"Enter deposit amount: ";
        cin >>amount;
        balance += amount;
        cout<<"Amount deposited successfully."<<endl<<"Updated Balance: "<<balance<< endl<<endl;
    }

    void withdraw() {
        double amount = 0;
        cout<<"Enter withdrawal amount: ";
        cin>>amount;

        if(amount > balance){
            cout<<"Insufficient balance! Withdrawal failed."<<endl;
        }else{
            balance -= amount;
            cout<<"Amount withdrawn successfully."<<endl<<" Updated Balance: "<<balance<< endl<<endl;
        }
    }

    
    void display() {
        cout<<"Final Account Details:"<<endl;
        cout<<"Account Holder: "<<accountHolder<<endl;
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Account Type: "<<accountType<<endl;
        cout<<"Final Balance: "<<balance<<endl<<endl;
    }
};

int main() {
    BankAccount b1;
    b1.getAccountHolder();
    b1.getAccountNumber();
    b1.getAccountType();
    b1.getBalance();

    BankAccount b2("Aditi", 123, "Saving", 85000);
    b2.getAccountHolder();
    b2.getAccountNumber();
    b2.getAccountType();
    b2.getBalance();

    cout << endl;

    b2.deposit();
    b2.withdraw();
    b1.setAccountType("Current");
    b1.getAccountType();
    b2.display();

    return 0;
}
