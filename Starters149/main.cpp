#include <iostream>
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
#define ll long long int
using namespace std;
using namespace __gnu_pbds;

//void solution()
//{
//    ll n;
//    cin >> n;
//    vector<ll> arr(n);
//    for(ll i=0;i<n;i++)
//    {
//        cin >> arr[i];
//    }
//    
//    ll positive_from_begin=-1;
//    ll positive_from_end=-1;
//    
//    for(ll i=0;i<n;i++)
//    {
//        if(arr[i]>0)
//        {
//            positive_from_begin=i;
//            break;
//        }
//    }
//    for(ll i=n-1;i>=0;i--)
//    {
//        if(arr[i]>0)
//        {
//            positive_from_end=i;
//            break;
//        }
//    }
//    if(positive_from_begin==-1)
//    {
//        cout << "0" << endl;
//        return ;
//    }
//    ll ans=0;
//    for(ll i=positive_from_begin;i<=positive_from_end;i++)
//    {
//        if(arr[i]<0)    ans++;
//    }
//    cout << ans << endl;
//}

//void solution()
//{
//    ll n;
//    cin >> n;
//    vector<ll> arr(n);
//    ll negative_count=0;
//    for(ll i=0;i<n;i++)
//    {
//        cin >> arr[i];
//        if(arr[i]<0)
//        {   
//            negative_count++;
//            arr[i]=-1*arr[i];
//        }
//    }
//    sort(arr.begin(),arr.end());
//    ll total_sum=0;
//    for(auto num: arr)
//    {
//        total_sum+=num;
//    }
//    if(negative_count%2==0)
//    {
//        cout << total_sum << endl;
//    }
//    else
//    {
//        cout << total_sum-2*arr[0] << endl;
//    }
//}

ll countLessThanTarget(ll target,map<ll,ll> &mp)
{
    
}

void solution()
{
    ll n,x,k;
    cin >> n >> x >> k;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    map<ll,ll> mp;
    for(auto num:arr)
    {
        mp[num]++;
    }
    
    
    
}

//void solution()
//{
//    ll n;
//    cin >> n;
//    string s;
//    cin >> s;
//    string removed_repetition;
//    removed_repetition.push_back(s[0]);
//    ll chars_to_be_removed=0;
//    for(ll i=1;i<n;i++)
//    {
//        if(removed_repetition[removed_repetition.length()-1]==s[i])
//        {
//            chars_to_be_removed++;
//        }
//        else
//        {
//            removed_repetition.push_back(s[i]);
//        }
//    }
////    cout << removed_repetition << endl;
//    ll reduced_len=removed_repetition.length();
//    ll ans=((chars_to_be_removed-1)*(reduced_len-1))+((reduced_len-1)*reduced_len)/2;
//    cout << max(0LL,ans) << endl;
//}

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        solution();
    }
    return 0;
}