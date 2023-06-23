//#include <iostream>
//#include <iomanip>
//#include <fstream>
//#include <sstream>
//#include <cstdlib>
//#include <cmath>
//#include <cctype>
//#include <vector>
//#include <string>
//using namespace std;
//void solution()
//{
//    int x,y;
//    cin >> x >> y;
//    if(y<=x)
//    {
//        cout << y << endl;
//    }
//    else
//    {
//        cout << x << endl;
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
//using namespace std;
//void solution()
//{
//    int x,y;
//    cin >> x >> y;
//    int res=(4*x)+y;
//    cout << res << endl;
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
//using namespace std;
//void solution()
//{
//    int x,y,n,r;
//    cin >> x >> y >> n >> r;
//    int MaxBurgers=(r/x);
//    if(MaxBurgers<n)
//    {
//        cout << "-1" << endl;
//    }
//    else
//    {
//         int premium=r/y;
//         if(premium>=n)
//         {
//             cout << "0 " << n << endl;
//         }
//         else
//         {
//            int b=(r-n*x)/(y-x);
//            b=min(b,n);
//            cout << n-b << " " << b << endl;
//         }
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
//using namespace std;
//void solution()
//{
//    long int a,b,n;
//    cin >> a >> b >> n;
//    if(a%b==0)
//    {
//        cout << "-1" << endl;
//    }
//    else
//    {
//        int num;
//        if(n%a==0)
//        {
//            num=n;
//        }
//        else
//        {
//            num=n+a-(n%a);
//        }
//        if(num%b!=0)
//        {
//            cout << num << endl;
//        }
//        else
//        {
//            cout << num + a << endl;
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
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    int arr[n];
//    for(int i=0;i<n;i++)
//    {
//        cin >> arr[i];
//    }
//    int total=0;
//    int ConsecutiveOne=0;
//    for(int i=0;i<n;i++)
//    {
//        if(i==0)
//        {
//            if(arr[i]==1)
//            {
//                ConsecutiveOne=1;
//            }
//        }
//        else
//        {
//            if(arr[i]==1)
//            {
//                if(arr[i-1]==1)
//                {
//                    ConsecutiveOne++;
//                }
//                else
//                {
//                    total+=((ConsecutiveOne+1)*(ConsecutiveOne))/2;
//                    ConsecutiveOne=1;
//                }
//            }
//            else
//            {
//                total+=((ConsecutiveOne+1)*(ConsecutiveOne))/2;
//                ConsecutiveOne=0;
//            }
//        }
//    }
//    total+=((ConsecutiveOne+1)*(ConsecutiveOne))/2;
//    cout << total << endl;
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
//using namespace std;
//void solution()
//{
//    
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
//        if(n>=max(a,b))
//        {
//            while(n>0)
//            {
//                if(n%a==0)
//                {
//                    if(n%b!=0)
//                    {
//                        cout << n << endl;
//                        break;
//                    }
//                    else
//                    {
//                        n+=a;
//                    }
//                }
//                else
//                {
//                    n++;
//                }
//            }
//        }
//        else
//        {
//            long int temp=a;
//            while(temp>0)
//            {
//                if(temp%b==0)
//                {
//                    temp+=a;
//                }
//                else
//                {
//                    cout << temp << endl;
//                    break;
//                }
//            }
//        
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
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    vector <int> b=v;
    sort(b.begin(),b.end());
    ll temp=0;
    for(ll i=0;i<n;i++)
    {
        if(v[i]==b[temp])
        {
            temp++;
        }
    }
    for(ll i=0;i<n;i++)
    {
        if(v[i]==b[temp])
        {
            temp++;
        }
    }
    if(temp>=n)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
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