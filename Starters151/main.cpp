#include <iostream>
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
#define ll long long int
using namespace std;
using namespace __gnu_pbds;

//void solution()
//{
//    int n;
//    cin >> n;
//    string s;
//    cin >> s;
//    int count_0=0,count_1=0;
//    for(auto c:s)
//    {
//        if(c=='1')
//        {
//            count_1++;
//        }
//        else
//        {
//            count_0++;
//        }
//    }
//    
//    int ans=0;
//    for(int i=1;i<=n;i++)
//    {
//        if(i<min(count_0,count_1))  continue;
//        if((count_0<=i && abs(i-count_0)%2==0) || (count_1<=i && abs(i-count_1)%2==0)) ans++;
//    }
//    cout << ans << endl;
//}

//void solution()
//{
//    int n;
//    cin >> n;
//    vector<double> positions(n);
//    for(int i=0;i<n;i++)
//    {
//        cin >> positions[i];
//    }
//    vector<double> speeds(n);
//    for(int i=0;i<n;i++)
//    {
//        cin >> speeds[i];
//    }
//    
//    vector<pair<double,double>> queries;
//    for(int i=0;i<n;i++)
//    {
//        queries.push_back({positions[i],speeds[i]});
//    }
//    
//    sort(queries.begin(),queries.end());
//    
//    vector<double> times(n);
//    for(int i=0;i<n;i++)
//    {
//        times[i]=queries[i].first/queries[i].second;
//    }
//    
//    int ans=0;
//    
//    double curr_speed=queries[n-1].second;
//    double curr_position=queries[n-1].first;
//    
//    for(int i=n-2;i>=0;i--)
//    {
//        double u=queries[i].second,v=curr_speed;
//        double x1=queries[i].first,x2=curr_position;
//        double time=(x2-x1)/(v-u);
//        if(time<=0 || x1<=(u*time))
//        {
//            ans++;
//            curr_speed=u;
//            curr_position=x1;
//        }
//    }
//    
//    ans++;
//    cout << ans << endl;
//}

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