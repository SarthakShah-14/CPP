/*
 * inline.cpp
 *
 *  Created on: 12-Jul-2024
 *      Author: root
 */

#include<iostream>
using namespace std;
 inline int square(int x)
{
	return x*x;
}
int main()
{
int n,n1=15,n2=25;
cout<<"Enter the no:"<<endl;
cin>>n;

cout<<"The square is:"<<square(n)<<endl;
cout<<"The square of n1 is:"<<square(n1)<<endl;
cout<<"The square of n2 is:"<<square(n2)<<endl;


	return 0;
}

