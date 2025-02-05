#include<iostream>
#include<string.h>
using namespace std;
class BankAccount{
    private :
        string accountHolder;
        int accountNumber;
        string accountType;
        double balance;
    public :
        void getAccountHolder(){
            cout<<"Account Holder : "<<accountHolder<<endl;;
        }
        void getAccountNumber(){
            cout<<"Account Number : "<<accountNumber<<endl;
        }
         void getAccountType(){
            cout<<"Account Type : "<<accountType<<endl;;
        }
         void getBalance(){
            cout<<"Balance : "<<balance<<endl<<endl;
        }
        void setAccountType(int x){
            accountType = x;
        }
        BankAccount(){
            accountHolder = '\0';
            accountNumber = 0;
            accountType = '\0';
            balance = 0;
        }
        BankAccount(string A,int B,string C,int D){
            accountHolder = A;
            accountNumber = B;
            accountType = C;
            balance = D;
        }
        int deposite(int balance){
            int amount=0;
            cout<<"Enter Deposite Amount : ";
            cin>>amount;
            return amount+balance;
        }
        double withdraw(double balance){
            int amount=0;
            cout<<"Enter withdraw Amount : ";
            cin>>amount;
            return balance-amount;
        }
        int display(int amount){
            cout<<"Final Account Details :-"<<endl;
            cout<<"Account Holder : "<<accountHolder<<endl;
            cout<<"Account Number : "<<accountNumber<<endl;
            cout<<"Account Type : "<<accountType<<endl;
            cout<<"Final Amount : "<<withdrawAmount<<endl;
            return 0;
        }
        
};
int main(){
    string acc_Holder,acc_Type;
    int acc_Number,balance_Amount;
    cout<<"Enter Account Holder Name : ";
    cin>>acc_Holder;
    cout<<"Enter Account Number : ";
    cin>>acc_Number;
    cout<<"Enter Account Type : ";
    cin>>acc_Type;
    cout<<"Enter Balance : ";
    cin>>balance_Amount;

    BankAccount b1;
    b1.getAccountHolder();
    b1.getAccountNumber();
    b1.getAccountType();
    b1.getBalance();

    BankAccount b2(acc_Holder,acc_Number,acc_Type,balance_Amount);
    b2.getAccountHolder();
    b2.getAccountNumber();
    b2.getAccountType();
    b2.getBalance();

    double depositeAmount;
    depositeAmount = b2.deposite(balance_Amount);
    cout<<"Final amount : " <<depositeAmount<<endl;

    double withdrawAmount;
    withdrawAmount = b2.withdraw(depositeAmount);
    cout<<"Final Amount : "<<withdrawAmount<<endl;

    b2.display(withdrawAmount);
    


}