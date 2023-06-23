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
//#define big 1000000007
//using namespace std;
//void solution()
//{
//    int a,b,x;
//    cin >> a >> b >> x;
//    if(a==b)
//    {
//        cout << "YES" << endl;
//    }
//    else
//    {
//        if(x==0)
//        {
//            cout << "NO" << endl;
//        }
//        else
//        {
//            double temp=abs(static_cast <double> (b-a)/2);
//            int temp2=temp/1;
//            if(temp==temp2)
//            {
//                if(temp2%x==0)
//                {
//                    cout << "YES" << endl;
//                }
//                else
//                {
//                    cout << "NO" << endl;
//                }
//            }
//            else
//            {
//                cout << "NO" << endl;
//            }
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
//#include <map>
//#include <iomanip>
//#define ll long long int
//#define big 1000000007
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    int arr[n];
//    map <int,int> mp;
//    for(int i=0;i<n;i++)
//    {
//        cin >> arr[i];
//        mp[arr[i]]++;
//    }
//    int maximum=0;
//    for(auto it=mp.begin();it!=mp.end();it++)
//    {
//        int temp=it->second;
//        maximum=max(maximum,temp);
//    }
//    cout << n-maximum << endl;
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
//#include <map>
//#include <iomanip>
//#define ll long long int
//#define big 1000000007
//using namespace std;
//void solution()
//{
//    string father_name,mother_name;
//    cin >> father_name >> mother_name;
//    int n;
//    cin >> n;
//    vector <string> req (n);
//    string concatenated_chid;
//    string concatenated_parents=father_name+mother_name;
//    for(int i=0;i<n;i++)
//    {
//        cin >> req[i];
//        concatenated_chid+=req[i];
//    }
//    vector <int> alphabets1 (256);
//    for(int i=0;i<concatenated_chid.length();i++)
//    {
//        alphabets1[concatenated_chid[i]]++;
//    }
//    vector <int> alphabets2 (256);
//    for(int i=0;i<concatenated_parents.length();i++)
//    {
//        alphabets2[concatenated_parents[i]]++;
//    }
//    int flag=0;
//    for(int i=0;i<256;i++)
//    {
//        if(alphabets1[i]<=alphabets2[i])
//        {
//            
//        }
//        else
//        {
//            flag=1;
//            break;
//        }
//    }
//    if(flag==1)
//    {
//        cout << "NO" << endl;
//    }
//    else
//    {
//        cout << "YES" << endl;
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