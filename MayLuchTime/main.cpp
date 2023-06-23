//problem 1
//#include <iostream>
//using namespace std;
//int main()
//{
//    int X,Y;
//    cin >> X >> Y;
//    if(X>=Y)
//    {
//    cout << X - Y;
//    }
//    else
//    {
//        cout << 0;
//    }
//    return 0;
//}
//Problem 2
//#include <iostream>
//using namespace std;
//int main()
//{
//    int X,A,B;
//    cin >> X;
//    cin >> A >> B;
//    if(X >= (A+B))
//    {
//        cout << "Yes";
//    }
//    else
//    {
//        cout << "No";
//    }
//    return 0;
//}
//Problem 3
//#include <iostream>
//using namespace std;
//int main()
//{
//    int T;
//    cin >> T;
//    for(int i=0;i<T;++i)
//    {
//    int N;
//    cin >> N;
//    int D[N];
//    for(int i=0;i<N;++i)
//    {
//        cin >> D[i];
//    }
//    int count {0};
//    for(int i=0;i<N;++i)
//    {
//        if(D[i] < 1000)
//        {
//            
//        }
//        else
//        {
//            ++count;
//        }
//    }
//    cout << count << endl;
//    }
//    return 0;
//}
//Problem 4
//#include <iostream>
//using namespace std;
//int main()
//{
//    int T;
//    cin >> T;
//    for(int i=0;i<T;++i)
//    {
//    int W,X,Y,Z;
//    cin >> W >> X >> Y >> Z;
//    int TotalWater = (W + (Y*Z));
//    if((TotalWater > X))
//    {
//        cout << "overflow" << endl;
//    }
//    else if(TotalWater == X)
//    {
//        cout << "filled" << endl;
//    }
//    else{
//        cout << "unfilled" << endl;
//    }
//    }
//    return 0;
//}
//Problem 5
#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for(int i=1;i<=T;++i)
    {
        int N,M;
        cin >> N >> M;
        int A[N];
        for(int i=1;i<=N;++i)
        {
            cin >> A[i];
        }
        int ReqArray [N][N];
        for(int i=1;i<=N;++i)
        {
            for(int j=1;j<=N;++j)
            {
                if(A[i]>=A[j])
                {
                 ReqArray[i][j] = ((A[i]+A[j])+((A[i]-A[j])%M));
                }
                else
                {
                 ReqArray[i][j] = ((A[i]+A[j])+(((A[i]-A[j])%M)+M));
                }
            }
        }
        int max = ReqArray[1][1];
        for(int i=1;i<=N;++i)
        {
            for(int j=1;j<=N;++j)
            {
                if(ReqArray[i][j] >= max)
                {
                    max = ReqArray[i][j];
                }
            }
        }
        cout << max << endl;
    }
    return 0;
}