/*
 * vowel.cpp
 * check if input character is vowel or consonant
 *
 *  Created on: 10 Apr 2021
 *      Author: mathewspeter
 */

#include<iostream>
using namespace std;

int main()
{
	char a;
	cin>>a;
	if( a=='a' || a=='A' || a=='e' || a=='E' || a=='I' || a=='i' || a=='o' || a=='O' || a=='u' || a=='U' )
		cout<<"vowel";
	else
		cout<<"Consonant";
	return 0;
}





