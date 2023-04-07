/*
* @Author: Zakaria 
* @Date:   2023-04-08 01:10:26
* @Last Modified time: 2023-04-08 01:18:29
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

int n;
int a[N], pos[N];

void Solve()
{
        
        cin>>n;

        for(int i=0 ; i<n ; i++)
        	cin>>a[i], pos[a[i]] = i;

        int low = pos[1];
        int ans = 1;
        for(int i=2 ; i<=n ; i++)
        {
        	if(i==1)
        		continue;
        	if(pos[i]>low)
        		low = pos[i];
        	else
        		ans++, low = pos[i];
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