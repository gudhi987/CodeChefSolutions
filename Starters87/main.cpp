//#include <iostream>
//#include <bits/stdc++.h>
//#define ll long long int
//#define big 1000000007
//using namespace std;
//void solution()
//{
//    int x;
//    cin >> x;
//    int cost;
//    if(x%10>=5)
//    {
//        cost=(x/10+1)*10;
//    }
//    else
//    {
//        cost=(x/10)*10;
//    }
//    cout << 100-cost << endl;
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
//    unsigned long long int x,y;
//    cin >> x >> y;
//    if(x*x==(2*y))
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
#include <iostream>
#include <bits/stdc++.h>
#define ll unsigned long long int
#define big 1000000
using namespace std;
void solution()
{
    
    ll x;
    cin >> x;
    if(x==1)
    {
        cout << "-1" << endl;
    }
    else if(x%big==0 && x!=big)
    {
        ll quotient=x/big;
        ll remainder=x-(quotient-1)*big;
        cout << quotient-1 << " " << big << " " << remainder << endl;
    }
    else
    {
        if(x<=big)
        {
            cout << "1 " << x-1 << " " << 1 << endl;
        }
        else
        {
            ll quotient=x/big;
            ll remainder=x-(quotient)*big;
            cout << quotient << " " << big << " " << remainder << endl;
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