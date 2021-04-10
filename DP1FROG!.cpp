#include<bits/stdc++.h>

using namespace std;
vector <int> cost(1e5+1,-1);
int REC(int n,int *h,int N)
{
  if(cost[n]!=-1)
    return cost[n];
  else if(n==N-1)
  {
  	cost[n]=0;
    return cost[n];
  }
  int ans=INT_MAX;
  if(n+1<N)
  	ans=abs(h[n+1]-h[n])+REC(n+1,h,N);
  if(n+2<N)
  {
    ans=min(ans,abs(h[n+2]-h[n])+REC(n+2,h,N));
  }
  if(ans==INT_MAX)
  {
    ans=0;
  }
  cost[n]=ans;
  return cost[n];
}
int main()
{
  int N;
  cin>>N;
  int H[N];
  for(int i=0;i<N;i++)
  {
    cin>>H[i];
  }
  cout<<REC(0,H,N);
  return 0;
}
