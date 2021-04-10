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
	public: B(int a, int b, int c):A(a,b,c){pro = b; pub = c;}
};


int main()
{
	A a(1,2,3);
	a.Adisplay();

	B b(4,5,6);
	b.Bdisplay();

	return 0;
}
