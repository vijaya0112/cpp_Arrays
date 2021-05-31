#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter size:";
	cin>>n;
	int a[n];
	cout<<"Enter the array elements:";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	//logic for the bubble sort
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
			}
		}
	}
	cout<<"Elements after Bubble Sort:";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
