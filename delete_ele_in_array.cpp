#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,del,cap,pos;
	cout<<"Enter the capacity:";
	cin>>cap;
	cout<<"Enter n value:";
	cin>>n;
	int arr[n];
	cout<<"Enter the array elements:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Elements in the array are:";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	cout<<"Enter the element to delete:";
	cin>>del;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==del)
		{
			pos=i;
		}
	}
	if(pos!=0)
	{
		for(int i=pos;i<=n;i++)
		{
			arr[i]=arr[i+1];
		}
		n--;
	}
	else
	{
		cout<<"Element not found in the array.";
	}
	cout<<"\n";
	cout<<"Array after deletion:";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
