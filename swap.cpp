/*
 * swap.cpp
 * interchange 2 numbers
 *
 *  Created on: 10 Apr 2021
 *      Author: mathewspeter
 */

#include <iostream>
using namespace std;

int main()
{
	int a=2,b=9;
	cout<<a<<","<<b<<"\n";
	a = a+b;
	b = a-b;
	a = a-b;
	cout<<a<<","<<b<<"\n";

	a=2;b=9;
	cout<<a<<","<<b<<"\n";
	a = a^b;
	b = a^b;
	a = a^b;
	cout<<a<<","<<b<<"\n";
}



