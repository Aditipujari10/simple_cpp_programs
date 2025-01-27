#include<iostream>
using namespace std;
class Student{
	private:
		int roll_number;
		int marks;
		char name;
	public:
		void getStudentInfo(){
			cout<<roll_number<<endl;
			cout<<marks<<endl;
			cout<<name<<endl;
		}
		int setStudentInfo(int r,int m,char n){
			roll_number = r;
			marks =m;
			name =n;
			return 0;
		}
		Student(){
			roll_number = 3;
			marks = 89;
			name = 'A';
		}
		Student(int m,int r){
			marks =m;
			roll_number = r;
		} 
		Student(int roll,int mark,char nam){
			roll_number = roll;
			marks = mark;
			name = nam;
		}
		~Student(){
		}
};
int main(){
	Student s1;
	Student s2;
	s2.getStudentInfo();
	s2.setStudentInfo(2,90,'A');
	Student s3(1,90,'A');
}
