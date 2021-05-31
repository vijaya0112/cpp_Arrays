#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>ve = {10,20,30,40};
	//we have erase() function to delete an element in vector
	int x,del;
	cout<<"Enter an element to delete:";
	cin>>x;
	//Before deleting an element in vector 1st we need to find the index of the element
	//For finding the index we wil use find() function
	auto it = find(ve.begin(),ve.end(),x);
	del=it-ve.begin();
	cout<<"The element "<<x<<" is in "<<del<<" position";
	cout<<"\n";
	ve.erase(ve.begin()+del);
	cout<<"Elements after delete operation: ";
	for(auto it:ve)
    {
    	cout<<it<<" ";
	}
    return 0;
}
