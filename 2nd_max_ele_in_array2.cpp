#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int arr[n];
	cout<<"Enter n value:";
	cin>>n;
	cout<"Enter array elements:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int val1=INT_MIN;
	int val2=INT_MIN;
	val1=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>val1)
		{
			val2=val1;
			val1=arr[i];
		}
		else
		{
			if(val2<arr[i])
			{
				val2=arr[i];
			}
		}
	}
	cout<<"2nd maximum element: "<<val2;
	
}
