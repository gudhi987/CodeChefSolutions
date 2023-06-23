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
//    int x;
//    cin >> x;
//    if(x<=100)
//    {
//        cout << x << endl;
//    }
//    else if(x>100 && x<=1000)
//    {
//        int temp=x-25;
//        cout << max(0,temp) << endl;
//    }
//    else if(x>1000 && x<=5000)
//    {
//        cout << x-100 << endl;
//    }
//    else
//    {
//        cout << x-500 << endl;
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
//    int a,b;
//    cin >> a >> b;
//    if(a==b)
//    {
//        cout << "YES" << endl;
//    }
//    else
//    {
//        int flag=0;
//        while(a<=50 && b<=50)
//        {
//            if(a>b)
//            {
//                b=b*2;
//            }
//            else if(a<b)
//            {
//                a=a*2;
//            }
//            else
//            {
//                flag=1;
//                break;
//            }
//        }
//        if(flag==1)
//        {
//            cout << "YES" << endl;
//        }
//        else
//        {
//            cout << "NO" << endl;
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
//    int p[n-1];
//    for(int i=0;i<n-1;i++)
//    {
//        cin >> p[i];
//    }
//    long long int res=0;
//    if(n==2)
//    {
//        res=2*p[0];
//        cout << res << endl;
//    }
//    else
//    {
//        sort(p,p+n-1);
//        res=p[0]+p[n-2];
//        for(int i=1;i<n-1;i++)
//        {
//            if(p[i]>p[i-1])
//            {
//                res+=(p[i-1]+(p[i]-p[i-1]));
//            }
//            else
//            {
//                res+=(p[i]+(p[i-1]-p[i]));
//            }
//        }
//        cout << res << endl;
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
//    long long int x;
//    cin >> x;
//    if(x<5)
//    {
//        cout << "NO" << endl;
//    }
//    else
//    {
//        float root=sqrt(x);
//        long long int val=root/1;
//        int flag=0;
//        for(long long int i=1;i<=val;i++)
//        {
//            long long int temp=x-2*i;
//            if(temp>0)
//            {
//                if(temp%(i+2)==0)
//                {
//                    flag=1;
//                    break;
//                }
//            }
//            else
//            {
//                break;
//            }
//        }
//        if(flag==1)
//        {
//            cout << "YES" << endl;
//        }
//        else
//        {
//            cout << "NO" << endl;
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
using namespace std;
void solution()
{
    int n,x,y;
    cin >> n >> x >> y;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
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