//#include <iostream>
//#include <iomanip>
//#include <fstream>
//#include <sstream>
//#include <cstdlib>
//#include <cmath>
//#include <cctype>
//#include <vector>
//#include <string>
//#include <climits>
//#include <algorithm>
//#define ll long long int
//using namespace std;
//void solution()
//{
//    int n;
//    cin >>n ;
//    string s;
//    cin >> s;
//    string r;
//    cin >> r;
//    int count=0;
//    for(int i=0;i<n;i++)
//    {
//        char temp1=s[i];
//        char temp2=r[i];
//        if(temp1!=temp2)
//        {
//            count++;
//        }
//    }
//        if(count%2==0)
//        {
//            cout << "1" << endl;
//        }
//        else
//        {
//            cout << "0" << endl;
//        }
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
//#include <iomanip>
//#include <fstream>
//#include <sstream>
//#include <cstdlib>
//#include <cmath>
//#include <cctype>
//#include <vector>
//#include <string>
//#include <climits>
//#include <algorithm>
//#define ll long long int
//using namespace std;
//void solution()
//{
//    int min1,min2,min3;
//    cin >> min1 >> min2 >> min3;
//    if(min1==min2)
//    {
//        if(min2>=min3)
//        {
//            cout << "Yes" << endl;
//        }
//        else
//        {
//            cout << "No" << endl;
//        }
//    }
//    else
//    {
//        if(min1==min3)
//        {
//            if(min3>=min2)
//            {
//                cout << "Yes" << endl;
//            }
//            else
//            {
//                cout << "No" << endl;
//            }
//        }
//        else
//        {
//            cout << "No" << endl;
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
//#include <iostream>
//#include <iomanip>
//#include <fstream>
//#include <sstream>
//#include <cstdlib>
//#include <cmath>
//#include <cctype>
//#include <vector>
//#include <string>
//#include <climits>
//#include <algorithm>
//#include <map>
//#define ll long long int
//using namespace std;
//void solution()
//{
//    ll n;
//    cin >> n;
//    ll a[n];
//    map <ll,ll> mp;
//    vector <ll> req;
//    for(ll i=0;i<n;i++)
//    {
//        cin >> a[i];
//    }
//    for(ll i=0;i<n;i++)
//    {
//        mp[a[i]]++;
//    }
//    for(auto it=mp.begin();it!=mp.end();it++)
//    {
//        req.push_back(it->second);
//    }
//    if(req.size()==1)
//    {
//        if(req[0]%2==0)
//        {
//            cout << req[0]/2 << endl;
//        }
//        else
//        {
//            cout << req[0]/2 + 1 << endl;
//        }
//    }
//    else
//    {
//        sort(req.begin(),req.end(),greater <int> ());
////        cout << "[";
////        for(ll i=0;i<req.size()-1;i++)
////        {
////            cout << req[i] << " ";
////        }
////        cout << req[req.size()-1] << "]" << endl;
//        ll temp;
//        if(req[0]%2==0)
//        {
//            temp=req[0]/2;
//            cout << max(temp,req[1]) << endl;
//        }
//        else
//        {
//            temp=req[0]/2 + 1;
//            cout << max(temp,req[1]) << endl;
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
#include <iomanip>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>
#define ll long long int
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