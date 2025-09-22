/*
 * p1.cpp
 *
 *  Created on: 16-Oct-2024
 *      Author: root
 */
#include<iostream>
using namespace std;

class vehicle {
protected:
	char vname[20],oname[20],v1name[20],o1name[20];
public:

	void input()
	{
		cout<<"your name :";
		cin>>oname;
		cout<<"your vehicle name :";
		cin>>vname;
	}

	void display()
	{
		cout<<"Name : "<<oname<<endl;
		cout<<"Vehicle Name : "<<vname<<endl;
	}
};

class two_wheeler
{
protected :
	float dis,mile,dis1,mile1;
public:
	void tinput()
	{
		cout<<"Enter your distance :";
		cin>>dis;
		cout<<"Enter your mileage :";
		cin>>mile;
	}

	void tdisplay()
	{
		 cout<<"your Distance : "<<dis<<endl;
		 cout<<"your mileage : "<<mile<<endl;
	}
};



class total : public vehicle , public two_wheeler
	{
protected :
	float total_dis,n,sum=0;
public:
	void distance()
	{
		cout<<"total distance :"<<endl;
		cin>>total_dis;
	}

	void ddisplay()
	{
		cout<<"total distance :"<<total_dis<<endl;
	}

	void distance_display()
	{
		input();
		tinput();
		display();
		tdisplay();
	}
};


int main()
{
	total t;
	t.distance_display();

	return 0;
}
