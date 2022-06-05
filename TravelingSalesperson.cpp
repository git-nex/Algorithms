#include<bits/stdc++.h>
using namespace std;

int dp[21][(1<<20)];
int c[21][21];
int solve(int n,int index , int mask)
{
  if(mask==0)
  {
    return c[index][0];
  }

  if(dp[index][mask]!=-1)
  {
    return dp[index][mask];
  }

  int ans=INT_MAX;

  for(int j=0;j<n;j++)
  {
    if(mask&(1<<j))
    {
      ans=min(ans,c[index][j]+solve(n,j,mask^(1<<j)));
    }
  }

  return dp[index][mask]=ans;

}



int main()
{
  int n,x;
  cin>>n;
  
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++){
      cin>>x;
      c[i][j]=x;
    }
      
  }
  memset(dp,-1,sizeof(dp));
  cout<<solve(n,0,(1<<n)-1);


}