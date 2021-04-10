/*
 * friendfunction.cpp
 *
 *  Created on: 10 Apr 2021
 *      Author: mathewspeter
 */


#include <iostream>
using namespace std;
class A
{
	private: int pri;
	protected: int pro;
	public: int pub;
	public: void Adisplay(){cout<<"A:"<<pri<<pro<<pub<<endl;}
	public: A(int a, int b, int c){pri = a; pro = b; pub = c;}
};

class B: public A //pri of A is not visible, pro of A becomes protected of B, pub of A becomes public of B
{
	public: void Bdisplay(){cout<<"B:"<<pro<<pub<<endl;}
	public: B:(int b, int c):A(1,2,3){pro = b; pub = c;}
};

class C: protected B //pro of A becomes protected of B, pub of A becomes protected of B
{
	public: void Cdisplay(){cout<<"C:"<<pro<<pub<<endl;}
	public:C(int b, int c){pro = b; pub = c;}
};

int main()
{
	A a(1,2,3);
	a.Adisplay();

	B b(4,5);
	b.Bdisplay();

	C c(6,7);
	c.Cdisplay();


	return 0;
}
