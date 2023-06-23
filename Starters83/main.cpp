//#include <iostream>
//#include <bits/stdc++.h>
//#define ll long long int
//#define big 1000000007
//using namespace std;
//void solution()
//{
//    int n,a,b;
//    cin >> n >> a >> b;
//    long long int ans=(ceil(static_cast<double>(n)/2))*b + (n/2)*a;
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
//    stack<char>st;
//    int count=1;
//    for(int i=0;i<n;i++)
//    {
//        if(st.empty())
//        {
//            st.push(s[i]);
//        }
//        else if(st.top()!=s[i])
//        {
//            st.push(s[i]);
//            count=1;
//        }
//        else
//        {
//            count++;
//            if(count==3)
//            {
//                st.pop();
//                count=1;
//            }
//            else
//            {
//                st.push(s[i]);
//            }
//        }
//    }
//    string req;
//        while(!st.empty())
//        {
//            req.push_back(st.top());
//            st.pop();
//        }
//        reverse(req.begin(),req.end());
//        cout << req << endl;
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
    int a,b,c;
    cin >> a >> b >> c;
    vector<int>v={a,b,c};
    vector<int>temp1=v;
    vector<int>temp2=v;
    sort(temp1.begin(),temp1.end());
    sort(temp2.begin(),temp2.end(),greater<int>());
    if(v==temp1 || v==temp2)
    {
        if(v==temp1)
        {
            cout << "0" << endl;
        }
        else
        {
            int ans=a^b^c;
            if(ans==0)
            {
                cout << temp2[0] << endl;
            }
            else
            {
                cout << ans << endl;
            }
        }
    }
    else
    {
        cout << "-1" << endl;
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