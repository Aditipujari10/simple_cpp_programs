//Arithmetic operations
#include<iostream>
using namespace std;
int main()
{
    int num1;
    int num2;
    cout<<"Enter your first number : ";
    cin>>num1;
    cout<<"Enter your second number : ";
    cin>>num2;
    cout<<"Arithmetic operations of "<<num1<<" And " <<num2<<endl;
    cout<<"Addition = "<<num1 + num2<<endl;
    cout<<"Substraction = "<<num1 - num2<<endl;
    cout<<"multiplication = "<<num1 * num2<<endl;

    if(num2!=0)
    {
        cout<<"Division = "<<(float)num1 / num2<<endl;
        cout<<"Modulas = "<<num1 % num2<<endl;
    }
    else{
        cout<<"Division and modulus by zero are not allowed "<<endl;
    }
    return 0;
}