//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//void solution()
//{
//    int a,b,c;
//    cin >> a >> b >> c;
//    int ans;
//    for(int i=99;i>1;i--)
//    {
//        if(a%i!=0 && b%i!=0 && c%i!=0)
//        {
//            ans=i;
//            break;
//        }
//    }
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
//}
//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//void solution()
//{
//    int n,m;
//    cin >> n >> m;
//    cout << __gcd(n,m) << endl;
//}
//int main()
//{
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        solution();
//    }
//}
//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//bool isPrime(int n)
//{
//    if(n==1)
//    {
//        return false;
//    }
//    for(int i=2;i<=sqrt(n);i++)
//    {
//        if(n%i==0)
//        {
//            return false;
//        }
//    }
//    return true;
//}
//void solution()
//{
//    int n;
//    cin >> n;
//    if(n==1)
//    {
//        cout << "-1" << endl;
//        return;
//    }
//    if(isPrime(n))
//    {
//        cout << "-1" << endl;
//    }
//    else if(isPrime(sqrt(n)) && floor(sqrt(n))==ceil(sqrt(n)))
//    {
//        cout << "-1" << endl;
//    }
//    else
//    {
//        int a=1;
//        int b;
//        int c;
//        for(int i=2;i<=sqrt(n);i++)
//        {
//            if(n%i==0)
//            {
//                b=i;
//                break;
//            }
//        }
//        c=n/b;
//        cout << a << " " << b << " " << c << " " << endl;
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
//}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solution()
{
    
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solution();
    }
}