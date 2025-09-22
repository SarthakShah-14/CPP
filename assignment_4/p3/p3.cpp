/*
 * p3.cpp
 *
 *  Created on: 16-Oct-2024
 *      Author: root
 */


#include<iostream>

using namespace std;

int y;
class employee {
	int eno,eid;
	char ename[20],depa[20],prof[20];
public:
	employee()
	{
		eid = 0;
		eno = 0;
	}

	void input()
	{
		cout<<"enter your name : ";
		cin>>ename;
		cout<<"enter your i'd : ";
		cin>>eid;
		cout<<"enter department name : ";
		cin>>depa;
		cout<<"enter your profession : ";
		cin>>prof;
	}

	void display()
	{
		cout<<"your name : "<<ename<<endl;
		cout<<"your i'd : "<<eid<<endl;
		cout<<"your department : "<<depa<<endl;
		cout<<"your profession : "<<prof<<endl;
	}
};

class payment {
//	int y;
public:

	void year()
	{
		cout<<"enter your working year :";
		cin>>y;
	}

	void dis_year()
	{
		cout<<"your working year is : "<<y<<endl;
	}
};

class total : public employee , public payment
{
public:
	void last()
	{
		if (y >= 5 && y <= 10)
		{
			cout<<"your salary is : 20000/-";
		}
		else if (y <= 3)
		{
			cout<<"your salary is : 5000/-";
		}
		else if (y >= 10)
		{
			cout<<"your salary is : 50000/-";
		}
		else
		{
		cout<<"your salary is : 10000/-";
		}
	}
};


int main()
{
	employee e;
	payment p;
	total t;
	e.input();
	p.year();
	e.display();
	p.dis_year();
	t.last();
	return 0;
}
