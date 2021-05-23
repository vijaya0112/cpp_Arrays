#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,flag=0,id;
	cout<<"Enter n value:";
	cin>>n;
	int a[n];
	cout<<"Enter the values: ";
	for(int i=0;i<n;i++)
	{
	   cin>>a[i];
    }
	for(int i=0;i<n;i++)
	{
		int count=0;
		for(int j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
			   count+=1;
	        }
	    }
		if(flag<count)
		{
			flag=count;
			id=a[i];
		}
	}
	cout<<"The person's ID is: "<<id<<" and his count is "<<flag;
}

                    
