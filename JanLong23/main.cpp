//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//void solution()
//{
//    int x1,y1,x2,y2;
//    cin >> x1 >> y1 >> x2 >> y2;
//    double distance1=sqrt(pow(x1,2)+pow(y1,2));
//    double distance2=sqrt(pow(x2,2)+pow(y2,2));
//    if(distance1<distance2)
//    {
//        cout << "BOB" << endl;
//    }
//    else if(distance1==distance2)
//    {
//        cout << "EQUAL" << endl;
//    }
//    else
//    {
//        cout << "ALEX" << endl;
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
//}
//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    long long int size=2*n;
//    int p[size];
//    for(int i=0;i<size;i++)
//    {
//        cin >> p[i];
//    }
//    int count=0;
//    for(int i=0;i<size;i++)
//    {
//        if(i<n)
//        {
//            if(p[i]>n)
//            {
//                count++;
//            }
//        }
//    }
//    if(count==0)
//    {
//        cout << "0" << endl;
//    }
//    else
//    {
////        cout << "Count : " << count << endl;
//        long long int total_swaps=0;
//        int temp1=n-1;
//        for(int i=n-1;i>=0;i--)
//        {
//            if(p[i]>n)
//            {
////                cout << i << " " << temp1 << endl;
//                total_swaps+=(temp1-i);
//                temp1--;
//            }
//        }
//        temp1=n;
//        for(int i=n;i<size;i++)
//        {
//            if(p[i]<=n)
//            {
////                cout << i << " " << temp1 << endl;
//                total_swaps+=(i-temp1);
//                temp1++;
//            }
//        }
//        total_swaps+=(pow(count,2));
//        cout << total_swaps << endl;
//    }
//    
//    
//}
//int main()
//{
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        solution();
//    }
//}
//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//void printvec(const vector<int> &v)
//{
//    for(int i=0;i<v.size();i++)
//    {
//        cout << v[i] << " ";
//    }
//    cout << endl;
//}
//int minimum(const vector<int> &v)
//{
//    int minimum_value=INT_MAX;
//    for(int i=0;i<v.size();i++)
//    {
//        minimum_value=min(minimum_value,v[i]);
//    }
//    return minimum_value;
//}
//int maximum(const vector<int> &v)
//{
//    int maximum_value=INT_MIN;
//    for(int i=0;i<v.size();i++)
//    {
//        maximum_value=max(maximum_value,v[i]);
//    }
//    return maximum_value;
//}
//void solution()
//{
//    int n;
//    cin >> n;
//    vector<int> a (n);
//    vector<int> b (n);
//    for(int i=0;i<n;i++)
//    {
//        cin >> a[i];
//    }
//    for(int i=0;i<n;i++)
//    {
//        cin >> b[i];
//    }
//    if(n==1)
//    {
//        cout << min(a[0],b[0]) << endl;
//    }
//    else
//    {
//        int minimum_ans=min(maximum(a)-minimum(a),maximum(b)-minimum(b));
//        vector<int>big;
//        for(int i=0;i<n;i++)
//        {
//            big.push_back(a[i]);
//            big.push_back(b[i]);
//        }
//        sort(big.begin(),big.end());
//        int flag=0;
//        for(int i=0;i<big.size()-n+1;i++)
//        {
//            minimum_ans=min(minimum_ans,big[n+i-1]-big[i]);
//            if(minimum_ans==0)
//            {
//                flag=1;
//                break;
//            }
//        }
//        if(flag==1)
//        {
//            cout << "0" << endl;
//        }
//        else
//        {
//            cout << minimum_ans << endl;
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
//}
//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//void printvec(const vector<int> &v)
//{
//    for(int i=0;i<v.size();i++)
//    {
//        cout << v[i] << " ";
//    }
//    cout << endl;
//}
//int minimum(const vector<int> &v)
//{
//    int minimum_value=INT_MAX;
//    for(int i=0;i<v.size();i++)
//    {
//        minimum_value=min(minimum_value,v[i]);
//    }
//    return minimum_value;
//}
//int maximum(const vector<int> &v)
//{
//    int maximum_value=INT_MIN;
//    for(int i=0;i<v.size();i++)
//    {
//        maximum_value=max(maximum_value,v[i]);
//    }
//    return maximum_value;
//}
//void solution()
//{
//    int n;
//    cin >> n;
//    vector<int> a (n);
//    vector<int> b (n);
//    for(int i=0;i<n;i++)
//    {
//        cin >> a[i];
//    }
//    for(int i=0;i<n;i++)
//    {
//        cin >> b[i];
//    }
//    if(n==1)
//    {
//        cout << min(a[0],b[0]) << endl;
//    }
//    else
//    {
//        int minimum_ans=min((maximum(a)-minimum(a)),(maximum(b)-minimum(b)));
//        vector<int> v1=a;
//        vector<int>v2=a;
//        for(int i=0;i<n;i++)
//        {
//            if(a[i]<b[i])
//            {
//                v1[i]=b[i];
//            }
//        }
//        for(int i=0;i<n;i++)
//        {
//            if(a[i]>b[i])
//            {
//                v2[i]=b[i];
//            }
//        }
////        printvec(v1);
////        printvec(v2);
//        int temp=min(maximum(v1)-minimum(v1),maximum(v2)-minimum(v2));
//        cout << min(temp,minimum_ans) << endl;
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
//}