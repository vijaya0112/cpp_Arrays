#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	vector<int>ve={10,20,30,40};
	//we have insert() function in vector to insert an element in to the vector  
	ve.insert(ve.begin()+3,100);
	//for(vector<int>::iterator it = ve.begin();it!=ve.end();it++)
    for(auto it:ve)
    {
    	cout<<it<<" ";
	}
    return 0;
}
