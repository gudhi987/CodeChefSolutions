//#include <bits/stdc++.h>
//using namespace std;
//
//void solution()
//{
//    int arr[5];
//    int count=0;
//    for(int i=0;i<5;i++)
//    {
//        cin >> arr[i];
//        if(arr[i]==1)
//        {
//            count++;
//        }
//    }
//    if(count>=4)
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
//
//


//#include <bits/stdc++.h>
//using namespace std;
//
//void solution()
//{
//    int n,k;
//    cin >> n >> k;
//    int arr[n];
//    for(int i=0;i<n;i++)
//    {
//        cin >> arr[i];
//    }
//    int ans=INT_MAX;
//    for(int i=0;i<n;i++)
//    {
//        if(arr[i]>=k)
//        {
//            ans=min(ans,arr[i]%k);
//        }
//    }
//    if(ans==INT_MAX)
//    {
//        cout << "-1" << endl;
//    }
//    else
//    {
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
//
//


//#include <bits/stdc++.h>
//using namespace std;
//
//void solution()
//{
//    int n,q;
//    cin >> n >> q;
//    string s;
//    cin >> s;
//    vector<char>characters(q);
//    for(int i=0;i<q;i++)
//    {
//        cin >> characters[i];
//    }
//    
//    int curr_max=1;
//    int count=1;
//    for(int i=1;i<n;i++)
//    {
//        if(s[i]==s[i-1])
//        {
//            count++;
//        }
//        else
//        {
//            curr_max=max(curr_max,count);
//            count=1;
//        }
//    }
//    curr_max=max(curr_max,count);
//    
//    cout << curr_max << " ";
//    
//    for(int i=0;i<q;i++)
//    {
//        if(characters[i]==s[s.length()-1])
//        {
//            count++;
//        }
//        else
//        {
//            curr_max=max(curr_max,count);
//            count=1;
//        }
//        s.push_back(characters[i]);
//        curr_max=max(curr_max,count);
//        cout << curr_max << " ";
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
//
//



//#include <bits/stdc++.h>
//using namespace std;
//
//void solution()
//{
//    int n,k;
//    cin >> n >> k;
//    
//    int available_swaps=k-1;
//    
//    set<int>st;
//    st.insert(1);
//    
//    int start=1;
//    cout << start << " ";
//    while(available_swaps>0)
//    {
//        start++;
//        cout << start << " ";
//        available_swaps--;
//    }
//    for(int i=start+1;i<=n;i++)
//    {
//        if(start%2==i%2)
//        {
//            cout << i << " ";
//        }
//    }
//    
//    for(int i=start+1;i<=n;i++)
//    {
//        if(start%2!=i%2)
//        {
//            cout << i << " ";
//        }
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
//
//


#include <bits/stdc++.h>
using namespace std;

void solution()
{
    long long int x,p;
    cin >> x >> p;
    for(long long int i=1;i<=100000;i++)
    {
        if(pow(__gcd(x,i),p)==static_cast<double>(x*i)/__gcd(x,i))
        {
            cout << x << " " << i << endl;
        }
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


