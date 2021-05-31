#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[5]={2,4,3,5,6};
	//sort function
	sort(a,a+5);
	cout<<"Elements in sorted order using arrays"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	vector<int>ve={2,4,3,5,6};
	sort(ve.begin(),ve.end());
	cout<<"Elements in sorted arrays using vectors"<<endl;
	for(auto it:ve)
	{
		cout<<it<<" ";
	}
	return 0;
}
