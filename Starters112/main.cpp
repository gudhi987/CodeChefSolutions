//#include <bits/stdc++.h>
//using namespace std;
//
//void solution()
//{
//    int n,k;
//    cin >> n >> k;
//    int total_got=(n/(k+1))*k;
//    cout << n-total_got << endl;
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


//#include <bits/stdc++.h>
//using namespace std;
//
//void solution()
//{
//    int n;
//    cin >> n;
//    int A[n];
//    for(int i=0;i<n;i++)
//    {
//        cin >> A[i];
//    }
//    int B[n];
//    for(int i=0;i<n;i++)
//    {
//        cin >> B[i];
//    }
//    map<int,int>mp;
//    for(int i=0;i<n;i++)
//    {
//        if(mp.find(A[i])==mp.end())
//        {
//            mp[A[i]]=B[i];
//        }
//        else
//        {
//            mp[A[i]]=max(mp[A[i]],B[i]);
//        }
//    }
//    int ans=0;
//    for(auto it=mp.begin();it!=mp.end();it++)
//    {
//        ans+=max(0,it->second);
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
//    return 0;
//}


//#include <bits/stdc++.h>
//using namespace std;
//
//void solution()
//{
//    int n;
//    cin >> n;
//    int arr[n];
//    priority_queue<int,vector<int>,greater<int>>pq;
//    for(int i=0;i<n;i++)
//    {
//        cin >> arr[i];
//        pq.push(arr[i]);
//    }
//    int sum=pq.top();
//    vector<int>arr1;
//    vector<int>arr2;
//    arr1.push_back(pq.top());
//    pq.pop();
//    int count=0;
//    while(!pq.empty())
//    {
//        int top_ele=pq.top();
//        if(pq.top()>sum)
//        {
//            arr1.push_back(top_ele);
//            sum+=top_ele;
//        }
//        else
//        {
//            arr2.push_back(top_ele);
//        }
//        pq.pop();
//    }
//    count=arr2.size();
//    cout << count << endl;
//    for(int i=0;i<arr1.size();i++)
//    {
//        cout << arr1[i] << " ";
//    }
//    for(int i=0;i<arr2.size();i++)
//    {
//        cout << arr2[i] << " ";
//    }
//    cout << endl;
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


//#include <bits/stdc++.h>
//using namespace std;
//
//void solution()
//{
//    int n;
//    cin >> n;
//    string s;
//    cin >> s;
//    int idx=-1;
//    for(int i=0;i<n;i++)
//    {
//        if(s[i]=='0')
//        {
//            idx=i;
//            break;
//        }
//    }
//    if(idx==-1)
//    {
//        for(int i=0;i<n-1;i++)
//        {
//            cout << "IDK" << endl;
//        }
//        cout << "YES" << endl;
//    }
//    else
//    {
//        for(int i=0;i<idx;i++)
//        {
//            cout << "IDK" << endl;
//        }
//        for(int i=idx;i<n;i++)
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


#include <bits/stdc++.h>
using namespace std;

void solution(int s)
{
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    
}
int main()
{
    int t,s;
    cin >> t >> s;
    while(t--)
    {
        solution(s);
    }
    return 0;
}