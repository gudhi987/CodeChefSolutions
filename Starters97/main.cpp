//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//void solution()
//{
////    int n;
////    cin >> n;
//    vector<int>arr(6);
//    for(int i=0;i<6;i++)
//    {
//        cin >> arr[i];
//    }
//    sort(arr.begin(),arr.begin()+3);
//    sort(arr.begin()+3,arr.end());
//    int sum1=arr[2]+arr[1];
//    int sum2=arr[5]+arr[4];
//    if(sum1>sum2)
//    {
//        cout << "Alice" << endl;
//    }
//    else if(sum1<sum2)
//    {
//        cout << "Bob" << endl;
//    }
//    else
//    {
//        cout << "Tie" << endl;
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
//    int ans=0;
//    int countcolon=0;
//    int countright=0;
//    int countleft=0;
//    for(int i=0;i<n;i++)
//    {
//        if(s[i]==':')
//        {
//            countcolon++;
//            if(countcolon==2)
//            {
//                if(countright>0 && countleft==0)
//                {
//                    ans++;
//                }
//            }
//            countcolon=1;
//            countright=0;
//            countleft=0;
//        }
//        else if(s[i]==')')
//        {
//            countright++;
//        }
//        else
//        {
//            countleft++;
//        }
//    }
//    cout << ans << endl;
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
//    vector<string>v(3);
//    for(int i=0;i<3;i++)
//    {
//        cin >> v[i];
//    }
//    string s=v[0];
//    string t=v[1];
//    string u=v[2];
//    int shift=0;
//    int temp=(t[0]-'a')-(s[0]-'a');
//    if(temp>=0)
//    {
//        shift=temp%26;
//    }
//    else
//    {
//        shift = 26-((-temp)%26);
//    }
////    cout << shift << endl;
//    string ans;
//        for(int i=0;i<n;i++)
//        {
//            char c='a'+(u[i]-'a'+shift)%26;
//            ans.push_back(c);
//        }
//    cout << ans << endl;
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
