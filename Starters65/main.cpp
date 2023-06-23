//#include <iostream>
//#include <math.h>
//using namespace std;
//bool isPrime(int num)
//{
//    int flag=0;
//    for(int i=2;i<=sqrt(num);i++)
//    {
//        if(num%i==0)
//        {
//            flag=1;
//            break;
//        }
//    }
//    if(flag==1)
//    {
//        return false;
//    }
//    else
//    {
//        return true;
//    }
//}
//void solution()
//{
//    int a,b;
//    cin >> a >> b;
//    if(isPrime(a+b))
//    {
//        cout << "ALICE" << endl;
//    }
//    else
//    {
//        cout << "BOB" << endl;
//    }
//}
//int main() {
//	// your code goes here
//	int t;
//	cin >> t;
//	while(t--)
//	{
//	    solution();
//	}
//	return 0;
//}
//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    int arr[2*n];
//    unordered_map<int,int>mp;
//    for(int i=0;i<2*n;i++)
//    {
//        cin >> arr[i];
//        mp[arr[i]]++;
//    }
//    if(mp.size()>=n)
//    {
//        int flag=1;
//        for(auto it=mp.begin();it!=mp.end();it++)
//        {
//            if(it->second>2)
//            {
//                flag=0;
//                break;
//            }
//        }
//        if(flag==0)
//        {
//            cout << "NO" << endl;
//        }
//        else
//        {
//            cout << "YES" << endl;
//        }
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
//int binarysearch(int num,int arr[])
//{
//    int start=0;
//    int n=sizeof(arr)/sizeof(arr[0]);
//    int end=n-1;
//    while(start<=end)
//    {
//        int mid=(start+end)/2;
//        if(arr[mid]==num)
//        {
//            return mid;
//        }
//        else if(arr[mid]>num)
//        {
//            end=mid-1;
//        }
//        else
//        {
//            start=mid+1;
//        }
//    }
//}
void solution()
{
    int n,k;
    cin >> n >> k;
    vector<int> arr (n);
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    if(mp.find(k)!=mp.end())
    {
        auto it=mp.find(k);
        if(it->second==1)
        {
            if(arr[n-1]==it->first)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
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