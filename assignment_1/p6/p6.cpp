/*
 * p6.cpp
 *
 *  Created on: 13-Jul-2024
 *      Author: root
 */
#include<iostream>
using namespace std;
class swap
{
	int a,b;
	public:
	void swapping()
	{
	int c;
	cout<<"enter a";
	cin>>a;
	cout<<"enter b";
	cin>>b;
	c=a;
	a=b;
	b=c;

	cout<<"The value of A is:"<<a<<endl;
	cout<<"The value of B is:"<<b<<endl;
	}
}s1;
int main()
{
	//swap s1;
	s1.swapping();
	return 0;
}




