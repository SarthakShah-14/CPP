/*
 * p12.cpp
 *
 *  Created on: 20-Jul-2024
 *      Author: root
 */
#include<iostream>
using namespace std;
class sum{
public:
	int arr[5],i,sum=0,avg;
	void summation()
	{
		for(i=0;i<5;i++)
		{
			sum=sum+arr[i];
		}

			avg=sum/5;

		cout<<"The sum of array elements is:"<<sum<<endl;
		cout<<"The avg of array elements is:"<<avg;
	}
};
int main()
{
	sum s1;

	cout<<"Enter the array elements";
	for(int i=0;i<5;i++)
	{
	cin>>s1.arr[i];
	}
	s1.summation();
	return 0;
}


