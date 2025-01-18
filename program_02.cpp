//Largest of three numbers
#include<iostream>
using namespace std;
int main(){
    int N1,N2,N3;
    cout<<"Enter First Numbers : ";
    cin>>N1;
    cout<<"Enter Second Numbers : ";
    cin>>N2;
    cout<<"Enter Third Numbers : ";
    cin>>N3;
    if(N1 > N2 && N1 > N3){
        cout<<"The Largest Number is : "<< N1 <<endl;
    }
    else if(N2 > N3){
        cout<<"The Largest Number is : "<< N2 <<endl;
    }
    else{
        cout<<"The Largest Number is : "<< N3 <<endl;   
    }
}