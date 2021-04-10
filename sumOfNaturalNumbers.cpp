/*
 * sumOfNaturalNumbers.cpp
 * sum of N natural numbers
 *  Created on: 10 Apr 2021
 *      Author: mathewspeter
 */


#include <iostream>
using namespace std;

int main()
{
	int a;
	cin>>a;
	int i,s=0;
	for(i=1;i<=a;++i)
		s+=i;
	//s = n*(n=-1);
	cout<<"sum = "<<s;
	return 0;
}
