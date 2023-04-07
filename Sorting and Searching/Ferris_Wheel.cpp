/*
* @Author: Zakaria 
* @Date:   2023-04-07 22:47:33
* @Last Modified time: 2023-04-07 22:52:34
*/
#include <bits/stdc++.h>
#define  pb          push_back
#define  f           first
#define  s           second
#define  pi          acos(-1.0)
#define  LCM(a,b)    a*b/__gcd(a,b)
#define  GCD(a,b)    __gcd(a,b)
#define  sof         sizeof
#define  endl        '\n'
#define  eps         1e-6
typedef long long ll;
using namespace std;

const int mod = 1e9+7;
const int N = 2e5+6;

void Solve()
{
        
      int n, k;
      cin>>n>>k;

      ll a[n];

      for(int i=0 ; i<n ; i++)
      	cin>>a[i];

      sort(a, a+n);


      ll sum = 0;

      int ans = 0;

      int i=0, j=n-1;

      while(i<=j)
      {
      	  if(a[i]+a[j]>k)
      	  {
      	  	  if(a[j]>a[i])
      	  	  	j--;
      	  	  else
      	  	  	i++;
      	  	  ans++;
      	  }
      	  else
      	  {
      	  	ans++;
      	  	i++;
      	  	j--;
      	  }
      }

      cout<<ans<<endl;


      
}
 
int main()
{
         
        ios::sync_with_stdio(false);
        cin.tie(0);
        
        int tt=1;
        
    //    cin>>tt;
        
        while(tt--)
        {
           
            Solve();
        }
 
        return 0;
        
} 