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


	return 0;
}
