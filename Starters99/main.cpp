//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//void solution()
//{
//    int x,y,r;
//    cin >> x >> y >> r;
//    if(r==0)
//    {
//        cout << ceil(static_cast<double>(x)/y) << endl;
//    }
//    else
//    {
//        cout << ceil(static_cast<double>((r/30)+x)/y) << endl;
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
//    vector<int>arr(n);
//    for(int i=0;i<n;i++)
//    {
//        cin >> arr[i];
//    }
//    size_t max_count=0;
//    map<int,int>mp;
//    for(int i=0;i<n;i++)
//    {
//        auto it=mp.find(arr[i]);
//        if(it==mp.end())
//        {
//            mp[arr[i]]++;
//        }
//        else
//        {
//            mp.erase(arr[i]);
//        }
//        max_count=max(mp.size(),max_count);
//    }
////    max_count=max(max_count,count);
//    cout << max_count << endl;
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
//    vector<int>arr(n);
//    for(int i=0;i<n;i++)
//    {
//        cin >> arr[i];
//    }
//    sort(arr.begin(),arr.end());
//    long long int sum=0;
//    for(int i=0;i<n;i++)
//    {
//        sum+=arr[i];
//    }
//    cout << sum << " ";
//    for(int i=0;i<n-1;i++)
//    {
//        sum-=arr[i];
//        cout << sum << " ";
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


#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    vector<int>sums;
    for(int i=0;i<n-2;i++)
    {
        int sum=arr[i]+arr[i+1]+arr[i+2];
        int temp;
        if(sum%3==0)
        {
            temp=0;
        }
        else
        {
            temp=((sum/3)+1)*3 - sum;
        }
        sums.push_back(temp);
    }
//    cout << "Size: " << sums.size() << endl;
    for(int i=0;i<sums.size();i++)
    {
        cout << sums[i] << " ";
    }
    cout << endl;
    int ans=0;
    int size=sums.size();
    for(int i=0;i<(size/3)*3;i+=3)
    {
        ans+=max(sums[i],max(sums[i+1],sums[i+2]));
    }
    int temp_max=0;
    for(int i=(size/3)*3;i<size;i++)
    {
        temp_max=max(temp_max,sums[i]);
    }
    ans+=temp_max;
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
