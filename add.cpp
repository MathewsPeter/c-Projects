/*
 * add.cpp
 *
 *  Created on: 10 Apr 2021
 *      Author: mathewspeter
 */


#include <iostream>
using namespace std;

int add(int,int);

int main()
{
	int a,b,sum;
	cout<<"enter 2 numbers:";
	cin >> a >> b;
	sum = add(a,b);
	cout << "sum is " << sum;
	return 0;
}

int add(int a, int b)
{
	return (a+b);
}
