//#include <iostream>
//using namespace std;
//int main()
//{
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
//        int x,n;
//        cin >> x >> n;
//        int ans=(x/10)*n;
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
//        int p,q;
//        cin >> p >> q;
//        if((p+q)%4==0 || (p+q)%4==1)
//        {
//            cout << "Alice" << endl;
//        }
//        else
//        {
//            cout << "Bob" << endl;
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
//        int x,y;
//        cin >> x >> y;
//        int temp1;
//        int temp2;
//        if(x%10 != 0)
//        {
//            temp1 = (x/10)+1;
//        }
//        else
//        {
//            temp1=(x/10);
//        }
//        if(y%10 != 0)
//        {
//            temp2 = (y/10)+1;
//        }
//        else
//        {
//            temp2=(y/10);
//        }
//        cout << abs(temp1-temp2) << endl;
//    }
//    return 0;
//}
//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//int main()
//{
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        int n;
//        cin >> n;
//        string ans;
//        string temp1="010";
//        string temp2="1001";
//        if(n==3)
//        {
//            ans=temp1;
//        }
//        else if(n==4)
//        {
//            ans=temp2;
//        }
//        else if(n%2 == 0)
//        {
//            char s[n];
//            s[0]='1';
//            s[n-1]='1';
//            for(int i=1;i<n-1;i++)
//            {
//                s[i]='0';
//            }
//            string temp {""};
//            for(int i=0;i<n;i++)
//            {
//                temp=temp+s[i];
//            }
//            ans = temp;
//        }
//        else if(n%2 != 0)
//        {
//            string s {"010"};
//            while(s.length()<n)
//            {
//                s=s+"10";
//            }
//            ans=s;
//        }
//        else
//        {
//            
//        }
//        cout << ans << endl;
//    }
//    return 0;
//}
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    float ans =(-1+sqrt((8*n)+1))/2;
	    int temp=ans/1;
	    cout << temp << endl;
	}
	return 0;
}
