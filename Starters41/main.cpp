//#include <iostream>
//using namespace std;
//int main()
//{
//    int X,Y;
//    cin >> X >> Y;
//    if(X<Y)
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
//        int amount;
//        amount = (5*X)+(10*Y);
//        cout << amount/Z << endl;
//    }
//    return 0;
//}
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//int main()
//{
//    int T;
//    cin >> T;
//    for(int i=0;i<T;++i)
//    {
//        int Pa,Pb,Qa,Qb;
//        cin >> Pa >> Pb >> Qa >> Qb;
//        int penalty1 = max(Pa,Pb);
//        int penalty2 = max(Qa,Qb);
//        if(penalty1>penalty2)
//        {
//            cout << "Q" << endl;
//        }
//        else if(penalty1==penalty2)
//        {
//            cout << "TIE" << endl;
//        }
//        else
//        {
//            cout << "P" << endl;
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
//        int X,Y;
//        cin >> X >> Y;
//        int result;
//        int count {0};
//        if(X==Y)
//        {
//            result=0;
//        }
//        else
//        {
//                while(X>Y)
//                {
//                    if((X-Y)>=2)
//                    {
//                        int temp = (X-Y)/2;
//                        Y = Y + (2*temp);
//                        count = count + temp;
//                    }
//                    else
//                    {
//                    Y=Y+2;
//                    ++count;
//                    }
//                    if(X==Y)
//                    {
//                        break;
//                    }
//                }
//                while(X<Y)
//                {
//                    int temp = Y-X;
//                    X+=temp;
//                    count = count + temp;
//                    if(X==Y)
//                    { 
//                        break;
//                    }
//                }
//            result = count;
//        }
//        cout << result << endl;
//    }
//    return 0;
//}
