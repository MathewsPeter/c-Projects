/*
 * fibonacci.cpp
 *
 *  Created on: 10 Apr 2021
 *      Author: mathewspeter
 */


#include <iostream>
using namespace std;
int main()
{
 int i,a=1,b=1,c;
 for(i=0;i<10;++i)
 {
	 cout<<a<<"\n";
	 c = a+b;
	 a = b;
	 b = c;
 }
 return 0;
}
