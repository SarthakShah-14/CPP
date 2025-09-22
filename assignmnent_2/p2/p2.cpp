/*
 * p2.cpp
 *
 *  Created on: 21-Aug-2024
 *      Author: root
 */
#include<iostream>
#include<stdlib.h>
using namespace std;
#define n 5
int sum=0,i;
int arr[n];
class p
{
  int i,temp,j;
  public:
  void insert()
  {
cout<<"Enter your array elements:\n";
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
  void searching()
  {
	  int element,loc;
	  cout<<"Enter the element you want to search";
	  cin>>element;
	  int c=0;
	  for(i=0;i<n;i++)
	  {
	  if(element==arr[i])
	  {	
		  loc=i;
		  c++;
		  break;
		  //cout<<"Element found at the location"<<i;

	  }
	  }

	  if(c!=0)
	 	    {
	 	    	 cout<<"Element found at the location:"<<loc;
	 	    }
	 	    else
	 	    {
	 	    	cout<<"Element not found";
	 	    }



  }

    void bubble_sort()
    {
    	  for(int i=0;i<n-1;i++)
    	  {
    	              for(int j=0;j<n-i-1;j++)
    	              {
    	                  if(arr[j]>arr[j+1])
    	                   {
    	                      int temp = arr[j];
    	                      arr[j] = arr[j+1];
    	                      arr[j+1] = temp;
    	                  }
    	              }
    	   }
    }
    void summation()
	{

    	for(i=0;i<n;i++)
    	{
    		sum=sum+arr[i];
    	}
    	cout<<"The sum of array is:"<<sum;
    }
    void average()
    {
    	float avg=(float)sum/n;
    	cout<<"The average is:"<<avg;
    }
    void largest()
    {
    		int l=arr[0];
    		for(int i=0;i<n;i++)
    		{
    			if(l<arr[i])
    			{
    				l=arr[i];
    			}
    		}
    		cout<<"The maximum element is:"<<l<<endl;
    		return;
    	}
    	void smallest()
    	{
    			int s=arr[0];
    			for(int i=0;i<n;i++){
    				if(s>arr[i]){
    					s=arr[i];
    				}
    			}
    			cout<<"The minimum element is:"<<s<<endl;
    			return;
    		}
    	void swapping()
    		{
    			temp=arr[0];
    			arr[0]=arr[n-1];
    			arr[n-1]=temp;
    			display();
    		}

  }s;
  int main()
  {
	   int c;
	   do{
	 cout<<"Enter\n1 for Insert\n2 for Search\n3 for Bubble Sort\n4 for Sum of array elements\n5 for Average of array elements\n6 for Find Maximum value from array elements\n7 for Find Minimum value from array elements\n8 for Swap first and last element of an array\n9 for exit";
	 cout<<"\nEnter the choice:\n";
	   cin>>c;
	   switch(c)
	   {
	    case 1:
	    s.insert();
	    break;
	    case 2:
	    s.searching();
	    break;
	    case 3 :
	    s.bubble_sort();
	    s.display();
	    break;
	    case 4:
	    	 s.summation();
	    break;
	    case 5:
	    	 s.average();
	    break;
	    case 6:
	    	  s.largest();
	    	  break;
	    case 7:
	    	s.smallest();
	    	break;
	    case 8:
	    	  s.swapping();
	    	  break;
	    case 9:
	    cout<<" Code Exiting...";
	    return 0;
	    default:
	    cout<<"Please enter proper choice";
	   }
	   cout<<"\nDo You Want to continue enter 1 for yes and 0 for no:";
	   cin>>c;
	   }while(c==1);
	   return 0;
  }




