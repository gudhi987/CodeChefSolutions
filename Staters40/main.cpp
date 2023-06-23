//#include <iostream>
//using namespace std;
//int main()
//{
//    int D;
//    cin >> D;
//    if(D<=1600)
//    {
//        cout << "Yes" << endl;
//    }
//    else
//    {
//        cout << "No" << endl;
//    }
//    return 0;
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//    int T;
//    cin >> T;
//    for(int i=0;i<T;++i)
//    {
//        int X,Y,Z;
//        cin >> X >> Y >> Z;
//        cout << (X-Y)*Z << endl;
//    }
//    return 0;
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//    int T;
//    cin >> T;
//    for(int i=0;i<T;++i)
//    {
//        int N;
//        cin >> N;
//        int array[N];
//        for(int j=0;j<N;++j)
//        {
//            cin >> array[j];
//        }
//        int flag = 0;
//        for(int k=0;k<N-1;++k)
//        {
//            if(array[k]<=array[k+1])
//            {
//                flag = 1;
//            }
//            else
//            {
//                flag = 0;
//                break;
//            }
//        }
//        if(flag == 1)
//        {
//            cout << "Yes" << endl;
//        }
//        else
//        {
//            cout << "No" << endl;
//        }
//    }
//    return 0;
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//    int T;
//    cin >> T;
//    for(int i=0;i<T;++i)
//    {
//        int N,X,Y;
//        cin >> N >> X >> Y;
//        int A[N];
//        for(int j=0;j<N;++j)
//        {
//            cin >> A[j];
//        }
//        int sum1=0;
//        for(int m=0;m<N;++m)
//        {
//            sum1+=A[m];
//        }
//        for(int k=0;k<N;++k)
//        {
//            if(A[k]<=Y)
//            {
//                A[k]=0;
//            }
//            else
//            {
//                A[k] = A[k] - Y;
//            }
//        }
//        int sum2=0;
//        for(int l=0;l<N;++l)
//        {
//            sum2 = sum2 + A[l];
//        }
//        if((sum2+X)<sum1)
//        {
//            cout << "COUPON" << endl;
//        }
//        else
//        {
//            cout << "NO COUPON" << endl;
//        }
//    }
//    return 0;
//}
#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for(int i=0;i<T;++i)
    {
        int N;
        cin >> N;
        int A[N];
        for(int j=0;j<N;++j)
        {
            cin >> A[j];
        }
        int B[N];
        for(int j=0;j<N;++j)
        {
            cin >> B[j];
        }
        int count {0};
        for(int j=0;j<N-1;++j)
        {
            for(int k=1;k<N;++k)
            {
                if(A[j]==B[j])
                {
                    if(A[k]==B[k])
                    {
                        ++count;
                    }
                }
                else if(A[j]==B[k])
                {
                    if(A[k]==B[j])
                    {
                        ++count;
                    }
                }
                else
                {
                    
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}