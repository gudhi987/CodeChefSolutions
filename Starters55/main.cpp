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
//    int x,y;
//    cin >> x >> y;
//    if(x>y)
//    {
//        cout << "NEW PHONE" << endl;
//    }
//    else if(x<y)
//    {
//        cout << "REPAIR" << endl;
//    }
//    else
//    {
//        cout << "ANY" << endl;
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
//#define ll long long int
//#define big 1000000007
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    int a[n];
//    for(int i=0;i<n;i++)
//    {
//        cin >> a[i];
//    }
//    int k;
//    cin >> k;
//    int b[k];
//    set <int> s;
//    for(int i=0;i<k;i++)
//    {
//        cin >> b[i];
//        s.insert(b[i]);
//    }
//    vector <int> req;
//    for(int i=0;i<n;i++)
//    {
//        if(s.find(a[i])==s.end())
//        {
//            req.push_back(a[i]);
//        }
//    }
//    for(int i=0;i<req.size();i++)
//    {
//        cout << req[i] << " ";
//    }
//    cout << endl;
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
//#define big 1000000007
//using namespace std;
//void solution()
//{
//    int n,k;
//    cin >> n >> k;
//    long long int temp=(k*(k+1))/2;
//    if(n>=temp)
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
//    int x,y;
//    cin >> x >> y;
//    int temp=(3*x)-y;
//    if(temp>=y && y>=0)
//    {
//        cout << "0" << " " <<  y  << " " << temp << endl;
//    }
//    else
//    {
//        if(temp>=0)
//        {
//            int i=-1000;
//            int a;
//            int c;
//            while(i>=-1000 && i<=1000)
//            {
//                if(temp-i>=-1000 && temp-i<=1000)
//                {
//                    a=min(temp-i,i);
//                    c=max(temp-i,i);
//                    break;
//                }
//                i++;
//            }
//            cout << a << " " << y << " " << c << endl;
//        }
//        else
//        {
//            cout << "-1000" << " " << y << " " << 1000+temp << endl;   
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
