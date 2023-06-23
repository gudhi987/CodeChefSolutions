//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//void solution()
//{
//    int n,x;
//    cin >> n >> x;
//    vector <int> a(n);
//    for(int i=0;i<n;i++)
//    {
//        cin >> a[i];
//    }
//    vector <int> b(n);
//    for(int i=0;i<n;i++)
//    {
//        cin >> b[i];
//    }
//    long long int total_cost=0;
//    for(int i=0;i<n;i++)
//    {
//        if(a[i]>=x)
//        {
//            total_cost+=b[i];
//        }
//    }
//    cout << total_cost << endl;
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
//    vector <int> onelocs;
//    for(int i=0;i<n;i++)
//    {
//        if(s[i]=='1')
//        {
//            onelocs.push_back(i);
//        }
//    }
//    int flag=0;
//    for(int i=1;i<onelocs.size();i++)
//    {
//        if((onelocs[i]-onelocs[i-1])%2!=0)
//        {
//            flag=1;
//            break;
//        }
//    }
//    if(flag==1)
//    {
//        cout << "1" << endl;
//    }
//    else
//    {
//        cout << "2" << endl;
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
//bool isPrime(int n)
//{
//    int flag=0;
//    for(int i=2;i<=sqrt(n);i++)
//    {
//        if(n%i==0)
//        {
//            flag=1;
//            break;
//        }
//    }
//    if(flag==1)
//    {
//        return false;
//    }
//    else
//    {
//        return true;
//    }
//}
//void solution()
//{
//    int n;
//    cin >> n;
//    string a;
//    cin >> a;
//    string b;
//    cin >> b;
//    int count1=count(a.begin(),a.end(),'1');
//    int count2=count(b.begin(),b.end(),'1');
//    if(count1==count2)
//    {
//        if(a==b)
//        {
//            cout << "YES" << endl;
//        }
//        else
//        {
//            for(int i=0;i<n;i++)
//            {
//                if(a[i]!=b[i])
//                {
//                    
//                }
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
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n;
    cin >> n;
    vector <int> b;
    for(int i=0;i<n;i++)
    {
        cin >> b[i];
    }
    if(count(b.begin(),b.end(),1)==n)
    {
        for(int i=0;i<n;i++)
        {
            cout << i+1 << " ";
        }
        cout << endl;
    }
    else if(count(b.begin(),b.end(),n)==n)
    {
        for(int i=0;i<n;i++)
        {
            cout << "1" << " "; 
        }
        cout << endl;
    }
    else
    {
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[b[i]]++;
        }
        int flag=0;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second%it->first!=0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout << "-1" << endl;
        }
        else
        {
            int temp=1;
            map<int,int>mp2;
            map<int,int>mp3;
            for(int i=0;i<n;i++)
            {
                if(mp2.find(b[i])==mp2.end())
                {
                    mp2[b[i]]=temp;
                    mp3[b[i]]++;
                    b[i]=mp2[b[i]];
                    if(mp3[b[i]]/b[i]==1)
                    {
                        mp2.erase(b[i]);
                        mp3.erase(b[i]);
                    }
                    temp++;
                }
                else
                {
                    b[i]=mp2[b[i]];
                    mp3[b[i]]++;
                    if(mp3[b[i]]/b[i]==1)
                    {
                        mp2.erase(b[i]);
                        mp3.erase(b[i]);
                        temp++;
                    }
                }
            }
            for(int i=0;i<n;i++)
            {
                cout << b[i] << " ";
            }
            cout << endl;
        }
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
