//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//void solution()
//{
//    int h,x,y;
//    cin >> h >> x >> y;
//    if(h-y>0)
//    {
//        cout << 1+ceil(static_cast<double>(h-y)/x) << endl;
//    }
//    else
//    {
//        cout << "1" << endl;
//    }
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
//#define ll long long int
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    vector<ll> a(n);
//    vector<ll>b(n);
//    for(int i=0;i<n;i++)
//    {
//        cin >> a[i];
//    }
//    for(int i=0;i<n;i++)
//    {
//        cin >> b[i];
//    }
//    int count=0;
//    for(int i=0;i<n;i++)
//    {
//        ll small=min(a[i],b[i]);
//        ll larger=max(a[i],b[i]);
//        ll temp=2*small;
//        if(larger<=temp)
//        {
//            count++;
//        }
//    }
//    cout << count << endl;
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
//#define ll long long int
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    vector<int> a(n);
//    unordered_map<int,int>mp;
//    for(int i=0;i<n;i++)
//    {
//        cin >> a[i];
//        mp[a[i]]++;
//    }
//    int max_count=0;
//    for(auto it=mp.begin();it!=mp.end();it++)
//    {
//        max_count=max(max_count,it->second);
//    }
//    cout << n-max_count << endl;
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
//#define ll long long int
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    if(n%2!=0)
//    {
//        cout << "-1" << endl;
//    }
//    else
//    {
////        long long int prefix_sum=3;
////        int count=2;
////        cout << "1" << " ";
//        cout << "2 1" << " ";
//        for(int i=4;i<=n;i+=2)
//        {
//            cout << i << " " << i-1 << " ";
////            prefix_sum+=i;
////            count++;
////            cout << prefix_sum%count << " ";
////            prefix_sum+=(i-1);
////            count++;
////            cout << prefix_sum%count << " ";
//        }
//        cout << endl;
//    }
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
//#define ll long long int
//#define big 1000000007
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    vector<int>a(n);
//    unordered_map<int,int>mp;
//    for(int i=0;i<n;i++)
//    {
//        cin >> a[i];
//        mp[a[i]]++;
//    }
//    long long int ans=0;
//    long long int product=1;
//    for(int i=1;i<=n;i++)
//    {
//        if(mp.find(i)!=mp.end())
//        {
//            auto it=mp.find(i);
//            product=(product*it->second)%big;
//            ans=(ans+product)%big;
//        }
//        else
//        {
//            break;
//        }
//    }
//    cout << ans << endl;
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
#define ll long long int
#define big 1000000007
using namespace std;
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