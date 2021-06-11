#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum1,sum2;
	cout<<"Enter the size:";
	cin>>n;
	cout<<"Enter the sum:";
	cin>>sum1;
	int arr[n];
	cout<<"Enter the array elements:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			sum2=0;
			for(int k=i;k<=j;k++)
			{
				cout<<arr[k]<<" - ";
				sum2 += arr[k];
			}
			if(sum1==sum2)
			{
				cout<<"yes";
			}
			else
			{
				cout<<"no";
			}
			cout<<endl;
		}
	}
}
