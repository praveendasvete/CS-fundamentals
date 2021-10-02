class Solution
{
    public:
    
    int findKnapSack(int W, int wt[], int val[], int n,vector<vector<int>>&dp){
        if(n==0 || W==0){
          return 0;
      }
      
      if(dp[n-1][W]!=-1){
          return dp[n-1][W];
      }
      if (wt[n - 1] > W)
        return findKnapSack(W, wt, val, n - 1,dp);
      
      int steal = val[n-1] + findKnapSack(W-wt[n-1],wt,val,n-1,dp);
      int notsteal = findKnapSack(W,wt,val,n-1,dp);
      
      return dp[n-1][W] = max(steal,notsteal);
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
         vector<vector<int>> dp (500, vector<int> (500,-1));
         return findKnapSack(W, wt, val, n, dp);
    }
};
