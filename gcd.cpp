/*
 * gcd.cpp
 * find greatest common divisor of 2 numbers
 *  Created on: 10 Apr 2021
 *      Author: mathewspeter
 */


#include <iostream>
using namespace std;
int main()
{
	int a,b,i;
	cin >> a >> b;
	if(a<0 || b<0)
	{cout<<"enter positive numbers";
	}
	else
	{
		int s = a<b?a:b;;
		for(i= s;i>=2;--i)
		{	if((a%i == 0) && (b%i == 0))
			{cout<<i;
			return 0;}
		}
	}
	cout<<"There is no common divisor";

}




