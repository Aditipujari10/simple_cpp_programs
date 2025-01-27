#include<iostream>
using namespace std;
class Student{
	private:
		int roll_number;
		char name;
		int marks;
	public:
		void getStudentInfo(){
			cout<<roll_number<<endl;
			cout<<name<<endl;
			cout<<marks<<endl;
		}
		int setStudentInfo(int r,char n,int m){
			roll_number = r;
			name = n;
			marks = m;
			return 0;
		}
};
int main(){
	Student s1;	
	s1.setStudentInfo(3,'A',85);
	s1.getStudentInfo();
	return 0;
}



