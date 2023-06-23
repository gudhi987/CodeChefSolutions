//#include <iostream>
//#include <bits/stdc++.h>
//#define big 1000000007
//#define ll long long int
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    vector<int>a(n);
//    vector<int>b(n);
//    for(int i=0;i<n;i++)
//    {
//        cin >> a[i];
//    }
//    for(int i=0;i<n;i++)
//    {
//        cin >> b[i];
//    }
//    int max_om=0;
//    int max_addy=0;
//    int om_streak=0;
//    int addy_streak=0;
//    for(int i=0;i<n;i++)
//    {
//        if(a[i]!=0)
//        {
//            om_streak++;
//        }
//        else
//        {
//            max_om=max(max_om,om_streak);
//            om_streak=0;
//        }
//    }
//    max_om=max(max_om,om_streak);
//    for(int i=0;i<n;i++)
//    {
//        if(b[i]!=0)
//        {
//            addy_streak++;
//        }
//        else
//        {
//            max_addy=max(max_addy,addy_streak);
//            addy_streak=0;
//        }
//    }
//    max_addy=max(max_addy,addy_streak);
////    cout << max_om << " " << max_addy << endl;
//    if(max_om>max_addy)
//    {
//        cout << "OM" << endl;
//    }
//    else if(max_om==max_addy)
//    {
//        cout << "DRAW" << endl;
//    }
//    else
//    {
//        cout << "ADDY" << endl;
//    }
//}
//int main() {
//	int t;
//    cin >> t;
//    while(t--)
//    {
//        solution();
//    }
//	return 0;
//}

//#include <iostream>
//#include <bits/stdc++.h>
//#define big 1000000007
//#define ll long long int
//using namespace std;
//bool isVowel(char c)
//{
//    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
//    {
//        return true;
//    } 
//    else
//    {
//        return false;
//    }
//}
//void solution()
//{
//    int n,k;
//    cin >> n >> k;
//    string s;
//    cin >> s;
//    if(k>(n/2))
//    {
//        cout << "1" << endl;
//    }
//    else
//    {
//        int ans=1;
//        int last_vowel_pos;
//        for(int i=n-1;i>=0;i--)
//        {
//            if(isVowel(s[i]))
//            {
//                last_vowel_pos=i;
//                break;
//            }
//        }
//        int vowelCount=0;
//        int consCount=0;
//        for(int i=0;i<=last_vowel_pos;i++)
//        {
//            if(vowelCount==k)
//            {
//                if(isVowel(s[i]))
//                {
//                    ans=(ans*(consCount+1))%big;
//                    vowelCount=0;
//                    i--;
//                    consCount=0;
//                }
//                else
//                {
//                    consCount++;
//                }
//            }
//            else
//            {
//                if(isVowel(s[i]))
//                {
//                    vowelCount++;
//                }
//            }
//        }
//        cout << ans << endl;
//    }
//}
//int main() {
//	int t;
//    cin >> t;
//    while(t--)
//    {
//        solution();
//    }
//	return 0;
//}

#include <iostream>
#include <bits/stdc++.h>
#define big 1000000007
#define ll long long int
using namespace std;
void solution()
{
    int n,k;
    cin >> n >> k;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    if(find(a.begin(),a.end(),k)!=a.end())
    {
        cout << "YES" << endl;
    }
    else
    {
        vector<int>req;
        for(int i=0;i<n;i++)
        {
            if((a[i]&k)==k)
            {
                req.push_back(a[i]);
            }
        }
        if(req.empty())
        {
            cout << "NO" << endl;
        }
        else
        {
            int temp=req[0];
            for(int i=1;i<req.size();i++)
            {
                temp=temp&req[i];
            }
            if(temp==k)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}
int main() {
	int t;
    cin >> t;
    while(t--)
    {
        solution();
    }
	return 0;
}
