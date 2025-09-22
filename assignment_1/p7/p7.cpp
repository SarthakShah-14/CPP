/*
 * p7.cpp
 *
 *  Created on: 13-Jul-2024
 *      Author: root
 */
#include<iostream>
using namespace std;

class factorial{
	int n;
public:
	void fact()
	{
		cout<<"Enter n";
		cin>>n;
		int fact=1,i;
		for(i=n;i>1;i--)
		{
			fact=fact*i;
		}
		cout<<"The Factorial of "<<n<<" is:"<<fact;
	}
}f1;
int main()
{
	f1.fact();
	return 0;
}


