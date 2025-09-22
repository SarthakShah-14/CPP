/*
 * p4.cpp
 *
 *  Created on: 13-Jul-2024
 *      Author: root
 */
#include<iostream>
using namespace std;
class number
{
	int n;
public:
	void no()
	{
		cout<<"Enter the value of no n";
		cin>>n;
		if(n==0)
		{
			cout<<"The number is zero";
		}
		else if(n>0)
		{
			cout<<"The number is positive";
		}
		else
		{
			cout<<"The number is negative";
		}
	}
}n1;
int main()
{
	n1.no();
	return 0;
}



