/*
 * templates.cpp
 *
 *  Created on: 10 Apr 2021
 *      Author: mathewspeter
 */

#include <iostream>
using namespace std;

template<typename T>
T maxi(T a, T b)
{
	if(a>b) return a;
	else return b;
}

int main()
{
	cout<< maxi<int>(1,2)<<endl;
	cout<< maxi<char>('a','b')<<endl;
	cout<< maxi<float>(1.2,2.2)<<endl;
	return 0;
}
