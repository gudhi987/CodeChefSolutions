//#include <bits/stdc++.h>
//using namespace std;
//
//void solution()
//{
//    int n;
//    cin >> n;
//    if(n==1 || n==2 || n==5)
//    {
//        cout << "NO" << endl;
//    }
//    else
//    {
//        cout << "YES" << endl;
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


//#include <bits/stdc++.h>
//using namespace std;
//
//void solution()
//{
//    int n;
//    cin >> n;
//    vector<int>a(n);
//    unordered_set<int>st;
//    for(int i=0;i<n;i++)
//    {
//        cin >> a[i];
//        st.insert(a[i]);
//    }
//    if(n==4)
//    {
//        if(a[0]+a[1]==a[2]+a[3])    cout << "NO" << endl;
//        else    cout << "YES" << endl;
//    }
//    else
//    {
//        if(st.size()>=2)
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


//#include <bits/stdc++.h>
//using namespace std;
//
//void solution()
//{
//    int n;
//    cin >> n;
//    vector<int>a(n);
//    for(int i=0;i<n;i++)
//    {
//        cin >> a[i];
//    }
//    int count0=0;
//    int count1=0;
//    for(int i=0;i<n;i++)
//    {
//        if(a[i]==0) count0++;
//        else    count1++;
//    }
//    cout << min(count0,count1) << endl;
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
//void printdeque(deque<int>d)
//{
//    while(!d.empty())
//    {
//        cout << d.front() << " ";
//        d.pop_front();
//    }
//    cout << endl;
//}
//void solution()
//{
//    int n,m;
//    cin >> n >> m;
//    vector<int>a(n);
//    for(int i=0;i<n;i++)
//    {
//        cin >> a[i];
//    }
//    sort(a.begin(),a.end(),greater<int>());
//    int maximum=a[0];
//    int idx=-1;
//    for(int i=0;i<n;i++)
//    {
//        if(a[i]!=maximum)
//        {
//            idx=i;
//            break;
//        }
//    }
//    if(idx==-1)
//    {
//        cout << "0" << endl;
//    }
//    else
//    {
//        int k=min(m,n-idx);
//        int ans=0;
//        int curr_sum=0;
//        deque<int>dq;
//        for(int i=idx;i<n;i++)
//        {
//            if(dq.size()<k)
//            {
//                int rem_to_be_added=maximum-a[i]-curr_sum;
//                ans+=rem_to_be_added;
//                curr_sum+=rem_to_be_added;
//                dq.push_back(rem_to_be_added);
//            }
//            else
//            {
//                int front=dq.front();
//                dq.pop_front();
//                curr_sum-=front;
//                
//                int rem_to_be_added=maximum-a[i]-curr_sum;
//                ans+=rem_to_be_added;
//                curr_sum+=rem_to_be_added;
//                dq.push_back(rem_to_be_added);
//            }
//        }
//        cout << ans << endl;
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

void solution()
{
    int x,y;
    cin >> x >> y;
    if(y>=x)
    {
        cout << "1" << endl;
    }
    else
    {
        int ans=ceil(static_cast<double>(x)/(y+1));
        cout << ans << endl;
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