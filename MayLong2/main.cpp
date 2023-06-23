//PRACTICEPERF
//#include <iostream>
//using namespace std;
//int main()
//{
//    int P1,P2,P3,P4;
//    cin >> P1 >> P2 >> P3 >> P4;
//    int count {0};
//    if(P1 >= 10)
//    {
//        count = count + 1;
//    }
//    if(P2 >= 10)
//    {
//        count = count + 1;
//    }
//    if(P3 >= 10)
//    {
//        count = count + 1;
//    }
//    if(P4 >= 10)
//    {
//        count = count + 1;
//    }
//    cout << count << endl;
//    return 0;
//}
//PRIZEPOOL
//#include <iostream>
//using namespace std;
//int main()
//{
//    int T;
//    cin >> T;
//    for(int i=0;i<T;++i)
//    {
//        int X,Y;
//        cin >> X >> Y;
//        int TotalPrizeMoney = ((10*X) + (90*Y));
//        cout << TotalPrizeMoney << endl;
//    }
//    return 0;
//}
//DPOLY
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
//        int A[N];
//        for(int j=0;j<N;++j)
//        {
//            cin >> A[j];
//        }
//        for(int j=(N-1);j>=0;--j)
//        {
//            if(A[j] != 0)
//            {
//                cout << j << endl;
//                break;
//            }
//            else
//            {
//                continue;
//            }
//        }
//    }
//    return 0;
//}
//HIGH SCORE
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
//        int NA,NB,NC,ND;
//        cin >> NA >> NB >> NC >> ND;
//        int output;
//        output = max(NA,max(NB,max(NC,ND)));
//        cout << output << endl;
//    }
//    return 0;
//}
//#include <iostream>
//#include <cstring>
//#include <string>
//#include <cstdlib>
//using namespace std;
//int main()
//{
//    int T;
//    cin >> T;
//    for(int i=0;i<T;++i)
//    {
//        int N;
//        cin >> N;
//        char A[N+1];
//        cin >> A;
//        int X = atoi(A);
//        const int temp = X;
//        int sum {0};
//        while(X>0)
//        {
//            sum = ((sum*10)+(X%10));
//            X/=10;
//        }
//        if(temp == sum)
//        {
//            cout << "0" << endl;
//        }
//        else
//        {
//            
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
    for(int i=1;i<=T;++i)
    {
        int N;
        cin >> N;
        int A[N];
        for(int j=0;j<N;++j)
        {
            cin >> A[j];
        }
        int *array_ptr {A};
        int count {0};
        for(int k=0;k<N;++k)
        {
            for(int l=k;l<N;++l)
            {
                for(int m=k;m<(l+1);++m)
                {
                    if(array_ptr[m]==(l-k+1))
                    {
                        cout << "(" << k+1 << "," << l+1 << ")" << endl; 
                        count = count + 1;
                        break;
                    }
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}