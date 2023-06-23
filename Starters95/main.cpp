//#include <iostream>
//#include <bits/stdc++.h>
//#define ll long long int
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    vector<string>v;
//    for(int i=0;i<n;i++)
//    {
//        string s;
//        cin >> s;
//        v.push_back(s);
//    }
//    int a_count=0,b_count=0,ab_count=0,o_count=0;
//    for(int i=0;i<n;i++)
//    {
//        if(v[i]=="A")
//        {
//            a_count++;
//        }
//        else if(v[i]=="B")
//        {
//            b_count++;
//        }
//        else if(v[i]=="AB")
//        {
//            ab_count++;
//        }
//        else
//        {
//            o_count++;
//        }
//    }
//    int ans=0;
//    if(o_count>0)
//    {
//        ans+=1;
//    }
//    ans+=max(a_count,b_count);
//    ans+=ab_count;
//    cout << ans << endl;
//}
//int main() {
//	int t;
//    cin >> t;
//    while(t--)
//    {
//        solution();
//    }
//	return 0;
//}


//#include <iostream>
//#include <bits/stdc++.h>
//#define ll long long int
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    vector<string>v;
//    for(int i=0;i<n;i++)
//    {
//        string s;
//        cin >> s;
//        v.push_back(s);
//    }
//    stack<string>st;
//    for(int i=0;i<n;i++)
//    {
//        st.push(v[i]);
//    }
//    unordered_set<string>mp;
//    string ans;
//    while(!st.empty())
//    {
//        string top=st.top();
//        if(mp.find(top)!=mp.end())
//        {
//            
//        }
//        else
//        {
//            ans+=top.substr(top.length()-2,2);
//            mp.insert(top);
//        }
//        st.pop();
//    }
//    cout << ans << endl;
//}
//int main() {
////	int t;
////    cin >> t;
////    while(t--)
////    {
//        solution();
////    }
//	return 0;
//}


//#include <iostream>
//#include <bits/stdc++.h>
//#define ll long long int
//using namespace std;
//void solution()
//{
//    ll n,m,h;
//    cin >> n >> m >> h;
//    vector<ll>capabilities(n);
//    for(int i=0;i<n;i++)
//    {
//        cin >> capabilities[i];
//    }
//    vector<ll>outlets(m);
//    for(int i=0;i<m;i++)
//    {
//        cin >> outlets[i];
//    }
//    sort(outlets.begin(),outlets.end(),greater<ll>());
//    sort(capabilities.begin(),capabilities.end(),greater<ll>());
//    ll ans=0;
//    for(int i=0;i<min(n,m);i++)
//    {
//        ans+=((min(h*outlets[i],capabilities[i])));
//    }
//    cout << ans << endl;
//}
//int main() {
//	int t;
//    cin >> t;
//    while(t--)
//    {
//        solution();
//    }
//	return 0;
//}
//
//
//
//
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void solution()
{
    
}
int main() {
	int t;
    cin >> t;
    while(t--)
    {
        solution();
    }
	return 0;
}




