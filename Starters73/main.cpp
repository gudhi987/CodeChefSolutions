//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    int flag=0;
//    while(n>0)
//    {
//        int rem=n%10;
//        if(rem==7)
//        {
//            flag=1;
//            break;
//        }
//        n/=10;
//    }
//    if(flag==1)
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
//}
//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//void solution()
//{
//    int n,y;
//    cin >> n >> y;
//    int a[n];
//    for(int i=0;i<n;i++)
//    {
//        cin >> a[i];
//    }
//    int req=a[0];
//    for(int i=1;i<n;i++)
//    {
//        req=req|a[i];
//    }
//    if(y<req)
//    {
//        cout << "-1" << endl;
//    }
//    else if(y==req)
//    {
//        cout << "0" << endl;
//    }
//    else
//    {
//        if(req==0)
//        {
//            cout << y << endl;
//        }
//        else
//        {
//            int k=floor(log2(req));
//            if(y>=pow(2,k+1))
//            {
//                if((y&req)==req)
//                {
//                    cout << y-req << endl;
//                }
//                else
//                {
//                    cout << "-1" << endl;
//                }
//            }
//            else
//            {
//                int ans;
//                for(int i=1;i<pow(2,k+1);i++)
//                {
//                    if((req|i)==y)
//                    {
//                        ans=i;
//                        break;
//                    }
//                }
//                cout << ans << endl;
//            }
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