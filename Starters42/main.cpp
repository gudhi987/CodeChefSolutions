//#include <iostream>
//using namespace std;
//int main()
//{
//    size_t t;
//    cin >> t;
//    while(t--)
//    {
//        int x,y,a;
//        cin >> x >> y >> a;
//        if(a>=x)
//        {
//            if(a<y)
//            {
//                cout << "Yes" << endl;
//            }
//            else
//            {
//                cout << "No" << endl;
//            }
//        }
//        else{
//            cout << "No" << endl;
//         }
//    }
//    return 0;
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//    size_t t;
//    cin >> t;
//    while(t--)
//    {
//        int a,b;
//        cin >> a >> b;
//        int c=a+b;
//        if(c%2 == 0)
//        {
//            cout << "Yes" << endl;
//        }
//        else
//        {
//            cout << "No" << endl;
//        }
//    }
//    return 0;
//}
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//int main()
//{
//    size_t t;
//    cin >> t;
//    while(t--)
//    {
//        int n;
//        cin >> n;
//        int a[n];
//        for(int i=1;i<=n;++i)
//        {
//            cin >> a[i];
//        }
//        int count1 {0};
//        int count2 {0};
//        for(int i=1;i<=n;++i)
//        {
//            if(a[i]==1)
//            {
//                ++count1;
//            }
//            if(a[i]==-1)
//            {
//                ++count2;
//            }
//        }
//        if(n%2 != 0)
//        {
//            cout << "-1" << endl;
//        }
//        else
//        {
//            if(count1==count2)
//            {
//                cout << "0" << endl;
//            }
//            else
//            {
//                int temp;
//                temp=abs(count1-count2);
//                int res=temp/2;
//                cout << res << endl;
//            }
//        }
//    }
//    return 0;
//}
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//int main()
//{
//    size_t t;
//    cin >> t;
//    while(t--)
//    {
//        int a,b;
//        cin >> a >> b;
//        int flag1=0;
//        int flag2=0;
//        if(a%3==0 || b%3==0)
//        {
//            cout << "0" << endl;
//        }
//        else
//        {
//            int temp1 {0};
//            int temp2 {0};
//            while(a>=b)
//            {
//                ++temp1;
//                if((a-b)%3 == 0)
//                {
//                    flag1=1;
//                    break; 
//                }
//                else
//                {
//                    flag1=0;
//                }
//                a=a-b;
//            }
//            while(a<b)
//            {
//                ++temp2;
//                if((b-a)%3 == 0)
//                {
//                    flag2=1;
//                    break;
//                }
//                else
//                {
//                    flag2=0;
//                }
//                b=b-a;
//            }
//            if(flag1==1)
//            {
//                cout << temp1 << endl;
//            }
//            else
//            {
//                if(flag2==0)
//            }
//        }
//    }
//    return 0;
//}
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    size_t t;
    cin >> t;
    while(t--)
    {
        int N;
        cin >> N;
        int n=N-1;
        string s;
        cin >> s;
        int flag1=0;
        int flag2=0;
        for(int i=0;i<n;++i)
        {
            if((s[i]-48)>=(s[i+1]-48))
            {
                
            }
        }
    }
    return 0;
}