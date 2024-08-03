#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void dfs(int r,int c,set<vector<int>> &st,string &s)
{
    if(st.find({r,c})==st.end())
    {
        st.insert({r,c});
        if(s[0]=='1' && c-1>=-10 && st.find({r,c-1})==st.end())
        {
            dfs(r,c-1,st,s);
        }
        if(s[1]=='1' && c+1<=10 && st.find({r,c+1})==st.end())
        {
            dfs(r,c+1,st,s);
        }
        if(s[2]=='1' && r-1>=-10 && st.find({r-1,c})==st.end())
        {
            dfs(r-1,c,st,s);
        }
        if(s[3]=='1' && r+1<=10 && st.find({r+1,c})==st.end())
        {
            dfs(r+1,c,st,s);
        }
    }
}

//void solution()
//{
//    string s;
//    cin >> s;
//    
//    set<vector<int>> st;
//    dfs(0,0,st,s);
//    
//    cout << st.size() << endl;
//}

//void solution()
//{
//    ll n;
//    cin >> n;
//    
//    string s;
//    cin >> s;
//    
//    vector<ll> arr(n);
//    for(ll i=0;i<n;i++)
//    {
//        if(s[i]=='0')
//        {
//            arr[i]=-1;
//        }
//        else
//        {
//            arr[i]=1;
//        }
//    }
//    
//    map<ll,ll> sums;
//    ll ans=0,prefixSum=0;
//    for(ll i=0;i<n;i++)
//    {
//        prefixSum+=arr[i];
//        sums[prefixSum]++;
//    }
//    prefixSum=0;
//    for(ll i=0;i<n;i++)
//    {
//        if(sums.find(prefixSum)!=sums.end())
//        {
//            ll zeroCount=sums[prefixSum];
//            ans+=(2*zeroCount+n-i-zeroCount);
//        }
//        else
//        {
//            ans+=(n-i);
//        }
//        prefixSum+=arr[i];
//        sums[prefixSum]--;
//        if(sums[prefixSum]==0)
//        {
//            sums.erase(prefixSum);
//        }
//    }
//    cout << ans << endl;
//}

void solution()
{
    
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