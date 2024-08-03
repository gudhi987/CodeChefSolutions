//#include <bits/stdc++.h>
//using namespace std;
//int sum(int n)
//{
//    int ans=0;
//    while(n>0)
//    {
//        ans+=(n%2);
//        n/=2;
//    }
//    return ans;
//}
//void solution()
//{
//    int n;
//    cin >> n;
//    int ans=sum(n);
//    if(ans%2==0)
//    {
//        cout << "EVEN" << endl;
//    }
//    else
//    {
//        cout << "ODD" << endl;
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


//#include <bits/stdc++.h>
//using namespace std;
//
//void solution()
//{
//    int n;
//    cin >> n;
//    int arr[n];
//    for(int i=0;i<n;i++)
//    {
//        cin >> arr[i];
//    }
//    
//    sort(arr,arr+n);
//    
//    int ans=0;
//    for(int i=0;i<n;i++)
//    {
//        ans=max(ans,arr[i]*(n-i)); 
//    }
//    cout << ans << endl;
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
//    return 0;
//}
//


//#include <bits/stdc++.h>
//using namespace std;
//
//void solution()
//{
//    string s;
//    cin >> s;
//    int n=s.length();
//    
//    if(n<=3)
//    {
//        cout << "0" << endl;
//        return ;
//    }
//    
//    int ans=INT_MAX;
//    
//    for(int i=0;i<26;i++)
//    {
//        
//        int matched_len=0;
//        int unmatched_chars_len=0;
//        
//        int start_idx=-1;
//        int end_idx=-1;
//        
//        int count=0;
//        
//        
//        for(int j=0;j<n;j++)
//        {
//            if(char(i+'a')==s[j])
//            {
//                start_idx=j;
//                break;
//            }
//        }
//        
//        for(int j=n-1;j>=0;j--)
//        {
//            if(char(i+'a')==s[j])
//            {
//                end_idx=j;
//                break;
//            }
//        }
//        
//        if(start_idx==-1)
//        {
//            continue;
//        }
//        
//        for(int j=start_idx;j<=end_idx;j++)
//        {
//            if(s[j]==char('a'+i))
//            {
//                count+=min(matched_len,unmatched_chars_len);
//                unmatched_chars_len=0;
//                matched_len++;
//            }
//            else
//            {
//                unmatched_chars_len++;
//            }
//        }
//        
//        ans=min(ans,count);
//    }
//    
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
//


#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int l,r;
    cin >> l >> r;
    
    int n=r-l+1;
    
    if(n==1)
    {
        cout << "-1" << endl;
    }
    
    if(__gcd(l,r)!=1)
    {
        if(n%2==1 && l%2==0)
        {
            cout << "-1" << endl;
        }
        else 
        {
            int arr[n];
            for(int i=0;i<n;i++)
            {
                if(i%2==0)
                {
                    arr[i]=l + i + 1;
                }
                else 
                {
                    arr[i]=l + i - 1;
                }
            }
            
            if(n%2==1)
            {
                arr[n-1]=r;
                swap(arr[n-1],arr[n-2]);
            }
            
            for(int i=0;i<n;i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << r << " ";
        for(int i=l;i<=r-1;i++)
        {
            cout << i << " ";
        }
        cout << endl;
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