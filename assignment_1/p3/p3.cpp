/*
 * p3.cpp
 *
 *  Created on: 13-Jul-2024
 *      Author: root
 */
#include<iostream>
using namespace std;
class calc
{
int n1,n2;
public:
void calculation()
{
	cout<<"Enter the value of n1";
	cin>>n1;
	cout<<"Enter the value of n2";
	cin>>n2;
	float quotient,remainder;
	if(n2!=0)
	{
	quotient=n1/n2;
	remainder=n1%n2;

	cout<<"The Quotient is :"<<quotient<<endl;
	cout<<"The Remainder is:"<<remainder;
	}
	else
	{
		cout<<"n2 is negative, divisible not possible";
	}
}
}c1;
int main()
{
	c1.calculation();
	return 0;
}



