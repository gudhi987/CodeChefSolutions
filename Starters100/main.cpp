//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//void solution()
//{
//    int a,b,c,d;
//    cin >> a >> b >> c >> d;
//    int net_exports=(a-b)+(c-d);
//    if(net_exports<0)
//    {
//        cout << "YES" << endl;
//    }
//    else
//    {
//        cout << "NO" << endl;
//    }
//}
//
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
//    cout << "1 1 " << n-2 << endl;
//}
//
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i=s.length()-3;i>=0;i--)
    {
        string temp=s.substr(i,3);
        if(temp>"100")
        {
            s[i]='1';
            s[i+1]='0';
            s[i+2]='0';
        }
    }
    cout << s << endl;
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
