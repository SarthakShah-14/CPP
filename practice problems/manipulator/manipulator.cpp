/*
 * manipulator.cpp
 *
 *  Created on: 12-Jul-2024
 *      Author: root
 */
#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
	//setw and setfill
 cout<<setfill('*')<<setw(10)<<123<<endl;
 cout<<setfill('#')<<setw(10)<<4567<<endl;
 cout<<setfill(' ');

//setprecision used
 double pi=3.1415296547832190;
 cout<<"The value of pi is:"<<pi<<endl;
 cout<<"setprecision of 5 is:"<<setprecision(5)<<pi<<"\n";
 cout<<"setprecision of 10 is:"<<setprecision(10)<<pi<<"\n";

 //setiosflags used


	return 0;
}



