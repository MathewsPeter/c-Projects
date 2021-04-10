/*
 * reversenumber.cpp
 * to reverse the digits in a number
 *
 *  Created on: 10 Apr 2021
 *      Author: mathewspeter
 */


#include <iostream>
using namespace std;
int main()
{
	int n,r=0;
	cin>>n;
	if(n<0)
	{	cout<<"enter a positive number";}
	else
	{
		while(n>0)
		{
			r =  r*10 + n%10;
			n/=10;
		}
	}
cout<<r;

}




