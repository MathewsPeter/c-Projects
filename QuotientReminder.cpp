/*
 * QuotientReminder.cpp
 * Find quotient and remineder of 2 numbers
 *
 *  Created on: 10 Apr 2021
 *      Author: mathewspeter
 */

#include <iostream>

int main()
{
	int a,b;
	std::cout<<"Enter 2 numbers";
	std::cin>>a>>b;

	std::cout<<"\nQ = "<<(int)(a/b);
	std::cout<<"\nR = "<<a%b;
	return 0;
}


