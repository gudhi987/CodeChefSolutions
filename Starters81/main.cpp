//#include <iostream>
//#include <bits/stdc++.h>
//#define ll long long int
//#define big 1000000007
//using namespace std;
//void solution()
//{
//    int x,y;
//    cin >> x >> y;
//    if(x<=8 && x*y<=500)
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
//#define ll long long int
//#define big 1000000007
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    vector<int> a(n);
//    long long int sum=0;
//    for(int i=0;i<n;i++)
//    {
//        cin >> a[i];
//        sum+=a[i];
//    }
//    if(sum%2==0)
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
#define ll long long int
#define big 1000000007
using namespace std;
void solution()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    if(n%2!=0)
    {
        cout << "-1" << endl;
    }
    else
    {
        int count_0=0,count_1=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                count_0++;
            }
            else
            {
                count_1++;
            }
        }
        if(count_1==2 && count_0==0)
        {
            cout << "-1" << endl;
            return ;
        }
        if(count_0==n)
        {
            cout << "-1" << endl;
        }
        else if(count_0==count_1)
        {
            cout << "0" << endl;
        }
        else if(count_0>count_1)
        {
            cout <<  n/2-count_1 << endl;
        }
        else
        {
            int temp=ceil(static_cast<double>(n/2 - count_0)/2);
            count_1-=temp*2;
            count_0+=temp*2;
            if(count_0==count_1)
            {
                cout << temp << endl;
            }
            else
            {
                cout << temp + n/2 - count_1 << endl;
            }
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