#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i]; 
        }
        int rem=0;
        int temp;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if((rem+a[i])>=k)
            {
                rem=rem+a[i]-k;
                flag=0;
            }
            else
            {
                temp=i+1;
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout << "No " << temp << endl;
        }
        else if(flag==0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            
        }
    }
    return 0;
}