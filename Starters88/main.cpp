//#include <iostream>
//#include <bits/stdc++.h>
//#define ll unsigned long long int
//#define big 1000000007
//using namespace std;
//void solution()
//{
//    ll n;
//    cin >> n;
//    vector<ll> a(n);
//    for(ll i=0;i<n;i++)
//    {
//        cin >> a[i];
//    }
//    sort(a.begin(),a.end(),greater<ll>());
//    ll first=a[0];
//    ll second;
//    for(ll i=0;i<n;i++)
//    {
//        if(a[i]!=first)
//        {
//            second=a[i];
//            break;
//        }
//    }
//    cout << first+second << endl;
//}
//int main()
//{
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        solution();
//    }
//    return 0;
//}
//#include <iostream>
//#include <bits/stdc++.h>
//#define ll unsigned long long int
//#define big 1000000007
//using namespace std;
//void solution()
//{
//    ll n;
//    cin >> n;
//    vector<ll>a(n);
//    for(ll i=0;i<n;i++)
//    {
//        cin >> a[i];
//    }
//    ll total_comb=((n)*(n+1))/2;
//    ll self_comb=n;
//    map<ll,ll>mp;
//    for(ll i=0;i<n;i++)
//    {
//        mp[a[i]]++;
//    }
//    ll req_comb=0;
//    for(auto it=mp.begin();it!=mp.end();it++)
//    {
//        if(it->second>=2)
//        {
//            req_comb+=((it->second)*(it->second-1))/2;
//        }
//    }
//    cout << total_comb - self_comb - req_comb << endl;
//}
//int main()
//{
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        solution();
//    }
//    return 0;
//}
#include <iostream>
#include <bits/stdc++.h>
#define ll unsigned long long int
#define big 1000000007
using namespace std;
int modInverse(int A, int M)
{
	int m0 = M;
	int y = 0, x = 1;
	if (M == 1)
		return 0;
	while (A > 1) {
		int q = A / M;
		int t = M;
		M = A % M, A = t;
		t = y;
		y = x - q * y;
		x = t;
	}
	if (x < 0)
		x += m0;

	return x;
}
ll factorial(ll n)
{
    ll product=1;
    for(ll i=1;i<=n;i++)
    {
        product=((product%big)*(i%big))%big;
    }
    return product;
}
void solution()
{
    ll n;
    cin >> n;
    vector<vector<ll>> a;
    for(ll i=0;i<n;i++)
    {
        ll temp1,temp2;
        cin >> temp1 >> temp2;
        a.push_back({temp1,temp2});
    }
    map<ll,ll>mp;
    for(ll i=0;i<n;i++)
    {
        mp[a[i][0]]++;
    }
    ll P=1;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
//        cout << it->first << " " << it->second << endl;
        P*=(factorial(it->second));
    }
    ll Q=factorial(n);
    ll gcd=__gcd(P,Q);
    P=P/gcd;
    Q=Q/gcd;
//    cout << P << " " << Q << endl;
    cout << P*modInverse(Q,big) << endl;
}
int main()
{
    solution();
    return 0;
}