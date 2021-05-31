#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int flag=1;
	int n;
	cout<<"Enter size:";
	cin>>n;
	int arr[n];
	cout<<"Enter array elements:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[i]);
			flag=0;
			break;
		}
		
	}
	if(flag==0)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";	
	}
	return 0;
	
}
