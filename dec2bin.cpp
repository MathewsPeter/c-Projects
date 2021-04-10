/*
 * dec2bin.cpp
 * convert a number in base10, to a number in base2. assume no numbers after decimal point
 *  Created on: 10 Apr 2021
 *      Author: mathewspeter
 */


#include <iostream>
using namespace std;

int main()
{
	int d = 10, b = 0, i =1;
	int d1 = d;
	while(d!=0)
	{
		b+= (d%2)*i;
		i*=10;
		d/=2;
	}
cout<<d1<<" in binary is "<<b;
	return 0;
}


