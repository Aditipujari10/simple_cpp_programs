#include<iostream>
using namespace std;
class Employee{
	static int count;
	private :
		int employeeId;
		string employeeName;
	public : 
		void getEmployeeInfo(){
			cout<<count<<endl;
			cout<<"Employee Id  : "<<employeeId<<", Employee Name : "<<employeeName<<endl;
			count++;
		}
		Employee(int i,string n){
			//cout<<count<<endl;
			employeeId = i;
			employeeName = n;
			//count++;
		}
};
int Employee::count=0;
int main(){
	Employee e[3]={Employee(23,"Aditi"),
					Employee(25,"Neha"),
					Employee(27,"Shravani")};
	for(int i=0;i<3;i++){
		e[i].getEmployeeInfo();
	}
	return 0;
}
