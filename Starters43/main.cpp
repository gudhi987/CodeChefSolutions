//#include <iostream>
//using namespace std;
//int main()
//{
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        int a,b;
//        cin >> a >> b;
//        int ans=min(a,b);
//        cout << ans << endl;
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
//        int k;
//        cin >> k;
//        int x;
//        cin>> x;
//        int res=(7*k)-x;
//        cout << res << endl;
//    }
//    return 0;
//}
//#include <iostream>
//#include<string>
//using namespace std;
//string fun(int n1,int n2)
//{
//    string ans;
//    if(n1==0)
//    {
//        if(n2==0)
//        {
//            ans = "A";
//        }
//        else if(n2==1)
//        {
//            ans="T";
//        }
//        else
//        {
//            
//        }
//    }
//    else if(n1==1)
//    {
//        if(n2==0)
//        {
//            ans="C";
//        }
//        else if(n2==1)
//        {
//            ans="G";
//        }
//        else
//        {
//            
//        }
//    }
//    else
//    {
//        
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
//        string s;
//        string req = "";
//        cin >> s;
//        for(int i=0;i<n;i=i+2)
//        {
//            req=req+fun(s[i]-'0',s[i+1]-'0');
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
//        int n;
//        cin >> n;
//        int k;
//        cin >> k;
//        int ans;
//        if(n%5==0)
//        {
//            if(k%5 == 0)
//            {
//                ans=((n-1)/5)-((k-1)/5);
//            }
//            else
//            {
//                ans=((n-1)/5)-(k/5);
//            }
//        }
//        else
//        {
//            if(k%5 == 0)
//            {
//                ans=(n/5)-((k-1)/5);
//            }
//            else
//            {
//                ans=(n/5)-(k/5);
//            }
//        }
//        cout << ans << endl;
//    }
//    return 0;
//}
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int g(int a,int b)
{
    int temp1=__gcd(a,b);
    int temp2=(a*b)/temp1;
    return temp1+temp2;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int mingcd=INT_MAX;
//        for(int i=1;i<=n;i++)
//        {
//            for(int j=1;j<=n;j++)
//            {
//                if(i+j == n)
//                {
//                    cout << "(" << i << "," << j << ")" << endl;
//                    int temp=g(i,j);
//                    //cout << temp << endl;
//                    mingcd = min(mingcd,temp);
//                }
//            }
//        }
        int k=1;
        int l=n;
        while(k<=n && l<=n && l>=1)
        {
            if(k+l == n)
            {
                //cout << "(" << k << "," << l << ")" << endl;
                int temp=g(k,l);
                //cout << temp << endl;
                mingcd = min(mingcd,temp);
                k++;
            }
            else if(k+l > n)
            {
                l--;
            }
            else
            {
                
            }
        }
        //cout << mingcd << endl;
        int count {0};
//        for(int i=1;i<=n;i++)
//        {
//            for(int j=1;j<=n;j++)
//            {
//                if(i+j == n)
//                {
//                    cout << "(" << i << "," << j << ")" << endl;
//                    if(g(i,j)==mingcd)
//                    {
//                        count++;
//                    }
//                }
//            }
//        }
        int i=1;
        int j=n;
        while(i<=n && j<=n && j>=1)
        {
            if(i+j == n)
            {
                //cout << "(" << i << "," << j << ")" << endl;
                if(g(i,j)==mingcd)
                {
                    count++;
                }
                i++;
            }
            else if(i+j > n)
            {
                j--;
            }
            else
            {
                
            }
        }
        cout << count << endl;
    }
    return 0;
}