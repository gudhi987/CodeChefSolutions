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
//#include <iomanip>
//using namespace std;
//void solution()
//{
//    int n,m;
//    cin >> n >> m;
//    cout << n*m << endl;
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
//#include <iomanip>
//using namespace std;
//void solution()
//{
//    int x,y;
//    cin >> x >> y;
//    if(x==y)
//    {
//        cout << "0" << endl;
//    }
//    else if(x<y)
//    {
//        cout << y-x << endl;
//    }
//    else
//    {
//        cout << "0" << endl;
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
//#include <iomanip>
//#include <unordered_map>
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    vector <int> p (n);
//    for(int i=0;i<n;i++)
//    {
//        cin >> p[i];
//    }
//    unordered_map <int,int> mp;
//    for(int i=0;i<n;i++)
//    {
//        mp[p[i]]++;
//    }
//    int flag=0;
//    for(auto it=mp.begin();it!=mp.end();it++)
//    {
//        int temp1=it->first;
//        int temp2=it->second;
//        if(temp1==temp2)
//        {
//            flag=0;
//        }
//        else
//        {
//            flag=1;
//            break;
//        }
//    }
//    int sum=0;
//    for(auto it=mp.begin();it!=mp.end();it++)
//    {
//        sum=sum+(it->second);
//    }
//    if(flag==0 && sum==n)
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
#include <iomanip>
#include <unordered_map>
using namespace std;
void solution()
{
    int n;
    cin >> n;
    vector <int> a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    long long product;
    long long attacksum=0;
    long long defensesum=0;
    sort(a.begin(),a.end(),greater <int> ());
    if(n%2==0)
    {
        for(int i=0;i<(n/2);i++)
        {
            attacksum+=a[i];
        }
        for(int i=(n/2);i<n;i++)
        {
            defensesum+=(1000-a[i]);
        }
    }
    else
    {
        for(int i=0;i<((n+1)/2);i++)
        {
            attacksum+=a[i];
        }
        for(int i=((n+1)/2);i<n;i++)
        {
            defensesum+=(1000-a[i]);
        }
    }
    product=attacksum*defensesum;
    cout << product << endl;
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
//#include <iomanip>
//#include <unordered_map>
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    string s;
//    cin >> s;
//    int pos;
//    for(int i=0;i<n;i++)
//    {
//        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
//        {
//            pos=i;
//            if(pos>0)
//            {
////                for(int j=0;j<pos/2;j++)
////                {
////                    char temp=s[j];
////                    s[j]=s[pos-j-1];
////                    s[pos-j-1]=temp;
////                }
//            reverse(s.begin(),s.begin()+pos);
//            }
//        }
//    }
//    cout << s << endl;
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