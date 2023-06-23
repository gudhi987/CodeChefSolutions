//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//void solution()
//{
//    int x;
//    cin >> x;
//    cout << x-10 << endl;
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
//#include <bits/stdc++.h>
//using namespace std;
//void solution()
//{
//    int a,b;
//    cin >> a >> b;
//    double new_a=100-a;
//    double new_b=200-2*b;
//    if(new_a>new_b)
//    {
//        cout << "SECOND" << endl;
//    }
//    else if(new_a==new_b)
//    {
//        cout << "BOTH" << endl;
//    }
//    else
//    {
//        cout << "FIRST" << endl;
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
//#include <bits/stdc++.h>
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    int count=1;
//    int start=1;
//    int end=n;
//    for(int i=0;i<n;i++)
//    {
//        if(count%2==0)
//        {
//            cout << end << " ";
//            end--;
//        }
//        else
//        {
//            cout << start << " ";
//            start++;
//        }
//        count++;
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
//#include <bits/stdc++.h>
//using namespace std;
//bool isPrime(int n)
//{
//    int flag=0;
//    for(int i=2;i<=sqrt(n);i++)
//    {
//        if(n%i==0)
//        {
//            flag=1;
//            break;
//        }
//    }
//    if(flag==1)
//    {
//        return false;
//    }
//    else
//    {
//        return true;
//    }
//}
//void solution()
//{
//    int x,y;
//    cin >> x >> y;
//    int count=0;
//    int flag=0;
//    while(x<y)
//    {
//        if(x%2==0)
//        {
//            flag=1;
//            break;
//        }
//        else
//        {
//            if(isPrime(x))
//            {
//                count++;
//                x+=x;
//            }
//            else
//            {
//                for(int i=3;i<=x;i+=2)
//                {
//                    if(isPrime(i) && x%i==0)
//                    {
//                        count++;
//                        x+=i;
//                        break;
//                    }
//                }
//            }
//        }
//    }
//    if(flag==1)
//    {
//        count+=ceil(static_cast<double>(y-x)/2);
//        cout << count << endl;
//    }
//    else
//    {
//        cout << count << endl;
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
//#include <bits/stdc++.h>
//using namespace std;
//void solution()
//{
//    int x,y;
//    cin >> x >> y;
//    if(x==y)
//    {
//        if(x%2==0)
//        {
//            cout << "CHEFINA" << endl;
//        }
//        else
//        {
//            cout << "CHEF" << endl;
//        }
//    }
//    else if(x<y)
//    {
//        if(y-x==1)
//        {
//            if(x%2==0)
//            {
//                cout << "CHEFINA" << endl;
//            }
//            else
//            {
//                cout << "CHEF" << endl;
//            }
//        }
//        else
//        {
//            cout << "CHEFINA" << endl;
//        }
//    }
//    else
//    {
//        if(x-y==1)
//        {
//            if(x%2==0)
//            {
//                cout << "CHEF" << endl;
//            }
//            else
//            {
//                cout << "CHEFINA" << endl;
//            }
//        }
//        else
//        {
//            cout << "CHEF" << endl;
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
#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int x;
    cin >> x;
    
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