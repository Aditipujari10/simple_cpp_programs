//Display multiplication table
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter Number : ";
    cin>>number;
    cout<<"Multiplication Table of "<<number<<endl;
    for(int i=1;i<=10;i++){
        cout<<number*i<<endl;
    }
    return 0;
}
