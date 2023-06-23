//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//void solution()
//{
//    int a,b,c;
//    cin >> a >> b >> c;
//        if(a-b-c>0)
//        {
//            cout << "YES" << endl;
//        }
//        else if(b>=c && a-b+c>0)
//        {
//            cout << "YES" << endl;
//        } 
//        else if(b<=c && a-c+b>0)
//        {
//            cout << "YES" << endl;
//        }
//        else
//        {
//            cout << "NO" << endl;
//        }
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
//    int count=0;
//    stack<char>st;
//    for(int i=0;i<n;i++)
//    {
//        if(s[i]=='+' || s[i]=='-')
//        {
//            count++;
//        }
//    }
//    if(count==0)
//    {
//        cout << n << endl;
//    }
//    else
//    {
//        int index=-1;
//        for(int i=0;i<n;i++)
//        {
//            if(s[i]=='+' || s[i]=='-')
//            {
//                index=i;
//                break;
//            }
//        }
//        int index2=-1;
//        for(int i=n-1;i>=0;i--)
//        {
//            if(s[i]=='+' || s[i]=='-')
//            {
//                index2=i;
//                break;
//            }
//        }
//        for(int i=index;i<=index2;i++)
//        {
//            if(st.empty())
//            {
//                st.push(s[i]);
//            }
//            else
//            {
//                if(st.top()!=s[i])
//                {
//                    st.push(s[i]);
//                }
//            }
//        }
//        int ans=0;
//        int tempCount=0;
//        char ver='y';
//        while(!st.empty())
//        {
//            if(st.top()=='0')
//            {
//                tempCount++;
//            }
//            else
//            {
//                if(ver=='y')
//                {
//                    ver=st.top();
//                }
//                else
//                {
//                    if(ver!=st.top())
//                    {
//                        ans+=tempCount;
//                        tempCount=0;
//                        ver=st.top();
//                    }
//                    else
//                    {
//                        tempCount=0;
//                    }
//                }
//            }
//            st.pop();
//        }
//        cout << ans << endl;
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
//    int n,m;
//    cin >> n >> m;
//    string a;
//    cin >> a;
//    string b;
//    cin >> b;
//    map<char,int>mp1;
//    map<char,int>mp2;
//    for(int i=0;i<n;i++)
//    {
//        mp1[a[i]]++;
//    }
//    for(int i=0;i<m;i++)
//    {
//        mp2[b[i]]++;
//    }
//    int size1=mp1.size();
//    int size2=mp2.size();
//    int sizediff=abs(size1-size2);
//    if(sizediff>=2)
//    {
//        cout << "NO" << endl;
//    }
//    else if(sizediff==1)
//    {
//        set<int> diffele;
//        for(auto it=mp1.begin();it!=mp1.end();it++)
//        {
//            if(mp2.find(it->first)==mp2.end())
//            {
//                diffele.insert(it->first);
//            }
//        }
//        for(auto it=mp2.begin();it!=mp2.end();it++)
//        {
//            if(mp1.find(it->first)==mp1.end())
//            {
//                diffele.insert(it->first);
//            }
//        }
//        if(diffele.size()>=2)
//        {
//            cout << "NO" << endl;
//        }
//        else
//        {
//            char diffelement=*(diffele.begin());
//            if(mp1.find(diffelement)!=mp1.end())
//            {
//                int flag=0;
//                for(auto it=mp1.begin();it!=mp1.end();it++)
//                {
//                    if(it->first!=diffelement)
//                    {
//                        auto it2=mp2.find(it->first);
//                        if(it->second!=it2->second)
//                        {
//                            flag=1;
//                            break;
//                        }
//                    }
//                }
//                if(flag==0)
//                {
//                    cout << "YES" << endl;
//                }
//                else
//                {
//                    cout << "NO" << endl;
//                }
//            }
//            else
//            {
//                int flag=0;
//                for(auto it=mp2.begin();it!=mp2.end();it++)
//                {
//                    if(it->first!=diffelement)
//                    {
//                        auto it2=mp1.find(it->first);
//                        if(it->second!=it2->second)
//                        {
//                            flag=1;
//                            break;
//                        }
//                    }
//                }
//                if(flag==0)
//                {
//                    cout << "YES" << endl;
//                }
//                else
//                {
//                    cout << "NO" << endl;
//                }
//            }
//        }
//    }
//    else
//    {
//        int size=mp1.size();
//        if(size==1)
//        {
//            cout << "YES" << endl;
//        }
//        else
//        {
//            int flag=0;
//            for(auto it=mp1.begin(),it2=mp2.begin();it!=mp1.end() && it2!=mp2.end();it++,it2++)
//            {
//                if(it->first==it2->first && it->second==it2->second)
//                {
//                    
//                }
//                else
//                {
//                    flag=1;
//                    break;
//                }
//            }
//            if(flag==1)
//            {
//                cout << "NO" << endl;
//            }
//            else
//            {
//                cout << "YES" << endl;
//            }
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
//    
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
    string s;
    cin >> s;
    int count=0;
    stack<char>st;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='+' || s[i]=='-')
        {
            count++;
        }
    }
    if(count==0)
    {
        cout << n << endl;
    }
    else
    {
        char tempchar='*';
        int tempcount=0;
        int ans=0;
        for(int i=0;i<n;i++) /// jaggu bhai thopu dammunte aapu 
        {
            if(tempchar=='+')
            {
                if(s[i]=='-')
                {
                    if(tempcount%2!=0)
                    {
                        ans+=1;
                    }
                    tempcount=0;
                    tempchar='-';
                }
                else if(s[i]=='+')
                {
                    tempcount=0;
                }
                else
                {
                    tempcount++;
                }
            }
            else if(tempchar=='-')
            {
                if(s[i]=='+')
                {
                    if(tempcount%2!=0)
                    {
                        ans+=1;
                    }
                    tempcount=0;
                    tempchar='+';
                }
                else if(s[i]=='-')
                {
                    tempcount=0;
                }
                else
                {
                    tempcount++;
                }
            }
            else
            {
                if(s[i]=='+')
                {
                    tempchar='+';
                }
                else if(s[i]=='-')
                {
                    tempchar='-';
                }
                else
                {
                    
                }
            }
        }
        cout << ans << endl;
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