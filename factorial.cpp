/*
 * factorial.cpp
 *
 *  Created on: 10 Apr 2021
 *      Author: mathewspeter
 */


#include <iostream>
using namespace std;
int main()
{
	int a,f=1,i;
	cin>>a;
	if(a<0)
		cout<<"enter a positive integer";
	else
	{
		for(i=2;i<=a;++i)
			f*=i;
		cout<<f;

	}

}

