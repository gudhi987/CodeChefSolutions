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
//        if(Y>=X)
//        {
//            if(Y<=(X+200))
//            {
//                cout << "Yes" << endl;
//            }
//            else
//            {
//                cout << "No" << endl;
//            }
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
//        int N,X;
//        cin >> N >> X;
//        int countset = N/(3*X);
//        cout << countset << endl;
//    }
//    return 0;
//}
#include <iostream>
#include <vector>
#include <algorithm>
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
        vector <int> adjacent_Sum;
        for(int j=0;j<N;++j)
        {
            cin >> A[j];
        }
        if(N==2)
        {
            cout << A[0]+A[1] << endl;
        }
        else
        {
            for(int j=0;j<N;++j)
            {
                if(j==0)
                {
                    int temp1=A[0]+A[N-1];
                    int temp2=A[0]+A[1];
                    adjacent_Sum.push_back(temp1);
                    adjacent_Sum.push_back(temp2);
                }
                else if(j==(N-1))
                {
                    int temp1=A[0]+A[N-1];
                    int temp2=A[N-2]+A[N-1];
                    adjacent_Sum.push_back(temp1);
                    adjacent_Sum.push_back(temp2);
                }
                else
                {
                    int temp1=A[i]+A[i+1];
                    int temp2=A[i]+A[i-1];
                    adjacent_Sum.push_back(temp1);
                    adjacent_Sum.push_back(temp2);
                }
            }
            std::sort(adjacent_Sum.begin(),adjacent_Sum.end(),greater <int>());
            cout << adjacent_Sum[0] << endl;
        }
    }
    return 0;
}