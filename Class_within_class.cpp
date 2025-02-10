#include<iostream>
#include<string.h>
using namespace std;
class Employee{
	private : 
		int employeeId = 23;
	public : 
		void getEmployeeInfo(){
			cout<<"Employee Id : "<<employeeId<<endl;
		}
    class Salary{
    	private :
    		int employeeSalary = 70000;
    	public :
    		void getSalaryInfo(){
    			cout<<"Employee salary : "<<employeeSalary<<endl;
			}
			void getEmployeeFromSalary(Employee &obj){
				cout<<"Employee ID : "<<obj.employeeId<<endl;
			}
	};
};
int main(){
	Employee e1;
	Employee :: Salary s1;
	e1.getEmployeeInfo();
	s1.getSalaryInfo();
	s1.getEmployeeFromSalary(e1);
}
