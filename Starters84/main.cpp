//#include <iostream>
//#include <bits/stdc++.h>
//#define ll long long int
//#define big 1000000007
//using namespace std;
//void solution()
//{
//    int n,x;
//    cin >> n >> x;
//    vector<int>age(n);
//    int count=0;
//    for(int i=0;i<n;i++)
//    {
//        cin >> age[i];
//        if(age[i]>=x)
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
//#define big 1000000007
//using namespace std;
//void solution()
//{
//    int x,y;
//    cin >> x >> y;
//    double req_time=static_cast<double>((-1+sqrt(1+8*(x-y)))/2);
//    cout << ceil(req_time) << endl;
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
//    int n,k;
//    cin >> n >> k;
//    string s;
//    cin >> s;
//    while(k>0)
//    {
//        if(s[0]=='0')
//        {
//            s[0]='1';
//        }
//        else
//        {
//            s.push_back('0');
//        }
//        k--;
//    }
//    cout << s << endl;
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
//    string x1="0";
//    string x2="1";
//    for(int i=0;i<n-1;i++)
//    {
//        int temp1=x1[i]-'0';
//        int temp2=x2[i]-'0';
//        int temp=s[i]-'0';
//        x1.push_back(char(48+temp1^temp));
//        x2.push_back(char(48+temp2^temp));
//    }
//    int count1=0;
//    int count2=0;
//    for(int i=0;i<n;i++)
//    {
//        if(x1[i]=='1')
//        {
//            count1++;
//        }
//        if(x2[i]=='1')
//        {
//            count2++;
//        }
//    }
//    cout << max(count1,count2) << endl;
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
//    for(int i=0;i<n;i++)
//    {
//        cin >> a[i];
//    }
//    vector<int>b=a;
//    sort(b.begin(),b.end());
//    vector<int>c=a;
//    sort(c.begin(),c.end(),greater<int>());
//    int start=0;
//    int ptr1=0;
//    int ptr2=0;
//    vector<int>d;
//    long long int req=c[0]+c[1];
//    for(int i=0;i<n;i++)
//    {
//        if(start%2==0)
//        {
//            d.push_back(c[ptr1]);
//            ptr1+=1;
//        }
//        else
//        {
//            d.push_back(b[ptr2]);
//            ptr2+=1;
//        }
//        start++;
//    }
////    for(int i=0;i<n;i++)
////    {
////        cout << d[i] << " "; 
////    }
////    cout << endl;
//    int flag=0;
//    for(int i=0;i<n-1;i++)
//    {
//        long long int temp=d[i]+d[i+1];
//        if(temp>=req)
//        {
//            flag=1;
//            break;
//        }
//    }
//    if(flag==1)
//    {
//        cout << "NO" << endl;
//    }
//    else
//    {
//        cout << "YES" << endl;
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
#define ll long long int
#define big 1000000007
using namespace std;
void solution()
{
    int n,k;
    cin >> n >> k;
    vector<string>a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    vector<string>b(n);
    for(int i=0;i<n;i++)
    {
        cin >> b[i];
    }
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(a[i].length()!=b[i].length())
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout << "NO" << endl;
    }
    else
    {
        
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