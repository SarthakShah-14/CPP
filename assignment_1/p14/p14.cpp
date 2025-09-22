/*
 * p14.cpp
 *
 *  Created on: 20-Jul-2024
 *      Author: root
 */
#include<iostream>
using namespace std;
class swapp{
public:

	int arr[5],temp;
	void swapping()
	{
		cout<<"The reversed element is:\n";
		for(int i=4;i>=0;i--)
		{
			cout<<arr[i]<<endl;
		}
	}
};
int main()
{

	swapp s1;

		cout<<"Enter the array elements";
		for(int i=0;i<5;i++)
		{
		cin>>s1.arr[i];
		}
		s1.swapping();
		return 0;
}



