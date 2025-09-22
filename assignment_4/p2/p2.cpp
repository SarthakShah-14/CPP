/*
 * p2.cpp
 *
 *  Created on: 16-Oct-2024
 *      Author: root
 */

#include<iostream>

using namespace std;

class patient {
public:
	int pno,page,day;
	char pname[20];

	void input()
	{
		cout<<"enter patient number :";
		cin>>pno;
		cout<<"enter patient name :";
		cin>>pname;
		cout<<"enter patient age :";
		cin>>page;
//		cout<<"enter day you day in live in hospital :";
//		cin>>day;
	}

	void output()
	{
		cout<<"enter patient number :"<<pno<<endl;
		cout<<"enter patient name :"<<pname<<endl;
		cout<<"enter patient age :"<<page<<endl;
//		cout<<"enter day you day in live in hospital :"<<day<<endl;
	}
//private:
};

class IPD {
public:
	int ward_no,bed_no,charge_per_day;

	void input1()
	{
		cout<<"enter ward number :";
		cin>>ward_no;
		cout<<"enter bed number :";
		cin>>bed_no;
//		cout<<"enter charge per day :";
//		cin>>charge_per_day;
	}

	void display1()
	{
		cout<<"enter ward number :"<<ward_no<<endl;
		cout<<"enter bed number :"<<bed_no<<endl;
//		cout<<"enter charge per day :"<<charge_per_day<<endl;
	}
};

class total : public patient,public IPD
{
public:
	int total_amm;

	void input3()
	{
		cout<<"enter day you day in live in hospital :";
		cin>>day;
	}
	void display3()
	{
		cout<<"enter day you day in live in hospital :"<<day<<endl;
	}
	void input4()
	{
		cout<<"enter charge per day :";
		cin>>charge_per_day;
	}
	void display4()
	{
		cout<<"enter charge per day :"<<charge_per_day<<endl;
	}
	void put_data()
	{
		input();
		input1();
		input3();
		input4();
		output();
		display1();
		display3();
		display4();

		total_amm = day * charge_per_day;
		cout<<"total bill : "<<total_amm<<endl;
	}
};

int main()
{
	total t;
	t.put_data();
	return 0;
}
