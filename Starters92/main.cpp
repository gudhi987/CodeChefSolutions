//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//void solution()
//{
//    int B1,B2,B3;
//    cin >> B1 >> B2 >> B3;
//    int empty_count=0;
//    if(B1==0)
//    {
//        empty_count++;
//    }
//    if(B2==0)
//    {
//        empty_count++;
//    }
//    if(B3==0)
//    {
//        empty_count++;
//    }
//    if(empty_count<=1)
//    {
//        cout << "Not now" << endl;
//    }
//    else
//    {
//        cout << "Water filling time" << endl;
//    }
//}
//int main() {
//	int t;
//    cin >> t;
//    while(t--)
//    {
//        solution();
//    }
//	return 0;
//}

//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//void solution()
//{
//    int n,k,l;
//    cin >> n >> k >> l;
//    vector<int>songsofl;
//    vector<vector<int>>song;
//    for(int i=0;i<n;i++)
//    {
//        int a,b;
//        cin >> a >> b;
//        vector<int>temp={a,b};
//        song.push_back(temp);
//        if(b==l)
//        {
//            songsofl.push_back(a);
//        }
//    }
//    if(songsofl.size()<k)
//    {
//        cout << "-1" << endl;
//    }
//    else
//    {
//        sort(songsofl.begin(),songsofl.end(),greater<int>());
//        long long int ans=0;
//        for(int i=0;i<k;i++)
//        {
//            ans+=songsofl[i];
//        }
//        cout << ans << endl;
//    }
//    
//}
//int main() {
//	int t;
//    cin >> t;
//    while(t--)
//    {
//        solution();
//    }
//	return 0;
//}
//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//void solution()
//{
//    int w,l;
//    cin >> w >> l;
//    if(w%2!=0 && l%2!=0)
//    {
//        cout << "NO" << endl;
//    }
//    else
//    {
//        cout << "YES" << endl;
//    }
//}
//int main() {
//	int t;
//    cin >> t;
//    while(t--)
//    {
//        solution();
//    }
//	return 0;
//}
#include <iostream>
#include <bits/stdc++.h>
#define big 1000000007
#define ll long long int
using namespace std;
ll npr(int n,int r)
{
    ll ans=1;
    for(int i=n;i>=n-r+1;i--)
    {
        ans=(ans*i)%big;
    }
    return ans;
}
ll power(int k,int n)
{
    ll ans=1;
    for(int i=1;i<=n;i++)
    {
        ans=(ans*k)%big;
    }
    return ans;
}
void solution()
{
    int n,k;
    cin >> n >> k;
    if(k==1)
    {
        cout << "1" << endl;
        return ;
    }
    if(k>=n)
    {
        cout << npr(k,n) << endl;
    }
    else
    {
        cout << npr(k,k) << endl;
    }
}
int main() {
	int t;
    cin >> t;
    while(t--)
    {
        solution();
    }
	return 0;
}
