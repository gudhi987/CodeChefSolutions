//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//void solution()
//{
//    int a,b,c,x;
//    cin >> a >> b >> c >> x;
//    if(a+b>=x)
//    {
//        cout << "YES" << endl;
//    }
//    else if(a+c>=x)
//    {
//        cout << "YES" << endl;
//    }
//    else if(a+b>=x)
//    {
//        cout << "YES" << endl;
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
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    string s;
//    cin >> s;
//    map<char,int>mp;
//    for(int i=0;i<s.length();i++)
//    {
//        mp[s[i]]++;
//    }
//    if(mp.size()==s.length())
//    {
//        cout << "-1" << endl;
//    }
//    else
//    {
//        cout << s.length()-2 << endl;
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
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    for(int i=1;i<=n;i++)
//    {
//        if(i==n)
//        {
//            cout << "1" << endl;
//        }
//        else
//        {
//            cout << i+1 << " ";
//        }
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
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    vector<int>a(n);
//    map<int,int>mp;
//    for(int i=0;i<n;i++)
//    {
//        cin >> a[i];
//        mp[a[i]]++;
//    }
//    int flag=0;
//    for(auto it=mp.begin();it!=mp.end();it++)
//    {
//        if(it->second>=3)
//        {
//            flag=1;
//            break;
//        }
//    }
//    if(flag==1)
//    {
//        cout << "0" << endl;
//    }
//    else
//    {
//        int minimum=INT_MAX;
////        for(auto it=mp.begin();it!=mp.end();it++)
////        {
////            if(it->second==2)
////            {
////                auto it2=it;
////                it2++;
////                if(it2!=mp.end())
////                {
////                    if(it2->second==2)
////                    {
////                        int ans1=abs(((2*it->first+it2->first)/3 - it->first));
////                        int ans2=abs(((it->first+2*it2->first)/3 - it2->first));
////                        minimum=min(minimum,min(ans1,ans2));
////                    }
////                    else
////                    {
////                        int ans1=abs(((2*it->first+it2->first)/3 - it->first));
////                        minimum=min(minimum,ans1);
////                    }
////                }
////            }
////            else
////            {
////                auto it2=it;
////                it2++;
////                if(it2!=mp.end())
////                {
////                    if(it2!=mp.end())
////                    {
////                        if(it2->second==2)
////                        {
////                            int ans1=abs(((it->first+2*it2->first)/3 - it2->first));
////                            minimum=min(minimum,ans1);
////                        }
////                        else
////                        {
////                            auto it3=it2;
////                            it3++;
////                            if(it3!=mp.end())
////                            {
//////                                cout << it->first << " " << it2->first << " " << it3->first << endl;
////                                int ans1=abs(((it->first+it2->first+it3->first)/3 - it2->first));
////                                minimum=min(minimum,ans1);
////                            }
////                        }
////                    }
////                }
////            }
//            sort(a.begin(),a.end());
//            for(int i=0;i<=n-3;i++)
//            {
//                int ans=abs((a[i]+a[i+1]+a[i+2])/3 - a[i+1]);
//                minimum=min(minimum,ans);
//                if(minimum==0)
//                {
//                    break;
//                }
//            }
//            if(minimum==0)
//            {
//                break;
//            }
//        }
//        cout << 3*minimum << endl;
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
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n;
    cin >> n;
    vector<int> a(n);
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    int flag=0;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        if(it->second%2!=0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        auto it=mp.rbegin();
        if(it->second%2!=0)
        {
            cout << "MARICHKA" << endl;
        }
        else
        {
            int flag2=0;
            int count=0;
            for(auto it2=mp.begin();it2!=mp.end() && count<mp.size()-1;it2++)
            {
                if(it2->second%2!=0)
                {
                    flag2=1;
                    break;
                }
                count++;
            }
            if(flag2==1)
            {
                cout << "MARICHKA" << endl;
            }
            else
            {
                cout << "ZEYNK" << endl;
            }
        }
    }
    else
    {
        cout << "ZEYNK" << endl;
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