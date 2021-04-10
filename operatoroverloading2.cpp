/*
 * operatorOverloading2.cpp
 * overloading of ++
 *  Created on: 10 Apr 2021
 *      Author: mathewspeter
 */

#include<iostream>
using namespace std;

class class1
{
private: int n;
public:
    //constructor
	class1(int n_input)
    {n = n_input;}

    void operator ++ ()
    {n++;}

    class1 operator +(class1 const&obj){
    	class1 newc(0);
    	newc.n = n + obj.n;
    	return newc;
    }

    void print()
    { cout << n<<endl; }
};

int main()
{
    class1 c1(2);
    c1.print();
    ++c1; // An example call to "operator+"
    c1.print();

    class1 c2(5);
    class1 c3 = c1+c2;
    c3.print();
}


