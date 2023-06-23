//#include <iostream>
//#include <bits/stdc++.h>
//#define big 1000000007
//#define ll long long int
//using namespace std;
//int digits(int n)
//{
//    int count=0;
//    while(n>0)
//    {
//        n/=10;
//        count++;
//    }
//    return count;
//}
//void solution()
//{
//    int n,x;
//    cin >> n >> x;
//    int total_bill=n*x;
//    if(digits(total_bill)==5)
//    {
//        cout << "YES" << endl;
//    }
//    else
//    {
//        cout << "NO" << endl;
//    }
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
//#define big 1000000007
//#define ll long long int
//using namespace std;
//void solution()
//{
//    int n,m;
//    cin >> n >> m;
//    if((m+n)%2==0)
//    {
//        cout << "YES" << endl;
//    }
//    else
//    {
//        cout << "NO" << endl;
//    }
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
//#define big 1000000007
//#define ll long long int
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    vector<int>a(n);
//    int even_count=0;
//    for(int i=0;i<n;i++)
//    {
//        cin >> a[i];
//        if(a[i]%2==0)
//        {
//            even_count++;
//        }
//    }
//    int ans=1;
//    for(int i=1;i<=even_count;i++)
//    {
//        ans=(ans*2)%big;
//    }
////    cout << ans << endl;
//    if(even_count==n)
//    {
//        cout << ans-1 << endl;
//    }
//    else
//    {
//        cout << ans << endl;
//    }
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

#include <iostream>
#include <bits/stdc++.h>
#define big 1000000007
#define ll long long int
using namespace std;
bool isregular(const string &s)
{
    stack<char>st;
    for(int i=0;i<s.length();i++)
    {
        if(st.empty())
        {
            if(s[i]==')')
            {
                return false;
            }
            else
            {
                st.push(s[i]);
            }
        }
        else if(st.top()=='(' && s[i]==')')
        {
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
    }
    if(st.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}
void solution()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(n%2!=0)
    {
        cout << "NO" << endl;
    }
    else
    {
        int isrepeated=-1;
        for(int i=1;i<s.length();i++)
        {
            if(s[i]==s[i-1])
            {
                isrepeated=i;
                break;
            }
        }
        if(isrepeated!=-1)
        {
            string t;
            t.push_back(s[isrepeated]);
            for(int i=isrepeated+1;i<s.length();i++)
            {
                if(s[i]==s[i-1])
                {
                    t.push_back(s[i]);
                }
                else
                {
                    if(t[t.length()-1]=='('
                }
            }
        }
        else
        {
            cout << "YES" << endl;
            string temp="()";
            string ans;
            for(int i=1;i<=n/2;i++)
            {
                ans+=temp;
            }
            cout << ans << endl;
        }
    }
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
