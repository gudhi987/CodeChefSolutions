//#include <iostream>
//#include <bits/stdc++.h>
//#define ll long long int
//#define big 1000000007
//using namespace std;
//void solution()
//{
//    int x,y;
//    cin >> x >> y;
//    int req=ceil(static_cast<double>(y)/5);
//    if(req<=x)
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
//    for(int i=0;i<n;i++)
//    {
//        cin >> a[i];
//    }
//    int minimum=INT_MAX;
//    for(int i=0;i<n;i++)
//    {
//        minimum=min(minimum,a[i]);
//    }
//    int minimum_count=0;
//    for(int i=0;i<n;i++)
//    {
//        if(a[i]==minimum)
//        {
//            minimum_count++;
//        }
//    }
//    if(minimum==1 && minimum_count==n)
//    {
//        cout << "0" << endl;
//    }
//    else
//    {
//        cout << n-minimum_count << endl;
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
//    vector<int>req;
//    int temp=n*n;
//    while(temp>0)
//    {
////        for(int i=0;i<n;i++)
////        {
////            cout << temp << " ";
//            if(temp>0)
//            {
//                req.push_back(temp);
//            }
//            else
//            {
//                break;
//            }
//            temp-=2;
////        }
////        cout << endl;
//    }
//    temp=n*n-1;
//    while(temp>0)
//    {
//        if(temp>0)
//            {
//                req.push_back(temp);
//            }
//            else
//            {
//                break;
//            }
//            temp-=2;
//    }
////    for(int i=0;i<req.size();i++)
////    {
////        cout << req[i] << " ";
////    }
//    int count=0;
//    while(count<n)
//    {
//        for(int i=count*n;i<(count+1)*n;i++)
//        {
//            cout << req[i] << " ";
//        }
//        cout << endl;
//        count++;
//    }
////    cout << endl;
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
//    vector<int>b(n);
//    for(int i=0;i<n;i++)
//    {
//        cin >> a[i];
//    }
//    for(int i=0;i<n;i++)
//    {
//        cin >> b[i];
//    }
//    int flag=0;
//    for(int i=0;i<n;i++)
//    {
//        if(a[i]!=b[i])
//        {
//            flag=1;
//            break;
//        }
//    }
//    if(flag==0)
//    {
//        cout << "YES" << endl;
//        return ;
//    }
//    int flag2=0;
//    for(int i=0;i<n;i++)
//    {
//        if(a[i]==1 && b[i]==0)
//        {
//            flag2=1;
//            break;
//        }
//    }
//    if(flag2==1)
//    {
//        cout << "NO" << endl;
//        return ;
//    }
//    if(a[n-1]==0 && b[n-1]==1)
//    {
//        cout << "NO" << endl;
//        return ;
//    }
//    if(a[0]==0 && b[0]==1)
//    {
//        cout << "NO" << endl;
//        return ;
//    }
//    int count0_1=0;
//    int count1_1=0;
//    int count0_2=0;
//    int count1_2=0;
//    for(int i=0;i<n;i++)
//    {
//        if(a[i]==0)
//        {
//            count0_1++;
//        }
//        else
//        {
//            count1_1++;
//        }
//        if(b[i]==0)
//        {
//            count0_2++;
//        }
//        else
//        {
//            count1_2++;
//        }
//    }
//    if(count0_1==n && count1_2>0)
//    {
//        cout << "NO" << endl;
//        return ;
//    }
//    if(count1_1==n && count0_2>0)
//    {
//        cout  << "NO" << endl;
//        return ;
//    }
//    if(count0_1>count0_2 && count1_1<count1_2)
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
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    
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