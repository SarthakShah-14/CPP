/*
 * p9.cpp
 *
 *  Created on: 15-Jul-2024
 *      Author: root
 */
#include<iostream>
using namespace std;
class natural{
public:
	int sum=0;
	void no()
	{
		for(int i=1;i<=10;i++)
		{
			sum=sum+i;
		}
		cout<<"The sum of first 10 natural no is:"<<sum;
	}
}n1;
int main()
{
	n1.no();
	return 0;
}



