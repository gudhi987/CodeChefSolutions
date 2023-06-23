//#include <iostream>
//#include <bits/stdc++.h>
//#define ll long long int
//#define big 1000000007
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    string s;
//    cin >> s;
//    char start='A';
//    int countA=0;
//    int countB=0;
//    for(int i=0;i<n;i++)
//    {
//        if(start=='A' && s[i]=='A')
//        {
//            countA++;
//        }
//        else if(start=='B' && s[i]=='B')
//        {
//            countB++;
//        }
//        else
//        {
//            start=s[i];
//        }
//    }
//    cout << countA << " " << countB << endl;
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
//    if(n%2!=0)
//    {
//        cout << "-1" << endl;
//    }
//    else
//    {
//        for(int i=n;i>=1;i--)
//        {
//            cout << i << " ";
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
//    ll n,k;
//    cin >> n >> k;
//    if(n>=2*k)
//    {
//        ll temp=ceil(static_cast<double>(n)/2);
//        if(temp%2==0)
//        {
//            if(k%2==0)
//            {
//                cout << "YES" << endl;
//            }
//            else
//            {
//                cout << "NO" << endl;
//            }
//        }
//        else
//        {
//            if(k%2!=0)
//            {
//                cout << "YES" << endl;
//            }
//            else
//            {
//                cout << "NO" << endl;
//            }
//        }
//    }
//    else
//    {
//        cout << "NO" << endl;
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
//    int n,q;
//    cin >> n >> q;
//    vector<int>arr(n);
//    for(int i=0;i<n;i++)
//    {
//        cin >> arr[i];
//    }
//    vector<vector<int>>queries(q,vector<int>(2));
//    for(int i=0;i<q;i++)
//    {
//        cin >> queries[i][0] >> queries[i][1];
//    }
//    vector<int>count(n);
//    for(int i=0;i<q;i++)
//    {
//        int start=queries[i][0];
//        int end=queries[i][1];
//        for(int i=start-1;i<=end-1;i++)
//        {
//            count[i]++;
//        }
//    }
//    vector<int>arr_cpy=arr;
//    sort(arr_cpy.begin(),arr_cpy.end(),greater<int>());
//    vector<vector<int>>req;
//    for(int i=0;i<n;i++)
//    {
//        req.push_back({count[i],i});
//    }
////    sort(req.begin(),req.end(),greater<int>());
////    for(int i=0;i<n;i++)
////    {
////        req[i][0]=arr_cpy[i];
////    }
////    vector<int>ans(n);
////    for(int i=0;i<n;i++)
////    {
////        ans[req[i][1]]=req[i][0];
////    }
////    for(int i=0;i<n;i++)
////    {
////        cout << ans[i] << " ";
////    }
////    cout << endl;
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
    ll n,k;
    cin >> n >> k;
    if(n>=2*k)
    {
        ll temp=ceil(static_cast<double>(n)/2);
        if(temp%2==0)
        {
            if(k%2==0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            if(k%2!=0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    else
    {
        cout << "NO" << endl;
    }
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