/*
* @Author: Zakaria
* @Date:   2023-04-07 21:45:23
* @Last Modified time: 2023-04-07 22:42:06
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

const int mod = 1e9 + 7;
const int N = 2e5 + 6;

void Solve()
{

	int n, m, k;
	cin >> n >> m >> k;

	int a[n];
	for (int i = 0 ; i < n ; i++)	cin >> a[i];

	int b[m];
	for (int i = 0 ; i < m ; i++)	cin >> b[i];

	sort(b, b + m);
	sort(a, a + n);
	
	int ans = 0;

	int l1 = 0, l2 = 0;

	// for(auto i:a)
	// 	cout<<i<<" ";
	// cout<<endl;
	// for(auto i:b)
	// 	cout<<i<<" ";
	// cout<<endl;

	while(l1<n && l2<m)
	{
		if(abs(a[l1] - b[l2])<=k)
			ans++, l1++, l2++;
		else
		{
			if(a[l1]<b[l2])
				l1++;
			else
				l2++;
		}
	}

	cout<<ans<<endl;


}

int main()
{

	ios::sync_with_stdio(false);
	cin.tie(0);

	int tt = 1;

	//    cin>>tt;

	while (tt--)
	{

		Solve();
	}

	return 0;

}