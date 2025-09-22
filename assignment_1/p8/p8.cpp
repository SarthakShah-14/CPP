/*
 * p8.cpp
 *
 *  Created on: 15-Jul-2024
 *      Author: root
 */
#include<iostream>
using namespace std;
#include<cmath>
class primesum{
public:
	bool isprime(int num)
	{
		if(num<=1)
		{
			return false;
		}
		if(num<=3)
		{
			return true;
		}
		if(num%2==0||num%3==0)
		{
			return false;
		}
		for(int i=5;i<=sqrt(num);i+=6)
		{
			if(num%i==0||num%(i+2)==0)
			{
				return false;
			}
		}
		return true;
	}
	int sumofprimes(int n)
	{
		int count=0;
		int sum=0;
		int num=2;
		while(count<n)
		{
			if(isprime(num))
			{
				sum=sum+num;
				count++;
			}
			num++;
		}
		return sum;
	}
}p1;
int main()
{
	int n;
	cout<<"Enter the prime nos to sum:";
	cin>>n;
	int result =p1.sumofprimes(n);
	cout<<"The sum of first "<<n<<" Prime no is:"<<result<<endl;
	return 0;
}



