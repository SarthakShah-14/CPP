/*
 * swapping.cpp
 *
 *  Created on: 31-Jul-2024
 *      Author: root
 */

#include<iostream>
using namespace std;
class swapp{
	int n;
public:
cout<<"Enter n";
cin>>n;

	int arr[n],temp;
	void swapping()
	{
		temp=arr[0];
		arr[0]=arr[n];
		arr[n]=temp;
		for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<endl;
		}
	}
};
int main()
{

	swapp s1;

		cout<<"Enter the array elements";
		for(int i=0;i<n;i++)
		{
		cin>>s1.arr[i];
		}
		s1.swapping();
		return 0;
}


