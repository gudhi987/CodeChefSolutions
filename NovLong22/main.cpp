//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//void solution()
//{
//    int a,b;
//    cin >> a >> b;
//    if(a>b)
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
//#include <bits/stdc++.h>
//using namespace std;
//void solution()
//{
//    int a,b,c,d;
//    cin >> a >> b >> c >> d;
//    int max=a+c;
//    int min=a-d;
//    if(b>=min && b<=max)
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
//#include <bits/stdc++.h>
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    string s;
//    cin >> s;
//    map<char,int> mp;
//    for(int i=0;i<n;i++)
//    {
//        mp[s[i]]++;
//    }
//    int flag=0;
//    for(auto it=mp.begin();it!=mp.end();it++)
//    {
//        if(it->second%2!=0)
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
//#include <iostream>
//#include <bits/stdc++.h>
//#define big 998244353
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    vector<int> c(n);
//    long long int sum=0;
//    for(int i=0;i<n;i++)
//    {
//        cin >> c[i];
//        sum+=c[i];
//    }
//    cout << (((sum-1)%big)*(sum%big))%big << endl;
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
//#define big 1000000007
//using namespace std;
//long long int factorial(int num)
//{
//    if(num==0 || num==1)
//    {
//        return 1;
//    }
//    else
//    {
//        return (num*factorial(num-1))%big;
//    }
//}
//void solution()
//{
//    int n;
//    cin >> n;
//    vector<int> c(n);
//    long long count=0;
//    for(int i=0;i<n;i++)
//    {
//        cin >> c[i];
//        count=(count+factorial(c[i]))%big;
//    }
//    cout << count << endl;
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
//#define big 1000000007
//#define ll long long int
//using namespace std;
//ll factorial[1000001];
//int main()
//{
//    factorial[1]=1;
//    for(int i=2;i<1000001;i++)
//    {
//        factorial[i]=factorial[i-1]*i;
//        factorial[i]%=big;
//    }
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        int n;
//        cin >> n;
//        vector<int> c(n);
//        long long count=0;
//        for(int i=0;i<n;i++)
//        {
//            cin >> c[i];
//            count=(count+factorial[c[i]])%big;
//        }
//        cout << count << endl;
//    }
//    return 0;
//}