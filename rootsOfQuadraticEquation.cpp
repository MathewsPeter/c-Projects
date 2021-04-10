/*
 * rootsOfQuadraticEquation.cpp
 * Input a quadratic equation ax2 + bx + c = 0
 *
 *  Created on: 10 Apr 2021
 *      Author: mathewspeter
 */


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	int discriminant = b*b - 4*a*c;
	if(discriminant == 0)
	{
		cout<<"Roots are identical: "<<-b/2/a;

	}
	else if(discriminant > 0)
	{
		cout<<"Roots are real and distinct: ";
		cout << (-1*b + sqrt(b*b - 4*a*c))/2/a;
		cout << (-1*b - sqrt(b*b - 4*a*c))/2/a;
	}
	else
	{
		cout<<"Roots are imaginary and distinct: ";
		cout << -1*b/2/a <<" + i " << sqrt(-b*b + 4*a*c)/2/a;
		cout << -1*b/2/a <<" - i " << sqrt(-b*b + 4*a*c)/2/a;
	}

	return 0;
}

