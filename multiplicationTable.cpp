/*
 * multiplicationTable.cpp
 *
 *  Created on: 10 Apr 2021
 *      Author: mathewspeter
 */


#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n>10)
	{
		cout<<"enter a positive number below 10";
	}
	else
	{
		int i;
		for(i=1;i<=n;++i)
			cout<<"\n"<<i<<" * "<< n <<" = "<< i*n;
	}
}
