/*
 * leapyear.cpp
 *
 *  Created on: 10 Apr 2021
 *      Author: mathewspeter
 */


#include <iostream>
using namespace std;

int main()
{
	int y;
	cin>>y;
	if(y<=0)
		cout << "enter a positive number as year";
	else
	{
		if( y%100 == 0)
			{if (y%400 == 0)
				{cout<<"Leap";}
			else
				{cout<<"not leap";}

			}
		else if (y%4 ==0)
			{cout<<"leap";}
		else
			{cout<<"not leap";}
	}

}
