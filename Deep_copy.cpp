#include<iostream>
using namespace std;
class Demo{
	private :
		int* p;
	public :
		void getDemo(){
			cout<<*p<<endl;
		}
		void setDemo(int x){
			*this->p = x;
		}
		Demo(int x){
			cout<<"Default constructor is called"<<endl;
			p = new int(x);
		}
		Demo(const Demo& obj){
			cout<<"My copy constructor is called"<<endl;
			p=new int (*obj.p);
		}
};
int main(){
	Demo d1(456);
	d1.getDemo();
	Demo d2(d1);
	d2.getDemo();
	d2.setDemo(777);
	d2.getDemo();
	d1.getDemo();
}
