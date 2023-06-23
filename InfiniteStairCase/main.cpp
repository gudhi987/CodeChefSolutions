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
        N--;
        int ans=(N/5)*2;
        N%=5;
        if(N==4)
        {
            ans+=2;
        }
        else if(N!=0)
        {
            ans+=1;
        }
        else{
            
        }
        cout << ans << endl;
    }
    return 0;
}