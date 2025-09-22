/*
 * p4.cpp
 *
 *  Created on: 16-Oct-2024
 *      Author: root
 */

#include<iostream>

using namespace std;

int n,n1;
class market {
	int cid;
	char cname[20];
public:
	void input()
	{
		cout<<"enter your i'd : ";
		cin>>cid;
		cout<<"enter your name :";
		cin>>cname;
	}
	void display()
	{
		cout<<"your i'd is : "<<cid<<endl;
		cout<<"your name is : "<<cname<<endl;
	}
};

class selete {
//	int n;
public:

	void input1()
	{
		cout<<"how many apple you buy :";
		cin>>n;
		cout<<"how many banana you buy : ";
		cin>>n1;
	}
};

class total : public market , public selete
{
	int money,money1;
public:

	void total_count()
	{
		money = n * 5;
		cout<<"your total bill of apple is : "<<money<<endl;
		money1 = n1 * 4;
		cout<<"your total bill of banana is : "<<money1<<endl;
	}
};

int main()
{
	market m;
	selete s;
	total t;
	m.input();
	s.input1();
	m.display();
	t.total_count();

	return 0;
}
