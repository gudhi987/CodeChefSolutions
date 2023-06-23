//#include <iostream>
//#include <cmath>
//#include <vector>
//#include <string>
//#include <iomanip>
//#include <cstring>
//using namespace std;
//int main()
//{
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        int x,y;
//        cin >> x >> y;
//        int res=max(x,y);
//        cout << res << endl;
//    }
//    return 0;
//}
//#include <iostream>
//#include <cmath>
//#include <vector>
//#include <string>
//#include <iomanip>
//#include <cstring>
//using namespace std;
//int main()
//{
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        int s,x,y,z;
//        cin >> s >> x >> y >> z;
//        int temp=s-(x+y);
//        int res;
//        if(temp>=z)
//        {
//            res=0;
//        }
//        else if(temp+x>=z || temp+y>=z)
//        {
//            res=1;
//        }
//        else
//        {
//            res=2;
//        }
//        cout << res << endl;
//    }
//    return 0;
//}
//#include <iostream>
//#include <cmath>
//#include <vector>
//#include <string>
//#include <iomanip>
//#include <cstring>
//using namespace std;
//int main()
//{
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        int a,b,c,d;
//        cin >> a >> b >> c >> d;
//        int res;
//        if(a!=c && b!=d)
//        {
//            res=1;
//        }
//        else
//        {
//            res=2;
//        }
//        cout << res << endl;
//    }
//    return 0;
//}
//#include <iostream>
//#include <cmath>
//#include <vector>
//#include <string>
//#include <iomanip>
//#include <cstring>
//using namespace std;
//int main()
//{
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        int n;
//        cin >> n;
//        vector <int> b (n);
//        for(int i=0;i<n;i++)
//        {
//            cin >> b[i];
//        }
//        vector <int> b(n);
//        for(int i=0;i<n-1;i++)
//        {
//            if(b[i]==0)
//            {
//                a[i]=2;
//                a[i+1]=2;
//            }
//        }
//        for(int i=0;i<n-1;i++)
//        {
//            if(b[i]==1)
//            {
//                if(a
//            }
//        }
//    }
//    return 0;
//}
//#include <iostream>
//#include <cmath>
//#include <vector>
//#include <string>
//#include <iomanip>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//int main()
//{
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        int n;
//        cin >> n;
//        int b[n];
//        for(int i=0;i<n;i++)
//        {
//            cin >> b[i];
//        }
//        int bsum=0;
//        for(int i=0;i<n;i++)
//        {
//            bsum+=b[i];
//        }
//        int asum;
//        if(bsum%(n+1)==0)
//        {
//            asum=bsum/(n+1);
//        }
//        else
//        {
//            asum=bsum/(n+1) + 1;
//        }
//        vector <int>  a(n);
//        for(int i=0;i<n;i++)
//        {
//            a[i]=b[i]-asum;
//        }
////        sort(a.begin(),a.end());
//        for(int i=0;i<n;i++)
//        {
//            cout << a[i] << " ";
//        }
//        cout << endl;
//    }
//    return 0;
//}
//#include <iostream>
//#include <cmath>
//#include <vector>
//#include <string>
//#include <iomanip>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//int main()
//{
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        int n;
//        cin >> n;
//        vector <int> a(2*n);
//        for(int i=0;i<2*n;i++)
//        {
//            cin >> a[i];
//        }
//        int evencount=0;
//        int oddcount=0;
//        for(int i=0;i<2*n;i++)
//        {
//            if(a[i]%2==0)
//            {
//                evencount++;
//            }
//            else
//            {
//                oddcount++;
//            }
//        }
//        int ans;
//        if(oddcount>evencount)
//        {
//            ans=(oddcount-evencount)/2;
//        }
//        else if(oddcount==evencount)
//        {
//            ans=0;
//        }
//        else
//        {
//            int count=0;
//            int tempcount=0;
//            int temp=(evencount-oddcount)/2;
//            sort(a.begin(),a.end());
//            for(int i=0;i<2*n;i++)
//            {
//                if(a[i]%2==0)
//                {
//                    if(tempcount<temp)
//                    {
//                        tempcount++;
//                        while(a[i]%2==0)
//                        {
//                            a[i]/=2;
//                            count++;
//                        }
//                    }
//                }
//            }
//            ans=count;
//        }
//        cout << ans << endl;
//    }
//    return 0;
//}
#include <iostream>
#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <iomanip>
#include <cstring>
#include <algorithm>
using namespace std;
//void solve()
//{
//    int n;
//	cin >> n;
//	vector <int> a(n);
//	for(int i=0;i<n;i++)
//	{
//	    cin >> a[i];
//	}
//	vector <int> temp(n,-1);
//	temp[0]=0;
//	for(int i=0;i<n;i++)
//	{
//	    if(i==n-1)
//	    {
//	        if(a[i]==0)
//	        {
//	            if(temp[i]==temp[0])
//	            {
//	                cout << "Yes" << endl;
//	                return ;
//	            }
//	        }
//	        else
//    	    {
//    	        if(temp[i]!=temp[0])
//    	        {
//    	            cout << "Yes" << endl;
//    	            return ;
//    	        }
//    	    }
//	    }
//	    else if(a[i]==0)
//	    {
//	        temp[i+1]=temp[i];
//	    }
//	    else
//	    {
//	        temp[i+1]=abs(1-temp[i]);
//	    }
//	    fill(temp.begin(),temp.end(),-1);
//	    temp[0]=1;
//	    for(int i=0;i<n;i++)
//	    {
//	        if(i==n-1)
//	        {
//	            if(a[i]==0)
//	            {
//	                if(temp[i]==temp[0])
//	                {
//	                    cout << "Yes" << endl;
//	                    return ;
//	                }
//	            }
//	            else
//	            {
//	                if(temp[i]!=temp[0])
//	                {
//	                    cout << "Yes" << endl;
//	                    return ;
//	                }
//	            }
//	        }
//	        else if(a[i]==0)
//	        {
//	            temp[i+1]=temp[i];
//	        }
//	        else
//	        {
//	            temp[i+1]=abs(1-temp[i]);
//	        }
//	    } 
//	    cout << "No" << endl;
//}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
	cin >> n;
	vector <int> a(n);
	for(int i=0;i<n;i++)
	{
	    cin >> a[i];
	}
	vector <int> temp(n,-1);
	temp[0]=0;
	for(int i=0;i<n;i++)
	{
	    if(i==n-1)
	    {
	        if(a[i]==0)
	        {
	            if(temp[i]==temp[0])
	            {
	                cout << "Yes" << endl;
                    break;
	            }
	        }
	        else
    	    {
    	        if(temp[i]!=temp[0])
    	        {
    	            cout << "Yes" << endl;
                    break;
    	        }
    	    }
	    }
	    else if(a[i]==0)
	    {
	        temp[i+1]=temp[i];
	    }
	    else
	    {
	        temp[i+1]=abs(1-temp[i]);
	    }
	    fill(temp.begin(),temp.end(),-1);
	    temp[0]=1;
	    for(int i=0;i<n;i++)
	    {
	        if(i==n-1)
	        {
	            if(a[i]==0)
	            {
	                if(temp[i]==temp[0])
	                {
	                    cout << "Yes" << endl;
//	                    return ;
                        break;
	                }
	            }
	            else
	            {
	                if(temp[i]!=temp[0])
	                {
	                    cout << "Yes" << endl;
//	                    return ;
                        break;
	                }
	            }
	        }
	        else if(a[i]==0)
	        {
	            temp[i+1]=temp[i];
	        }
	        else
	        {
	            temp[i+1]=abs(1-temp[i]);
	        }
	    } 
	    cout << "No" << endl;
    }
    }
	return 0;
}
