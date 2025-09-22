/*
 * sort.cpp
 *
 *  Created on: 31-Jul-2024
 *      Author: root
 */

#include<iostream>
#include<string>
using namespace std;
class arrayOP {

public:
    void input(int a[],int n) {
        cout<<"Enter array elements = ";
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
    }
    void display(int a[],int n) {
        cout<<"Array elements = ";
        for(int i=0;i<n;i++) {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    void insertionSort(int a[], int n) {
        for (int i = 1; i < n; i++) {
            int tmp = a[i];
            int j = i-1;

            while (j >= 0 && a[j] > tmp) {
                a[j + 1] = a[j];
                j--;
            }
            a[j + 1] = tmp;
        }
    }
    void selectionsort(int a[],int n) {
        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                if(a[i] > a[j]) {
                    int tmp = a[j];
                    a[j] = a[i];
                    a[i] = tmp;
                }
            }
        }
    }
    void bubblesort(int a[],int n) {
        for(int i=0;i<n-1;i++) {
            for(int j=0;j<n-i-1;j++) {
                if(a[j]>a[j+1]) {
                    int tmp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = tmp;
                }
            }
        }
    }
};

int main() {
    arrayOP a1;
    int size;
    cout<<"Enter size = ";
    cin>>size;
    int arr[size];
    //taking input
    a1.input(arr,size);
    cout<<endl<<"Displaying array before sorting :-"<<endl;
    a1.display(arr,size);
    // performing insertion sort
    a1.insertionSort(arr,size);
    cout<<endl<<"Displaying array after insertion sorting :-"<<endl;
    a1.display(arr,size);
    // performing selection sort
    a1.selectionsort(arr,size);
    cout<<endl<<"Displaying array after selection sorting :-"<<endl;
    a1.display(arr,size);
    // performing bubble sort
    a1.bubblesort(arr,size);
    cout<<endl<<"Displaying array after bubble sorting :-"<<endl;
    a1.display(arr,size);
    return 0;
}



