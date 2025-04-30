#include<iostream>
using namespace std;

template <typename T>
T FindMax(T a,T b){
	return (a > b) ? a : b;
}

template <typename T>
class Calculator {
    T a, b;
public:
    Calculator(T x, T y) {
        a = x;
        b = y;
    }

    T add() { return a + b; }
    T subtract() { return a - b; }
    T multiply() { return a * b; }
    T divide() { return a / b; }
};	
int main(){
	cout<<"Max of 5 and 10 is : "<<FindMax(5,10)<<endl;
	
	Calculator<int> intCalc(5, 10);
    cout << "Integer Addition Operation: " << intCalc.add() << endl;
    
    Calculator<int> int_Calc(5, 10);
    cout << "Integer Substraction Operation: " << int_Calc.subtract() << endl;

    Calculator<float> floatCalc(3.5, 2.0);
    cout << "Float Multiplication Operation: " << floatCalc.multiply() << endl;

    Calculator<float> float_Calc(3.5, 2.0);
    cout << "Float Division Operation: " << float_Calc.divide() << endl;
}
