/*
 * p15.cpp
 *
 *  Created on: 27-Jul-2024
 *      Author: root
 */

#include<iostream>
#define size 5
using namespace std;

class Array{
private:
	int a[size];
public:
	void setArray(){
		int A[size];
		cout<<"Enter elements of array: ";
		for(int i=0;i<size;i++){
			cin>>A[i];
		}
		for(int i=0;i<size;i++){
			a[i]=A[i];
		}
		return;
	}
	void getArray(){
		cout<<"The elements of array: ";
		for(int i=0;i<size;i++){
			cout<<a[i]<<"\t";
		}
		cout<<endl;
		return;
	}
	void largest(){
		int l=a[0];
		for(int i=0;i<size;i++){
			if(l<a[i]){
				l=a[i];
			}
		}
		cout<<"The largest element  is:"<<l<<endl;
		return;
	}
	void smallest(){
			int s=a[0];
			for(int i=0;i<size;i++){
				if(s>a[i]){
					s=a[i];
				}
			}
			cout<<"The smallest element is:"<<s<<endl;
			return;
		}
};
int main(){
	Array obj;
	obj.setArray();
	obj.getArray();
	obj.largest();
	obj.smallest();
	return 0;
}


