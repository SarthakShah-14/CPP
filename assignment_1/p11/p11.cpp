/*
 * p11.cpp
 *
 *  Created on: 19-Jul-2024
 *      Author: root
 */
#include<iostream>
using namespace std;
class vowel{
	string s;
public:
	int cnt=0;
	void v()
	{
		cout<<"Enter the string:";
		cin>>s;
	for(int i=0;i<s[i];i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		{
			cnt++;
		}
	}
	cout<<"the no of vowels is:"<<cnt;

	}
}str;
int main()
{
	str.v();
	return 0;
}



