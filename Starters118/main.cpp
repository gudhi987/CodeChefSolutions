//#include <bits/stdc++.h>
//using namespace std;
//
//void solution()
//{
//    int n,k;
//    cin >> n >> k;
//    
//    if(n/2<k)
//    {
//        for(int i=1;i<=k;i++)
//        {
//            cout << i << " ";
//        }
//        cout << endl;
//    }
//    else
//    {
//        while(n%k!=0)
//        {
//            n--;
//        }
//        int start=n/k;
//        int temp=start;
//        while(k>0)
//        {
//            cout << start << " ";
//            start+=temp;
//            k--;
//        }
//        cout << endl;
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
//
//


//#include <bits/stdc++.h>
//using namespace std;
//
//void solution()
//{
//    int n,m;
//    cin >> n >> m;
//    vector<int>arr(n);
//    for(int i=0;i<n;i++)
//    {
//        cin >> arr[i];
//    }
//    int ans1=0;
//    int curr_literates=0;
//    for(int i=0;i<n;i++)
//    {
//        curr_literates+=arr[i];
//        if(curr_literates>=m)
//        {
//            ans1++;
//            curr_literates=0;
//        }
//    }
//    
//    curr_literates=0;
//    int ans2=0;
//    for(int i=n-1;i>=0;i--)
//    {
//        curr_literates+=arr[i];
//        if(curr_literates>=m)
//        {
//            ans2++;
//            curr_literates=0;
//        }
//    }
//    
//    cout << max(ans1,ans2) << endl;
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
//


//#include <bits/stdc++.h>
//using namespace std;
//int stob(string s)
//{
//    int ans=0;
//    for(int i=s.length()-1;i>=0;i--)
//    {
//        if(s[i]=='1')
//        {
//            ans+=pow(2,s.length()-i-1);
//        }
//    }
//    return ans;
//}
//void solution()
//{
//    int x;
//    cin >> x;
//    string set_bits_x;
//    while(x>0)
//    {
//        if(x&1)
//        {
//            set_bits_x.push_back('1');
//        }
//        else
//        {
//            set_bits_x.push_back('0');
//        }
//        x=x>>1;
//    }
//    reverse(set_bits_x.begin(),set_bits_x.end());
//    
//    int first_set_bit_pos=-1;
//    for(int i=0;i<set_bits_x.length();i++)
//    {
//        if(set_bits_x[i]=='1')
//        {
//            first_set_bit_pos=i;
//            break;
//        }
//    }
//    
//    string first_num="0";
//    if(first_set_bit_pos!=-1)
//    {
//        first_num="1";
//        int rem_length=set_bits_x.length()-first_set_bit_pos-1;
//        while(rem_length>0)
//        {
//            first_num.push_back('0');
//            rem_length--;
//        }
//    }
//    
//    string second_num;
//    for(int i=first_set_bit_pos+1;i<set_bits_x.length();i++)
//    {
//        second_num.push_back(set_bits_x[i]);
//    }
//    
//    cout << stob(second_num) << " " << stob(first_num) << endl;
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
//


#include <bits/stdc++.h>
using namespace std;
int stob(string s)
{
    int ans=0;
    for(int i=s.length()-1;i>=0;i--)
    {
        if(s[i]=='1')
        {
            ans+=pow(2,s.length()-i-1);
        }
    }
    return ans;
}
void solution()
{
    int x;
    cin >> x;
    int temp=x;
    string set_bits_x;
    while(x>0)
    {
        if(x&1)
        {
            set_bits_x.push_back('1');
        }
        else
        {
            set_bits_x.push_back('0');
        }
        x=x>>1;
    }
    reverse(set_bits_x.begin(),set_bits_x.end());
    
    int first_set_bit_pos=-1;
    for(int i=0;i<set_bits_x.length();i++)
    {
        if(set_bits_x[i]=='1')
        {
            first_set_bit_pos=i;
            break;
        }
    }
    
    string first_num="0";
    if(first_set_bit_pos!=-1)
    {
        for(int i=0;i<first_set_bit_pos-1;i++)
        {
            first_num.push_back('0');
        }
        first_num="1";
        int rem_length=set_bits_x.length()-first_set_bit_pos-1;
        while(rem_length>0)
        {
            first_num.push_back('0');
            rem_length--;
        }
    }
    
    string second_num;
    for(int i=0;i<=first_set_bit_pos;i++)
    {
        second_num.push_back('0');
    }
    for(int i=first_set_bit_pos+1;i<set_bits_x.length();i++)
    {
        second_num.push_back(set_bits_x[i]);
    }
    
    cout << x << " " << first_num << " " << second_num << endl;
    
    cout << stob(second_num) << " " << stob(first_num) << endl;
    
    
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

