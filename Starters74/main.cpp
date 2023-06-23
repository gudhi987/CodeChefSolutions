//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    int b[n];
//    for(int i=0;i<n;i++)
//    {
//        cin >> b[i];
//    }
//    int count0=0;
//    for(int i=0;i<n;i++)
//    {
//        if(b[i]==0)
//        {
//            count0++;
//        }
//    }
//    if(count0%2==0)
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
//    if(find(a.begin(),a.end(),0)!=a.end())
//    {
//        cout << "-1" << endl;
//    }
//    else
//    {
//        sort(a.begin(),a.end());
//        if(a[0]>0)
//        {
//            cout << a[0]-1 << endl;
//        }
//        else if(a[n-1]<0)
//        {
//            cout << abs(a[n-1])-1 << endl;
//        }
//        else
//        {
//            int index;
//            for(int i=0;i<n;i++)
//            {
//                if(a[i]>0)
//                {
//                    index=i;
//                    break;
//                }
//            }
//            int ans=min(abs(a[index-1]),a[index]);
//            cout << ans-1 << endl;
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
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int a,b;
    cin >> a >> b;
    int ans=a-__gcd(b,a);
    cout << ans << endl;
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