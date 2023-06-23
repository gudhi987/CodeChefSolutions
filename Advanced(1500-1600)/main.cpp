//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    vector<int> a(n);
//    for(int i=0;i<n;i++)
//    {
//        cin >> a[i];
//    }
//    if(n==2)
//    {
//        cout << "2" << endl;
//    }
//    else
//    {
//        int overallgcd=a[0];
//        for(int i=1;i<n;i++)
//        {
//            overallgcd=__gcd(overallgcd,a[i]);
//            if(overallgcd==1)
//            {
//                break;
//            }
//        }
//        if(overallgcd!=1)
//        {
//            cout << n << endl;
//        }
//        else
//        {
//            
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
//}
//Subarray permutations
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n,k;
    cin >> n >> k;
    if(n==1)
    {
        if(k==1)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    else
    {
        if(k<2 || k>n)
        {
            cout << "-1" << endl;
        }
        else
        {
            for(int i=1;i<k;i++)
            {
                cout << i << " ";
            }
            for(int i=n;i>=k;i--)
            {
                cout << i << " ";
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
}