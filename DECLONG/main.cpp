//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//void solution()
//{
//    int x,y,k;
//    cin >> x >> y >> k;
//    cout << ceil(static_cast<double>(abs(x-y))/k) << endl;
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
//    string a;
//    cin >> a;
//    string b;
//    cin >> b;
//    int a0=0;
//    int a1=0;
//    int b0=0;
//    int b1=0;
//    for(int i=0;i<a.length();i++)
//    {
//        if(a[i]=='0')
//        {
//            a0++;
//        }
//        else
//        {
//            a1++;
//        }
//    }
//    for(int i=0;i<b.length();i++)
//    {
//        if(b[i]=='0')
//        {
//            b0++;
//        }
//        else
//        {
//            b1++;
//        }
//    }
//    int common0=min(a0,b1);
//    int common1=min(a1,b0);
//    string req;
//    for(int i=0;i<common0+common1;i++)
//    {
//        req+='1';
//    }
//    for(int i=0;i<b.length()-common0-common1;i++)
//    {
//        req+='0';
//    }
//    cout << req << endl;
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
//    int n,k;
//    cin >> n >> k;
//    vector<int> arr(n);
//    for(int i=0;i<n;i++)
//    {
//        cin >> arr[i];
//    }
//    long long int product=1;
//    int flag=0;
//    for(int i=0;i<n;i++)
//    {
//        product*=arr[i];
//        if(product%k==0)
//        {
//            flag=1;
//            break;
//        }
//        else
//        {
//            product=product%k;
//        }
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
//    return 0;
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
    return 0;
}