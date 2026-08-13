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
        int n,k;
        cin>>n>>k;
        vector<int>arr;
        for(int i=0;i<n;i++)
        {
            int num;
            cin>>num;
            arr.push_back(num);
        }
        bool ans=true;
        if(k==1)
        {
            for(int i=0;i<n-1;i++)
            {
                if(arr[i]>arr[i+1])
                {ans=false;
                    break;
                }
            }
            if(ans)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
            
        }
        else 
            cout<<"YES"<<endl;
           
    }
   
       
    
 
    return 0;
}