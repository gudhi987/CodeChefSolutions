//#include <bits/stdc++.h>
//using namespace std;
//
//void solution()
//{
//    int n,x;
//    cin >> n >> x;
//    cout << ((x-min(x,2*n-x))/2)*2 << endl;
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


//#include <bits/stdc++.h>
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    if(n>4)
//    {
//        cout << "1 " << n-1 << endl;  
//    }
//    else
//    {
//        cout << "0 " << n << endl;
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

#include <bits/stdc++.h>
using namespace std;
bool Maximize(string &s)
{
    int count1=0,count2=0,ele=0;
    for(int i=0;i<s.length();i++)
    {
        if(i==0)
        {
            if(s[i]=='0')
            {
                count1+=0;
                ele=0;
            }
            else
            {
                count2+=1;
                ele=1;
            }
        }
        else
        {
            if(s[i]=='0')
            {
                count1+=ele;
            }
            else
            {
                ele++;
                count2+=ele;
            }
        }
    }
//    cout << count1 << " " << count2 << " " << ele << endl;
    if(abs(count1-count2)<=ele)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void solution()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count_A=0,count_B=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1')
        {
            count_A++;
        }
        else
        {
            count_B++;
        }
    }
    if(count_A-count_B>=2)
    {
        cout << "NO" << endl;
    }
    else
    {
        bool ans1=Maximize(s);
        // Swapping characters
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                s[i]='0';
            }
            else
            {
                s[i]='1';
            }
        }
        bool ans2=Maximize(s);
        if(ans1 && ans2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
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