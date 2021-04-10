/*
 * friendfunction.cpp
 *
 *  Created on: 10 Apr 2021
 *      Author: mathewspeter
 */


#include <iostream>
using namespace std;
class student
{
	private: int pvt;
	protected: int pro;
	public: int pub;

	friend void friendf(student s);
	student(int a, int b, int c)
	{
		pvt = a; pro = b; pub = c;
	}
};

class child1: protected student //pub becomes protected
{
	private: void display()
 {
	 cout<<"inside child class: "<<pro<<pub;//pvt not visible
 }
};

class childofchild: public child1
{
private: void display()
	{
		cout<<"inside childofchild class: "<<pro<<pub; //pvt not visible
	}
};

void friendf( student s);
void friendf( student s)
{
	cout<<s.pvt;
	cout<<s.pro;
	cout<<s.pub<<endl;
}
int main()
{
	student s(1,2,3);
	friendf(s);

	child1 c;
	c.display();

	childofchild cc;
	cc.display();

	cout<<s.pub;
	cout<<c.pub;

	return 0;
}
