#include <iostream>
using namespace std;

class BankAccount{
    private :
    int AccountNumber;
    char Name;
    public :
    int Deposite(int i){
        int amount;
        cout<<"Enter the amount you want to deposite"<<endl;
        cin>>amount;
        return i + amount;
    }
    int withdraw(int i){
        int wd;
        cout<<"Enter the amount you want to widraw"<<endl;
        cin>>wd;
        return i-wd;
    }
};
int main() {
    BankAccount b1;
    
    char name[20];
    int initialAmount;
    cout<<"Enter account holder name ; "<<endl;
    cin>>name;
    cout<<"Enter your initial amount : "<<endl;
    cin>>initialAmount;
    int ch;
        cout<<"1.Deposite your amount"<<endl;
        cout<<"2.Widraw your amount"<<endl;
        cout<<"3.Check your current bank balence"<<endl;
        cout<<"4.Exit!!"<<endl;
        
        cout<<"Enter your choice(1-3) : "<<endl;
        cin>>ch;
    
        switch(ch){
            case 1:{
                int depositeAmount=0;
                depositeAmount = b1.Deposite(initialAmount);
                cout<<"Your amount is deposited successfully!"<<endl;
                cout<<"The total amount is : "<<depositeAmount<<endl;
                break;
            }
            case 2:{
                int withdrawAmount;
                withdrawAmount =b1.withdraw(initialAmount);
                cout<<"Your amount is withdraw successfully!"<<endl;
                cout<<"The total amount is : "<<withdrawAmount<<endl;
                break;
                
            }
            case 3:{
                cout<<"Your current balence is : "<<initialAmount<<endl;
                break;
            }
            case 4:{
                cout<<"Exit!!"<<endl;
                break;
            }
            default :{
                cout<<"Invalid choice!"<<endl;
            }
        }
    return 0;
}
