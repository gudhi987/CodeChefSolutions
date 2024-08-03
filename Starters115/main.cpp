//#include <bits/stdc++.h>
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    if(n%2==1)
//    {
//        cout << n/2 + 1 << " " << n << endl;
//    }
//    else
//    {
//        cout << n/2 << " " << n << endl;
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

//#include <bits/stdc++.h>
//using namespace std;
//void solution()
//{
//    int n,x,y;
//    cin >> n >> x >> y;
//    int possible_with_small=y/3;
//    int minimum=min(x,possible_with_small);
//    x-=minimum;
//    int req=n;
//    req-=minimum;
//    if(x/2>=req)
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

//#include <bits/stdc++.h>
//using namespace std;
//void solution()
//{
//    int n;
//    cin >> n;
//    int a[n];
//    int b[n];
//    for(int i=0;i<n;i++)
//    {
//        cin >> a[i];
//    }
//    for(int i=0;i<n;i++)
//    {
//        cin >> b[i];
//    }
//    sort(a,a+n);
//    sort(b,b+n);
//    reverse(b,b+n);
//    
//    int equal_val=a[0]+b[0];
//    for(int i=1;i<n;i++)
//    {
//        if(a[i]+b[i]!=equal_val)
//        {
//            cout << "-1" << endl;
//            return ;
//        }
//    }
//    
//    for(int i=0;i<n;i++)
//    {
//        cout << a[i] << " ";
//    }
//    cout << endl;
//    
//    for(int i=0;i<n;i++)
//    {
//        cout << b[i] << " ";
//    }
//    cout << endl;
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
//    int n,x;
//    cin >> n >> x;
//    if(x==0)
//    {
//        for(int i=1;i<=n;i++)
//        {
//            cout << i << " "; 
//        }
//        cout << endl;
//    }
//    else if(x>=n-1)
//    {
//        cout << "-1" << endl;
//    }
//    else if(x==n-2)
//    {
//        cout << n << " ";
//        for(int i=1;i<n;i++)
//        {
//            cout << i << " "; 
//        }
//        cout << endl;
//    }
//    else
//    {
//        int ele_to_be_placed=n-x-2;
//        cout << "1 ";
//        int pos=1;
//        int start=2;
//        while(pos<ele_to_be_placed)
//        {
//            cout << start << " ";
//            start++;
//            pos++;
//        }
//        cout << n << " ";
//        
//        int curr_size=ele_to_be_placed+1;
//        while(curr_size<n)
//        {
//            cout << start << " ";
//            start++;
//            curr_size++;
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


#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    if(n==1)
    {
        cout << "1" << endl;
        return ;
    }
    vector<int>minimums={arr[0]};
    int minimum=arr[0];
    for(int i=1;i<n;i++)
    {
        minimum=min(arr[i],minimum);
        minimums.push_back(minimum);
    }
    
    
    vector<int>diffs;
    
    int difference=0;
    int ptr=n-1;
    int operations=0;
    int count=1;
    while(ptr>0)
    {
        if(minimums[ptr]==minimums[ptr-1])
        {
            count++;
        }
        else
        {
            int req_operations_to_equal=minimums[ptr]-difference;
            if(count>=req_operations_to_equal)
            {
                operations+=req_operations_to_equal;
                difference=operations;
                while(count>0)
                {
                    diffs.push_back(difference);
                    count--;
                }
                count=1;
            }
            else
            {
                operations+=1;
                diffs.push_back(minimums[ptr]);
            }
        }
        ptr--;
    }
    
    int req_operations_to_equal=minimums[ptr]-difference;
    if(count>=req_operations_to_equal)
    {
        operations+=req_operations_to_equal;
        difference=operations;
        while(count>0)
        {
            diffs.push_back(difference);
            count--;
        }
        count=1;
    }
    else
    {
        operations+=1;
        diffs.push_back(minimums[ptr]);
    }
    
    
    reverse(diffs.begin(),diffs.end());
    
    cout << "Minimums: ";
    for(int i=0;i<minimums.size();i++)
    {
        cout << minimums[i] << " ";
    }
    cout << endl;
    
    
    cout << "Diffs: ";
    for(int i=0;i<diffs.size();i++)
    {
        cout << diffs[i] << " ";
    }
    cout << endl;
    
//    cout << operations << endl;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=diffs[i])
        {
            operations++;
        }
    }

    cout << operations << endl;
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