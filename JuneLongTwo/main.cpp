//#include <iostream>
//using namespace std;
//int main()
//{
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        int x;
//        cin >> x;
//        int ans=2*x*5;
//        cout << ans << endl;
//    }
//    return 0;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//string complementary(char c)
//{
//    if(c=='A')
//    {
//        return "T";
//    }
//    else if(c=='T')
//    {
//        return "A";
//    }
//    else if(c=='C')
//    {
//        return "G";
//    }
//    else if(c=='G')
//    {
//        return "C";
//    }
//    else
//    {
//        
//    }
//    return "";
//}
//int main()
//{
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        int n;
//        cin >> n;
//        string s;
//        cin >> s;
//        string req;
//        for(int i=0;i<n;i++)
//        {
//            string temp=complementary(s[i]);
//            req=req+temp;
//        }
//        cout << req << endl;
//    }
//    return 0;
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        int p;
//        cin >> p;
//        int temp1=p/100;
//        int temp2=p%100;
//        int ans=temp1+temp2;
//        if(ans>10)
//        {
//            ans=-1;
//        }
//        cout << ans << endl;
//    }
//    return 0;
//}
//#include <iostream>
//#include <vector>
//#include <cstdlib>
//#include <climits>
//using namespace std;
//int main()
//{
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        int n;
//        cin >> n;
//        vector <int> a (n);
//        for(int i=0;i<n;i++)
//        {
//            cin >> a[i];
//        }
//        vector <int> req;
//        for(int i=0;i<n;i++)
//        {
//            int count=0;
//            for(int j=0;j<n;j++)
//            {
//                    if(a[i]==a[j])
//                    {
//                        count++;
//                    }
//            }
//            req.push_back(count);
//        }
//        int m=req.size();
////        cout << m << endl;
//        int maximum=INT_MIN;
//        for(int i=0;i<m;i++)
//        {
//            maximum=max(maximum,req[i]);
//        }
//        int ans=n-maximum;
//        cout << ans << endl;
//    }
//    return 0;
//}
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <numeric>
//#include <cmath>
//using namespace std;
//vector <int> index;
//vector <int> primefactor;
//int countof1(vector <int> a)
//{
//    int temp;
//    int count=0;
//    int n=a.size();
//    for(int i=0;i<n;i++)
//    {
//        if(a[i]==1)
//        {
//            temp=i;
//            count++;
//        }
//    }
//    if(count==1)
//    {
//        index.push_back(temp);
//    }
//    return count;
//}
//int gcdofarray(vector <int> a)
//{
//    int n=a.size();
//    int ans;
//    if(n==1)
//    {
//        ans=n;
//    }
//    else if(n==2)
//    {
//        ans=__gcd(a[0],a[1]);
//    }
//    else
//    {
//        int temp=__gcd(a[0],a[1]);
//        for(int i=2;i<n;i++)
//        {
//            temp=__gcd(temp,a[i]);
//        }
//        ans=temp;
//    }
//    return ans;
//}
//bool isprime(int x)
//{
//    bool ans;
//    int flag=0;
//    if(x<=2)
//    {
//        ans=false;
//    }
//    else
//    {
//        for(int i=2;i<=sqrt(x);i++)
//        {
//            if(x%i==0)
//            {
//                flag=1;
//                break;
//            }
//            else
//            {
//                flag=0;
//            }
//        }
//        if(flag==0)
//        {
//            ans=true;
//        }
//        else
//        {
//            ans=false;
//        }
//    }
//    return ans;
//}
//int main()
//{
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        int n;
//        cin >> n;
//        vector <int> a (n);
//        for(int i=0;i<n;i++)
//        {
//            cin >> a[i];
//        }
//        vector <int> b=a;
//        int ans;
//        for(int i=0;i<n;i++)
//        {
//            bool temp=isprime(a[i]);
//            if(temp==true)
//            {
//                primefactor.push_back(a[i]);
//            }
//        }
//        primefactor.erase(unique(primefactor.begin(),primefactor.end()),primefactor.end());
//        int primecount=primefactor.size();
////        cout  << primecount << endl;
//        int count1=countof1(a);
//        if(count1>1)
//        {
//            ans=0;
//        }
//        else if(count1==1)
//        {
//            b.erase(b.begin()+index[0]);
//            if(gcdofarray(a)==gcdofarray(b))
//            {
//                ans=0;
//            }
//            else
//            {
//                ans=1;
//            }
//        }
//        else
//        {
//            if(gcdofarray(a)!=1)
//            {
//                ans=n;
//            }
//            else
//            {
//                if(primecount>2)
//                {
//                    ans=0;
//                }
//                else
//                {
//                    
//                }
//            }
//        }
//        cout << ans << endl;
//    }
//    return 0;
//}
//#include <iostream>
//#include <vector>
//#include <cstdlib>
//#include <climits>
//#include <cmath>
//#include <string>
//#include <algorithm>
//using namespace std;
//int main()
//{
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        int n;
//        cin >> n;
//        int a=1;
//        int b=1;
//        int count=0;
//        for(a=1;a<=sqrt(n);a++)
//        {
//            for(b=a;b<=sqrt(n);b++)
//            {
//                int gcd=__gcd(a,b);
//                int lcm=(a*b)/gcd;
//                
//                
//                    if(((a*a)+(b*b)+(gcd*gcd)+(lcm*lcm))==n)
//                    {
//                        cout << "(" << a << "," << b << ")" << endl;
//                        if(a==b)
//                        {
//                            count++;
//                        }
//                        else
//                        {
//                            count=count+2;
//                        }
//                    }
//
//            }
//        }
//        cout << count << endl;
//    }
//    return 0;
//}
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x;
        cin >> n >> x;
        vector <int> a (n);
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        int flag=0;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                if(a[i]+a[i+1]>x)
                {
                    flag=1;
                    break;
                }
                else
                {
                    int temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                }
            }
        }
        if(flag==1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}