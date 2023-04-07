/*
* @Author: Zakaria 
* @Date:   2023-04-08 01:29:40
* @Last Modified time: 2023-04-08 01:41:25
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
int a[N];
int freq[N];
bool check(int x)
{
	int cnt = 0;
	
	for(int i=1 ; i<=x ; i++)
	{
		if(freq[a[i]]==0)
			cnt++;
		freq[a[i]]++;
	}

	if(cnt==x)
		return 1;

	for(int i=x+1 ; i<=n ; i++)
	{
		if(freq[a[i]]==0)
			cnt++;
		freq[a[i]]++;
		freq[a[i-x]]--;
		if(freq[a[i-x]]==0)
			cnt--;

		if(cnt==x)
			return 1;
	}

	return 0; 
}

void Solve()
{
        
        cin>>n;

        int p = 0;
        map<int, int>mappping;

        for(int i=1 ; i<=n ; i++)
        {
        	cin>>a[i];
        	if(mappping[a[i]]==0)
        		mappping[a[i]] = p++;

        }

        for(int i=1 ; i<=n ; i++)
        {
        	a[i] = mappping[a[i]];
        }


        int low = 1, high = n, mid;
        int ans = 1;

        while(low<=high)
        {
        	mid = (low+high)/2;
        	for(int i=0 ; i<=n ; i++)
        		freq[i] = 0;

        	if(check(mid))
        	{
        		ans = mid;
        		low = mid + 1;
        	}
        	else
        		high = mid - 1;
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