#include<iostream>
using namespace std;
class Point {
	private :
		int x_co;
		int y_co;
	public :
		Point(int x=0,int y=0): x_co(x),y_co(y){ };
		
		Point operator -(const Point& obj){
			return Point(x_co-obj.x_co , y_co-obj.y_co);
		};
		
		Point operator +(const Point& obj){
			return Point(x_co+obj.x_co , y_co+obj.y_co);
		};
		
		Point operator *(const Point& obj){
			return Point(x_co*obj.x_co , y_co*obj.y_co);
		};
		
		Point operator /(const Point& obj){
			return Point(x_co/obj.x_co , y_co/obj.y_co);
		};
		
		void show(){
			cout<<"New x is :"<<x_co<<endl;
			cout<<"New y is :"<<y_co<<endl<<endl;
		};
};
int main(){
	Point p1(10,8),p2(6,3);
	Point p3 = p1 - p2;
	Point p4 = p1 + p2;
	Point p5 = p1 * p2;
	Point p6 = p1 / p2;
	cout<<"Substraction"<<endl;
	p3.show();
	cout<<"Addition"<<endl;
	p4.show();
	cout<<"Multiplication"<<endl;
	p5.show();
	cout<<"division"<<endl;
	p6.show();
}
