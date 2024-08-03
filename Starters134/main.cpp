//#include <bits/stdc++.h>
//using namespace std;
//
//void solution()
//{
//    int n;
//    cin >> n;
//    string s;
//    cin >> s;
//    
//    int ans=0;
//    int count=1;
//    for(int i=1;i<n;i++)
//    {
//        if(s[i]==s[i-1])
//        {
//            count++;
//        }
//        else
//        {
//            ans+=ceil(static_cast<double>(count)/2);
//            count=1;
//        }
//    }
//    ans+=ceil(static_cast<double>(count)/2);
//    cout << ans << endl;
//}
//
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

//#include <bits/stdc++.h>
//#define ll long long int
//using namespace std;
//
//void solution()
//{
//    ll n;
//    cin >> n;
//    ll rem=n%9;
//    ll count=n/9;
//    cout << count*45 + (rem*(rem+1))/2 << endl;
//}
//
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

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(vector<ll> &b,ll k)
{
    map<ll,ll> mp;
    ll size=k;
    for(int i=0;i<k;i++)
    {
        mp[b[i]]++;
    }
    
    while(size>1)
    {
        auto it_max=mp.end();
        it_max--;
        ll max_ele=it_max->first;
        ll second_max=0;
        if(it_max->second>1)
        {
            second_max=max_ele;
        }
        else
        {
            it_max--;
            second_max=it_max->first;
        }
        
        ll min_ele=mp.begin()->first;
        
        mp[min_ele]--;
        mp[max_ele]--;
        mp[second_max]--;
        
        if(mp[min_ele]==0)
        {
            mp.erase(min_ele);
        }
        if(mp[max_ele]==0)
        {
            mp.erase(max_ele);
        }
        if(mp[second_max]==0)
        {
            mp.erase(second_max);
        }
        
        mp[max_ele+second_max-min_ele]++;
        
        size-=2;
    }
    
    cout << mp.begin()->first << " ";
}

void solution()
{
    ll n,q;
    cin >> n >> q;
    vector<ll> b(n);
    vector<ll> k(q);
    for(int i=0;i<n;i++)
    {
        cin >> b[i];
    }
    for(int i=0;i<q;i++)
    {
        cin >> k[i];
    }
    for(int i=0;i<q;i++)
    {
        solve(b,k[i]);
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solution();
    }
    return 0;
}