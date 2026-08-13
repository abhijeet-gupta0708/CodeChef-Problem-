#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
 
int main() {
    int t;
    cin >>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        vector<int>arr;
        for(int i=0;i<n;i++)
        {
            int num;
            cin>>num;
            arr.push_back(num);
        }
        int dis=abs(arr[0]-0);
        for(int i=1;i<n;i++)
        {
            dis=max(dis,abs(arr[i]-arr[i-1]));
            
        }
        dis=max(dis,(2*abs(arr[n-1]-x)));
        
        cout<<dis<<endl;
        
        
           
    }
   
       
    
 
    return 0;
}