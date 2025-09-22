/*
 * p1.cpp
 *
 *  Created on: 13-Jul-2024
 *      Author: root
 */

#include<iostream>
using namespace std;
 class rectangle{
 float l,b;
 public:
 void rect()
 {
 cout<<"Enter the length and breadth of rectangle";
 cin>>l>>b;
 float area,perimeter;
 if(l>0&&b>0)
 {
 area=l*b;
 perimeter=2*(l+b);
 cout<<"The Area of rectangle is:"<<area<<endl;
 cout<<"The Perimeter of rectangle is:"<<perimeter<<endl;
 }
 else
 {
	 cout<<"The value entered is negative";
 }
 }
};
 int main()
 {
	 rectangle r1;
	 r1.rect();
	 return 0;
 }




