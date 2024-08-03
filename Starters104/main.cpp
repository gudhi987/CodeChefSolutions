//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    if(n%2==0)
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
//    int n,k;
//    cin >> n >> k;
//    vector<int>a(n);
//    for(int i=0;i<n;i++)
//    {
//        cin >> a[i];
//    }
//    int sum=accumulate(a.begin(),a.end(),0);
//    if(sum<n)
//    {
//        cout << "NO" << endl;
//    }
//    else
//    {
//        int received_per_person=sum/n;
//        int remaining=sum%n;
//        vector<int>arr(n,received_per_person);
//        int start=n-1;
//        while(remaining>0)
//        {
//            arr[start]++;
//            start--;
//            remaining--;
//        }
//        if(arr[n-1]-arr[0]<=k)
//        {
//            cout << "YES" << endl;
//        }
//        else
//        {
//            cout << "NO" << endl;
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
    int x,y,k;
    cin >> x >> y >> k;
    if(x>y)
    {
        swap(x,y);
    }
    int count=1;
    while(count<=k)
    {
        if(x==y)
        {
            break;
        }
        int gcd=__gcd(x,y);
        y=x;
        x=gcd;
//        cout << x << " "<< y << endl;
        count+=2;
    }
    cout << x+y << endl;
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
