/*
 * largestAmong3numbers.cpp
 * Find the largest among 3 input numbers
 *
 *  Created on: 10 Apr 2021
 *      Author: mathewspeter
 */

#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int temp = (a>b)?a:b;
	int temp2 = (temp>c)? temp: c;
	cout<<"largest is "<<temp2;
	return 0;
}



