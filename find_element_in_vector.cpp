#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	vector<int>ve;
	ve.push_back(1);
	ve.push_back(2);
	ve.push_back(3);
	ve.push_back(4);
	cout<<"Elements in vector ve are:";
	for(int i=0;i<ve.size();i++)
	{
		cout<<ve[i]<<" ";
	}
	cout<<"\n";
    /*vector<int>::iterator it = ve.begin();
	it++;
	cout<<*(it)<<"\n";
	vector<int>::iterator it1 = ve.end();
	it1--;
	cout<<*(it1);
	for(auto it =  ve.begin();it!=ve.end();it++)
	{
	    cout<<*(it)<<" "<<"\n";
	}*/
	int x=5;
	auto it = find(ve.begin(),ve.end(),x);
	if(it!=ve.end())
	{
	    cout<<it-ve.begin();
	}
	else
	{
	    cout<<-1;
	}
	return 0;
	
}
