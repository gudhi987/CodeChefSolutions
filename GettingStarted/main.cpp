/*Chef and Operators*/
//#include <iostream>
//using namespace std;
//int main()
//{
//    int T;
//    cin >> T;
//    for(int i=0;i<T;++i)
//    {
//        int A,B;
//        cin >> A >> B;
//        if(A>B)
//            cout << ">" << endl;
//        else if(A<B)
//            cout << "<" << endl;
//        else
//            cout << "=" << endl;
//    }
//    return 0;
//}
/*ATM*/
//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//    unsigned int X;
//    unsigned float Y;
//    cin >> X >> Y;
//    float CurrentBankBalance;
//    if(X<=Y)
//    {
//        if(X%5 == 0)
//        {
//            CurrentBankBalance = Y -(X + 0.50);
//            cout << fixed << setprecision (2) << CurrentBankBalance << endl;
//        }
//        else
//        {
//            CurrentBankBalance = Y;
//            cout << fixed << setprecision (2) << CurrentBankBalance << endl;
//        }
//    }
//    else
//    {
//        CurrentBankBalance = Y;
//        cout << fixed << setprecision (2) << CurrentBankBalance << endl;
//    }
//    return 0;
//}
//First and Last Digit
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
        int temp = N;
        int ans=0;
        while(N>0)
        {
            ans = (ans*10) + N%10;
            N = N/10;
        }
        int N2 = ans;
        int rem1 = temp%10;
        int rem2 = N2%10;
        int req = rem1 + rem2;
        cout << req << endl;
    }
    return 0;
}