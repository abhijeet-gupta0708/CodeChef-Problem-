#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long sum=0;
        vector<int>teams(n-1);
        for(int i=0;i<n-1;i++)
        {
        cin>>teams[i];
        sum+=teams[i];
 
        }
        cout<<-sum<<endl;
    }
}