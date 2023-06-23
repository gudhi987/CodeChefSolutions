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
//    if(temp==1 || temp==2)
//    {
//        cout << "1" << endl;
//    }
//    else
//    {
//        int temp2=(x+y)/2;
//        int res=max(abs(x-temp2),abs(y-temp2));
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
//    int n;
//    cin >> n;
//    if(n==3)
//    {
//        cout << "3 2 1" << endl;
//    }
//    else if(n==4)
//    {
//        cout << "3 2 1 4" << endl;
//    }
//    else
//    {
//        vector <int> req(n);
//        int temp=1;
//        for(int i=2;i<n-2;i++)
//        {
//            req[i]=temp;
//            temp++;
//        }
//        req[1]=temp;
//        temp++;
//        req[n-2]=temp;
//        temp++;
//        req[0]=temp;
//        temp++;
//        req[n-1]=temp;
//        for(int i=0;i<n-1;i++)
//        {
//            cout << req[i] << " ";
//        }
//        cout << req[n-1] << endl;
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
    int n,x;
    cin >> n >> x;
    if(n>x)
    {
        cout << "-1" << endl;
    }
    else
    {
        if(n==1 && x==1)
        {
            cout << "1" << endl;
        }
        else
        {
            int temp=x-n+1;
            vector <int> req (n);
            req[0]=temp;
            int temp2=1;
            for(int i=1;i<n;i++)
            {
                if(temp==temp2)
                {
                    temp2++;
                    req[i]=temp2;
                }
                else
                {
                    req[i]=temp2;
                }
                temp2++;
            }
            for(int i=0;i<n-1;i++)
            {
                cout << req[i] << " ";
            }
            cout << req[n-1] << endl;
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