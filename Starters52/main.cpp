#include <iostream>
#include <vector>
#include <cstring>
#include <string>
#include <algorithm>
#include <climits>
#include <cfloat>
#include <cmath>
#include <cctype>
#include <algorithm>
#include <stack>
#include <memory>
#include <queue>
#include <deque>
#include <set>
#include <iomanip>
using namespace std;
void solution()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n-1;i++)
    {
        int temp=__gcd(a[i],a[i+1]);
        if(temp==1)
        {
            a[i+1]=a[i];
        }
        else
        {
            a[i+1]=a[i];
        }
    }
    sort(a,a+n);
    for(int i=0;i<n-1;i++)
    {
        int temp=__gcd(a[i],a[i+1]);
        if(temp==1)
        {
            a[i+1]=temp;
        }
        else
        {
            a[i+1]=a[i];
        }
    }
    long long int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    cout << sum << endl;
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