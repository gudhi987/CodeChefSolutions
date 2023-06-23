//#include <iostream>
//#include <vector>
//#include <cstring>
//#include <string>
//#include <algorithm>
//#include <climits>
//#include <cfloat>
//#include <cmath>
//#include <cctype>
//#include <algorithm>
//#include <stack>
//#include <memory>
//#include <queue>
//#include <deque>
//#include <set>
//#include <iomanip>
//using namespace std;
//void solution()
//{
//    int n,m;
//    cin >> n >> m;
//    if(n%m==0)
//    {
//        int temp=n/m;
//        if(temp%2==0)
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
//        cout << "No" << endl;
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
//#include <vector>
//#include <cstring>
//#include <string>
//#include <algorithm>
//#include <climits>
//#include <cfloat>
//#include <cmath>
//#include <cctype>
//#include <algorithm>
//#include <stack>
//#include <memory>
//#include <queue>
//#include <deque>
//#include <set>
//#include <iomanip>
//using namespace std;
//void solution()
//{
//    int x,y;
//    cin >> x >> y;
//    int temp=abs(x-y);
//    if(temp%2==0)
//    {
//        cout << "Yes" << endl;
//    }
//    else
//    {
//        cout << "No" << endl;
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
//#include <vector>
//#include <cstring>
//#include <string>
//#include <algorithm>
//#include <climits>
//#include <cfloat>
//#include <cmath>
//#include <cctype>
//#include <algorithm>
//#include <stack>
//#include <memory>
//#include <queue>
//#include <deque>
//#include <set>
//#include <iomanip>
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    for(int i=1;i<=n;i++)
//    {
//        int temp=n+1-i;
//        if(i==n)
//        {
//            cout << temp << endl;
//        }
//        else
//        {
//            cout << temp << " ";
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
#include <vector>
#include <cstring>
#include <string>
#include <algorithm>
#include <climits>
#include <cfloat>
#include <cmath>
#include <cctype>
#include <algorithm>
#include <stack>
#include <memory>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <iomanip>
using namespace std;
void solution()
{
    int n;
    cin >> n;
    int arr[n];
    map <int,int> mp;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    int temp=ceil(static_cast<float>(n)/2);
    int flag=0;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        if(it->second>temp)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
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