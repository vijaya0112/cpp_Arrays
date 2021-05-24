#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n value: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    	cout<<"Enter "<<(i+1)<<" value:";
        cin>>arr[i];
    }
    int *mx=max_element(arr,arr+n);
    int frq[*mx+1]={0};
    for(int i=0;i<n;i++)
    {
        frq[arr[i]]++;
    }
    int id,maxi=0;
    for(int i=0;i<=*mx;i++)
    {
        if(maxi<frq[i])
        {
            maxi=frq[i];
            id=i;
        }
    }
    cout<<"Customer id who visited more times is "<<id;
}
