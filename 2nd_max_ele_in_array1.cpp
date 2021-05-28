#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,res;
	cout<<"Enter n value:";
	cin>>n;
	int arr[n];
	cout<<"Enter elements in array:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int maxi=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(maxi<arr[i])
		{
			maxi=arr[i];
		}
		res=-1;
	}
	cout<<"1st maximum element is :"<<maxi<<"\n";
	
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=maxi)
		{
			if(res==-1)
			{
				res=i;
			}
			else
			{
				if(arr[i]>arr[res])
				{
					res=i;
				}
			}
		}
	}
	cout<<"2nd maximum element is:"<<arr[res];
	if(res==-1)
	{
		cout<<"Element not found";
	}
	
	return 0;
}
