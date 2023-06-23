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
//#include <sstream>
//#include <fstream>
//using namespace std;
//void solution()
//{
//    int x,y;
//    cin >> x >> y;
//    if(x>=y)
//    {
//        cout << "Yes" << endl;
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
//#include <sstream>
//#include <fstream>
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    cout << (3*n) << endl; 
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
//#include <sstream>
//#include <fstream>
//using namespace std;
//void solution()
//{
//    int x;
//    cin >> x;
////    int count=0;
//    int temp1=x/10;
//    int temp2=x-(temp1*10);
//    cout << temp2 << endl;
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
//#include <sstream>
//#include <fstream>
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    if(n%2==0 || n%7==0)
//    {
//        cout << "Yes" << endl;
//    }
//    else
//    {
//        if(n>7)
//        {
//            cout << "Yes" << endl;
//        }
//        else
//        {
//            if(n%2 != 0)
//            {
//                cout << "No" << endl;
//            }
//        }
//        
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
//#include <sstream>
//#include <fstream>
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    vector <int> arr(n);
//    for(int i=0;i<n;i++)
//    {
//        cin >> arr[i];
//    }
//    if(arr[0]==1 && arr[n-1]==n)
//    {
//        cout << "0" << endl;
//    }
//    else if(arr[0]==1 && arr[n-1]!=n)
//    {
//        int temp;
//        for(int i=0;i<n-1;i++)
//        {
//            if(arr[i]==n)
//            {
//                temp=i;
//                break;
//            }
//        }
//        cout << (n-temp-1) << endl;
//    }
//    else if(arr[n-1]==n && arr[0]!=1)
//    {
//        int temp;
//        for(int i=0;i<n-1;i++)
//        {
//            if(arr[i]==1)
//            {
//                temp=i;
//                break;
//            }
//        }
//        cout << temp << endl;
//    }
//    else
//    {
//        int temp1;
//        for(int i=0;i<n-1;i++)
//        {
//            if(arr[i]==n)
//            {
//                temp1=i;
//                break;
//            }
//        }
//        int temp3=(n-temp1-1);
//        int temp2;
//        for(int i=0;i<n;i++)
//        {
//            if(arr[i]==1)
//            {
//                temp2=i;
//                break;
//            }
//        }
//        int temp4=temp2;
//        int count=min(temp3,temp4);
//        if(temp3>temp4)
//        {
//            for(int i=0;i<n;i++)
//            {
//                if(arr[0]==1)
//                {
//                    break;
//                }
//                else
//                {
//                    if(arr[i]==1)
//                    {
//                        int temp5=arr[i];
//                        arr[i]=arr[i-1];
//                        arr[i-1]=temp5;
//                    }
//                }
//            }
//            int temp6;
//            for(int i=0;i<n;i++)
//            {
//                if(arr[i]==n)
//                {
//                    temp6=i;
//                    break;
//                }
//            }
//            count+=(n-temp6-1);
//            cout << count << endl;
//        }
//        else
//        {
//            for(int i=0;i<n;i++)
//            {
//                if(arr[n-1]==n)
//                {
//                    break;
//                }
//                else
//                {
//                    if(arr[i]==n)
//                    {
//                        int temp5=arr[i];
//                        arr[i]=arr[i+1];
//                        arr[i+1]=temp5;
//                    }
//                }
//            }
//            int temp6;
//            for(int i=0;i<n;i++)
//            {
//                if(arr[i]==1)
//                {
//                    temp6=i;
//                    break;
//                }
//            }
//            count+=temp6;
//            cout << count << endl;
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
//#include <iomanip>
//#include <unordered_map>
//#include <sstream>
//#include <fstream>
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    vector <int> h(n);
//    for(int i=0;i<n;i++)
//    {
//        cin >> h[i];
//    }
//    unordered_map <int,int> mp;
//    int mx=0;
//    for(int i=0;i<n;i++)
//    {
//        mp[h[i]]++;
//        mx=max(mx,h[i]);
//    }
//    int count=0;
//    int mxcount=0;
//    for(auto it=mp.begin();it!=mp.end();it++)
//    {
//        if(it->second==1)
//        {
//            count++;
//        }
//        mxcount=max(mxcount,it->second);
//    }
////    if(count%2 !=0)
////    {
////        cout << count/2 + 1 << endl;
////    }
////    else
////    {
////        cout << count/2 << endl;
////    }
//    if(count%2!=0)
//    {
//        int y=(count+1)/2;
//        if(mp[mx]==1)
//        {
//            if(mxcount==2)
//            {
//                y++;
//            }
//        }
//        cout << y << endl;
//    }
//    else
//    {
//        int y=count/2;
//        cout << y << endl;
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
#include <sstream>
#include <fstream>
using namespace std;
void solution()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string req;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            req.push_back(s[i]);
        }
        else
        {
            if(i%2==0)
            {
                if(s[i]==s[i-1])
                {
                    flag=1;
                    break;
                }
                req.push_back(s[i]);
            }
            else
            {
                req+=req;
                i=(2*i);
                if(i>n)
                {
                    flag=1;
                    break;
                }
                string temp=s.substr(0,i);
                if(req!=temp)
                {
                    flag=1;
                    break;
                }
                i=i-1;
            }
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