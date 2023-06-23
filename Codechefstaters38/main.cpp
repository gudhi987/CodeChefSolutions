#include <iostream>
using namespace std;
int main()
{
    /*int T;
    int X;
    cin >> T;
    for(int i=0;i<T;++i)
    {
        cin >> X;
        if(X>30)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }*/
    /*int T;
    cin >> T;
    for(int i=0;i<T;++i)
    {
        int N,X,K;
        cin >> N >> X >> K;
        int required_money = N*X;
        if(required_money > K)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }*/
    /*int T;
    cin >> T;
    for(int i=0;i<T;++i)
    {
        int NA,NB,NC;
        cin >> NA >> NB >> NC;
        if(NA > NB + NC)
        {
            cout << "YES" << endl;
        }
        else if(NB > NA + NC)
        {
            cout << "YES" << endl;
        }
        else if(NC > NA + NB)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }*/
  /*  int T;
    cin >> T;
    for(int i=0;i<T;++i)
    {
        int A,B,M;
        cin >> A >> B >> M;
        int alongforward;
        if(B > A)
        {
            alongforward = B - A;
        }
        else
        {
            alongforward = A - B;
        }
        int alongbackward;
        if((M+A)>B)
        {
            alongbackward = M + A - B;
        }
        else
        {
            alongbackward = (B - (M+A));
        }   
        if(alongforward < alongbackward)
        {
            cout << alongforward << endl;
        }
        else
        {
            cout << alongbackward << endl;
        }
    }*/
    int T;
    cin >> T;
    for(int a=0;a<T;++a)
    {
        int N;
        cin >> N;
        int A[N];
        int B[N];
        int count {0};
        for(int b=0;b<N;++b)
        {
            cin >> A[b];
        }
        for(int b=0;b<N;++b)
        {
            cin >> B[b];
        }
        for(int i=0;i<N;++i)
        {
            for(int j=i+1;j<N;++j)
            {
                if(A[i] == B[j])
                    if(B[i] == A[j])
                        ++count;
            }
        }
        cout << count << endl;
    }
    return 0;
}