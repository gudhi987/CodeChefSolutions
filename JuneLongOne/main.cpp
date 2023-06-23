//#include <iostream>
//using namespace std;
//int main()
//{
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        int X,Y;
//        cin >> X >> Y;
//        if(X>=Y)
//        {
//            cout << X-Y << endl;
//        }
//        else
//        {
//            cout << "0" << endl;
//        }
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
//        int n,x;
//        cin >> n >> x;
//        if(n%6 == 0)
//        {
//            int temp=(n/6)*x;
//            cout << temp << endl;
//        }
//        else
//        {
//            int temp=(n/6)*x + x;
//            cout << temp << endl;
//        }
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
//        int a,b;
//        cin >> a >> b;
//        if((b-a)%3 == 0)
//        {
//            cout << "Yes" << endl;
//        }
//        else
//        {
//            int temp=(b-a)/3;
//            int temp2=a+(temp*3)+1;
//            if(temp2==b)
//            {
//                cout << "Yes" << endl;
//            }
//            else
//            {
//                cout << "No" << endl;
//            }
//        }
//    }
//    return 0;
//}
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x,y;
        cin >> x >> y;
        int count {0};
        int ans;
        if(x==y)
        {
            ans = x;
        }
        else if(x>y)
        {
            do
            {
                if((2*y)<=x)
                {
                    y=y*2;
                    ++count;
                }
                else
                {
                    break;
                }
            }
            while(x>y);
            while(x!=y)
            {
                x=x-1;
                ++count;
            }
            if(x==y)
            {
                count = count + x;
            }
            ans=count;
        }
        else
        {
            count = 0;
            do
            {
                if((2*x)<=y)
                {
                    x=x*2;
                    ++count;
                }
                else
                {
                    break;
                }
            }
            while(x<y);
            while(x!=y)
            {
                y=y-1;
                ++count;
            }
            if(x==y)
            {
                count = count + x;
            }
            ans = count;
        }
        cout << ans << endl;
    }
    return 0;
}