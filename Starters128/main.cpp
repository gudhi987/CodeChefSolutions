//#include <bits/stdc++.h>
//using namespace std;
//
//void solution()
//{
//    int n;
//    cin >> n;
//    vector<int> arr(n);
//    for(int i=0;i<n;i++)
//    {
//        cin >> arr[i];
//    }
//    sort(arr.begin(),arr.end());
//    int ans=0;
//    for(int i=0;i<n;i++)
//    {
//        ans+=abs(arr[i]-i);
//    }
//    cout << ans << endl;
//}
//
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
//    vector<int> arr(n);
//    for(int i=0;i<n;i++)
//    {
//        cin >> arr[i];
//    }
//    
//    // Condition that not decreasing by more than a length 2
//    bool isPossible=true;
//    for(int i=0;i<n;i++)
//    {
//        int count=0,j=i+1;
//        while(j<n && arr[j]<arr[i])
//        {
//            count++;
//            j++;
//        }
//        if(count>=2)
//        {
//            isPossible=false;
//            break;
//        }
//    }
//    if(!isPossible)
//    {
//        cout << "NO" << endl;
//        return ;
//    }
//    
//    int maximum=0;
//    for(int i=1;i<n;i++)
//    {
//        if(arr[i]<arr[i-1])
//        {
//            maximum=max(maximum,arr[i-1]-arr[i]);
//        }
//    }
//    
//    for(int i=1;i<n;i++)
//    {
//        if(arr[i-1]>arr[i])
//        {
//            arr[i]+=maximum;
//        }
//    }
//    
////    for(int i=0;i<n;i++)
////    {
////        cout << arr[i] << " ";
////    }
////    cout << endl;
//    
//    bool flag=true;
//    for(int i=1;i<n;i++)
//    {
//        if(arr[i-1]>arr[i])
//        {
//            flag=false;
//            break;
//        }
//    }
//    if(flag)
//    {
//        cout << "YES" << endl;
//    }
//    else 
//    {
//        cout << "NO" << endl;
//    }
//}
//
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
int maxIncreasingLength(string &s)
{
    int ans=1;
    int count=1;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]>=s[i-1])
        {
            count++;
        }
        else
        {
            ans=max(ans,count);
            count=1;
        }
    }
    ans=max(ans,count);
    return ans;
}
void solution()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<string,int> mp;
    mp["00"]=0,mp["01"]=0,mp["10"]=0,mp["11"]=0;
    for(int i=0;i<n;i+=2)
    {
        string subStr=s.substr(i,2);
        mp[subStr]++;
    }
    string ans="";
    for(int i=0;i<mp["00"];i++)
    {
        ans=ans+"00";
    }
    if(mp["01"]>=1)
    {
        mp["01"]--;
        ans=ans+"01";
    }
    for(int i=0;i<mp["11"];i++)
    {
        ans=ans+"11";
    }
    if(mp["10"]>=1)
    {
        mp["10"]--;
        ans=ans+"10";
    }
    while(mp["01"]>0 && mp["10"]>0)
    {
        ans=ans+"0110";
        mp["01"]--;
        mp["10"]--;
    }
    while(mp["01"]>0)
    {
        ans=ans+"01";
        mp["01"]--;
    }
    while(mp["10"]>0)
    {
        ans=ans+"10";
        mp["10"]--;
    }
//    cout << ans << endl;
    cout << maxIncreasingLength(ans) << endl;
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