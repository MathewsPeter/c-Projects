/*
 * structure.cpp
 *
 *  Created on: 10 Apr 2021
 *      Author: mathewspeter
 */

#include <iostream>
using namespace std;

struct student
{
	int roll;
	int mark;
}s1;

struct student s2;
typedef struct student strstd;

int main()
{
	s1.mark = 1;
	s1.roll=2;
	s2.mark = 8;
	s2.roll = 9;
	cout<<s1.mark << s1.roll;
	cout<<s2.mark<<s2.roll<<endl;

	strstd s3;
	s3.mark = 5;//other member is having junk value and not initialised
	cout<<s3.mark<<s3.roll<<endl;

	return 0;
}
