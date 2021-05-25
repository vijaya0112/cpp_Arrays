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
	//logic to find the maximum element
	int maxi=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(maxi<arr[i])
		{
			maxi=arr[i];
		}
	}
	cout<<"Maximum element:"<<maxi;
}
