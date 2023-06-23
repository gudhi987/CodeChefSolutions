//#include <iostream>
//#include <bits/stdc++.h>
//#define ll unsigned long long int
//#define big 1000000007
//using namespace std;
//void solution()
//{
//    ll y;
//    cin >> y;
//    if(y==0)
//    {
//        cout << "1" << endl;
//    }
//    else if(y==1)
//    {
//        cout << "3" << endl;
//    }
//    else
//    {
//        cout << y*3 << endl;
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
    ll n;
    cin >> n;
    vector<ll>b(n);
    for(ll i=0;i<n;i++)
    {
        cin >> b[i];
    }
    ll q=0;
    ll p=0;
    reverse(b.begin(),b.end());
    for(ll i=0;i<n;i++)
    {
        if(b[i]==-1)
        {
            q+=((n-i));
        }
        else
        {
            p+=((n-i));
        }
    }
//    cout << p << " " << q << endl;
    if(p-q<0)
    {
        cout << q-p << endl;
    }
    else
    {
        cout << p-q << endl;
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