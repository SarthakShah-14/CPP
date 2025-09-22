/*
 * array.cpp
 *
 *  Created on: 31-Jul-2024
 *      Author: root
 */
#include<iostream>
#include<stdlib.h>
using namespace std;
#define n 5
int arr[n];
class searching
{
  int i,temp,j;
  public:
  void insert()
  {
printf("Enter your array elements:\n");
  for(i=0;i<n;i++)
  {
	  cout<<"arr["<<i+1<<"]";
    cin>>arr[i];
  }
  }
  void display()
  {
    for(i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  }
  }s;
  int main()
  {
	    s.insert();
	    s.display();
  }
