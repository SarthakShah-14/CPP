/*
 * p1.cpp
 *
 *  Created on: 21-Aug-2024
 *      Author: root
 */
#include<iostream>
using namespace std;
int len=0;
class stringg{
	string str,str1,str2;
public:
	void input()
	{
	cout<<"Enter the string";
	cin>>str;
//length of string
	int i=0;
	while(str[i]!='\0')
	{
		len++;
		i++;
	}
	cout<<"The Length of string is:"<<len;
	}

	void uppercase()
	{
		cout<<"\nThe Elements in upper case is:";
		int i;
		for(i=0;str[i]!='\0';i++)
		{
		if(str[i]>='a'&&str[i]<='z')
		{
			str[i]=str[i]-32;
			cout<<str[i];
		}
		else
		{
			cout<<str[i];
		}
		}
	}

	void lowercase()
	{
		cout<<"\nThe Elements in lower case is:";
		int i;
		for(i=0;str[i]!='\0';i++)
		{
		if(str[i]>='A'&& str[i]<='Z')
		{
			str[i]=str[i]+32;
			cout<<str[i];
		}
		else
		{
			cout<<str[i];
		}
		}
	}

void concatenation()
{
	char concate[50];
	cout<<"\nEnter the text you want to concatenate in string:";
	cin>>concate;
	str=str+concate;
	cout<<"\nThe concatenated string is:"<<str;
}
void comparison()
{
	char compare[50];
	cout<<"\nEnter the character you want to compare";
	cin>>compare;
	if(str==compare)
	{
		cout<<"Both the string are equal";
	}
	else
	{
		cout<<"Both strings are not equal";
	}
}
void copy()
{
	 str1=str;
	 cout<<"\nThe copied string is:"<<str1;
}
void reverse()
{
	cout<<"\nThe Reversed string is:";
	for(int i=len-1;i>=0;i--)
	{
	cout<<str[i];
	}
}
void palindrome()
{
	int c=0;
for(int i=0;i<len;i++)
{
	if(str[i]==str[len-1-i])
	{
		c++;
	}
}

	if(c==len)
	{
		cout<<"\nString is palindrome";
	}
	else
	{
		cout<<"\nNot A Palindrome";
	}

}

}strr;
int main()
{
	 int c;
		   do{
		 cout<<"Enter\n1 for Length of string\n2 for Upper case\n3 for Lower case\n4 for Comparison\n5 for Copy\n6 for Concatenation\n7 for Reverse\n8 for Palindrome\n9 for exit";
		 cout<<"\nEnter the choice:\n";
		   cin>>c;
		   switch(c)
		   {
		    case 1:
		    	strr.input();
		    break;
		    case 2:
		    	strr.uppercase();
		    break;
		    case 3 :
		    	strr.lowercase();
		    break;
		    case 4:
		    	strr.comparison();
		    break;
		    case 5:
		    	strr.copy();
		    break;
		    case 6:
		    	strr.concatenation();
		    	  break;
		    case 7:
		    	strr.reverse();
		    	break;
		    case 8:
		    	strr.palindrome();
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


