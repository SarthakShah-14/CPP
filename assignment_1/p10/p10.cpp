/*
 * p10.cpp
 *
 *  Created on: 19-Jul-2024
 *      Author: root
 */
#include<iostream>
using namespace std;

	class reverse{
	int n,j,temp;
	public:
	void rev()
	{

	cout<<"Enter the number";
	cin>>n;
	j=n;
	int rem=0;
		while(n!=0)
		{
			temp=n%10;
			rem=(rem*10)+temp;
			n=n/10;

		}
		cout<<"The reverse of "<<j<<"is:"<<rem;
	}
}r1;

int main()
{
	r1.rev();
	return 0;
}
