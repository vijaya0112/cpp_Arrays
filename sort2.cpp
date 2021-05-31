#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,flag=0;
	cout<<"Enter size:";
	cin>>n;
	int arr[n];
	cout<<"Enter elements:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]>arr[i+1])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"sorted";
	}
	else
	{
		cout<<"not sorted";
	}
	return 0;
	
}
