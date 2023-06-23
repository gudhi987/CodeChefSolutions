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
//#include <map>
//#include <iomanip>
//#define ll long long int
//#define big 1000000007
//using namespace std;
//void solution()
//{
//    int a,b,c;
//    cin >> a >> b >> c;
//    int oddcount=0;
//    if(a%2==1)
//    {
//        oddcount++;
//    }
//    if(b%2==1)
//    {
//        oddcount++;
//    }
//    if(c%2==1)
//    {
//        oddcount++;
//    }
//    if(oddcount==0)
//    {
//        cout << "NO" << endl;
//    }
//    else if(oddcount==1)
//    {
//        cout << "YES" << endl;
//    }
//    else if(oddcount==2)
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
#define ll long long int
#define big 1000000007
using namespace std;
void solution()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans=0;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
        {
            ans++;
        }
    }
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