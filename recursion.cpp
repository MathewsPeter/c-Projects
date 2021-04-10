/*
 * recursion.cpp
 *
 *  Created on: 10 Apr 2021
 *      Author: mathewspeter
 */


#include <iostream>
using namespace std;

int sum(int);
int sum(int n)
{
	if(n>0)
		return n+sum(n-1);
	else
		return 0;
}

int main()
{
	int n = 6;
	cout<<sum(n);
}


