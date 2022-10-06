#include<bits/stdc++.h>
using namespace std;
int largeElement(int a[], int m)
{
    int k = INT_MIN;
    for(int i=0;i<m;i++)
    {
        if(a[i]>k)
        {
            k = a[i];
        }
    }
    return k;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<largeElement(a,n);
    
     cout<<("nidhish);
    
     cout<<("I love Deloitte);
            
      
    
}
