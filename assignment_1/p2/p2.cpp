/*
 * p2.cpp
 *
 *  Created on: 13-Jul-2024
 *      Author: root
 */
#include<iostream>
using namespace std;
class temperature{
float temp;
public:
void tem()
{
	cout<<"Enter the value of temp in fahrenheit";
	cin>>temp;
	float celsius=((5*temp)/9)-32;
	cout<<"The temp value in celsius is:"<<celsius;
}
}t1;
int main()
{
	t1.tem();
	return 0;
}



