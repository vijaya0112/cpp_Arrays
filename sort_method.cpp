#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[5]={2,6,4,3,1};
	cout<<"Elements before sorting"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	//sort function
	sort(a,a+5);
	//a points to the address of the 1st element
	cout<<"Elements after sorting"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
