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
//#define ll long long int
//#define num 1000000007
//using namespace std;
//void solution()
//{
//    int x,p,q;
//    cin >> x >> p >> q;
//    cout << (p-q)*x << endl;
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
//#define ll long long int
//#define num 1000000007
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    vector <int> arr (n);
//    set <int> s;
//    for(int i=0;i<n;i++)
//    {
//        cin >> arr[i];
//        s.insert(arr[i]);
//    }
//    if(n%2==0)
//    {
//        cout << "YES" << endl;
//    }
//    else
//    {
//        if(s.size()==n)
//        {
//            cout << "NO" << endl;
//        }
//        else
//        {
//            cout << "YES" << endl;
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
#include <iomanip>
#define ll long long int
#define num 1000000007
using namespace std;
void solution()
{
    int n;
    cin >> n;
    vector<vector<int>>req (5);
    for(int i=0;i<n;i++)
    {
        int temp;
        cin >> temp;
        for(int j=0;j<temp;j++)
        {
            int t;
            cin >> t;
            req[temp-1].push_back(t);
        }
    }
    int flag=0;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            set<int>s;
            if(req[i].size()>0)
            {
                if(req[j].size()>0)
                {
                    s.insert(req[i].begin(),req[i].end());
                    s.insert(req[j].begin(),req[j].end());
                    if(s.size()==5)
                    {
                        flag=1;
                        break;
                    }
                }
            }
        }
        if(flag==1)
        {
            break;
        }
    }
    if(flag==1)
    {
        cout << "YES" << endl;
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