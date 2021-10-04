#include <iostream>
#include <vector>

using namespace std;

void push(vector<int>&a){
    a.push_back(10);
    a.push_back(20);
}

void top(vector<int>&a){
    int k;
    k = a[a.size()-1];
    cout<<k<<endl;
}

bool isEmpty(vector<int>&a){
    return a.size()==0;
}

void pop(vector<int>&a)
{
    if(!isEmpty(a))
        a.pop_back();
}


int main()
{
    vector<int>a;
    
    push(a);
    top(a);
    pop(a);
    top(a);
    
    
    return 0;
}
}

//kadanes algo
#include <iostream>
using namespace std;

int LadderDP(int n,int *dp,int k)
{
    if(n==0)
      return 1;
    if(n<0)
      return 0;
    if(dp[n]!=0)
       return dp[n];
   
    for(int i=1;i<=k;i++){
    dp[n]=dp[n]+LadderDP(n-i,dp,k);
    }
    return dp[n];
    //return LadderDP(n-1,dp) + LadderDP(n-2,dp) + LadderDP(n-3,dp);
}
int main()
{
int n,k; 
cin>>n>>k;
int *dp =new int[n+1];
for(int i=0;i<n;i++)
       dp[i]=0;
cout<<LadderDP(n,dp,k);
return 0;
}
