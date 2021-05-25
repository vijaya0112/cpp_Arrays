#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter n value:";
	cin>>n;
	int arr[n];
	cout<<"Enter array values:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	//logic to find the minimum element
	int min=INT_MAX;
	for(int i=0;i<n;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	cout<<"Minimum element:"<<min;
}
