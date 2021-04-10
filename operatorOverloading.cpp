/*
 * operatorOverloading.cpp
 * + operator is used for 2 different operations, both are logically summation, but mathematically different
 *  Created on: 10 Apr 2021
 *      Author: mathewspeter
 */

#include<iostream>
using namespace std;

class Complex
{
private:
    int r,i;
public:
    //constructor
    Complex(int re = 0, int im =0)
    {r = re;   i = im;}

    Complex operator + (Complex const &obj)
    {
         Complex res;
         res.r = r + obj.r;
         res.i = i + obj.i;
         return res;
    }
    void print()
    { cout << r << " + i" << i; }
};

int main()
{
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2; // An example call to "operator+"
    c3.print();
    cout<<endl<<(3+8);
}


