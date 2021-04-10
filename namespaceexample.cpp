/*
 * namespaceexample.cpp
 *
 *  Created on: 10 Apr 2021
 *      Author: mathewspeter
 */

#include <iostream>
using namespace std;

namespace ns1
{
	int a;

	void disp()
	{
		cout<<"\n inside ns1";
	}

	class c;
}
class ns1::c
{
	public:
	void disp()
	{
		cout<<"\n inside class which is inside ns1";
	}
};

int main()
{
	ns1::disp();
	ns1::c obj;
	obj.disp();
}
