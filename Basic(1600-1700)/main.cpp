//Problem Sort
//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//void solution()
//{
//    int p,s;
//    cin >> p >> s;
//    vector<vector<int>>scores;
//    vector<vector<int>>people_solved;
//    vector<vector<int>>difficulty;
//    for(int i=0;i<2*p;i++)
//    {
//        vector<int>temp;
//        for(int j=0;j<s;j++)
//        {
//            int temp2;
//            cin >> temp2;
//            temp.push_back(temp2);
//        }
//        if(i%2==0)
//        {
//            scores.push_back(temp);
//        }
//        else
//        {
//            people_solved.push_back(temp);
//        }
//    }
//    for(int i=0;i<p;i++)
//    {
//        unordered_map<int,int>mp;
//        for(int j=0;j<s;j++)
//        {
//            mp[scores[i][j]]=people_solved[i][j];
//        }
//        vector<int>temp=scores[i];
//        sort(temp.begin(),temp.end());
//        vector<int>ans;
//        for(int i=0;i<s;i++)
//        {
//            ans.push_back(mp[temp[i]]);
//        }
//        int count=0;
//        for(int i=0;i<s-1;i++)
//        {
//            if(ans[i]>ans[i+1])
//            {
//                count++;
//            }
//        }
//        difficulty.push_back({count,i+1});
//    }
//    sort(difficulty.begin(),difficulty.end());
//    for(int i=0;i<difficulty.size();i++)
//    {
////        for(int j=0;j<2;j++)
////        {
////            cout << difficulty[i][j] << " ";
////        }
////        cout << endl;
//        cout << difficulty[i][1] << endl;
//    }
//}
//int main()
//{
//    solution();
//    return 0;
//}


//Beautiful Garland
//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//void solution()
//{
//    string s;
////    getline(cin,s);
//    cin >> s;
//    int n=s.length();
//    if(n%2!=0)
//    {
//        cout << "no" << endl;
//    }
//    else
//    {
//        int countG=0;
//        int countR=0;
//        for(int i=0;i<n;i++)
//        {
//            if(s[i]=='G')
//            {
//                countG++;
//            }
//            else
//            {
//                countR++;
//            }
//        }
//        if(countG!=countR)
//        {
//            cout << "no" << endl;
//        }
//        else
//        {
//            int flag=0;
//            int count=1;
//            for(int i=1;i<n;i++)
//            {
//                if(s[i]==s[i-1])
//                {
//                    count++;
//                    if(count>=3)
//                    {
//                        flag=1;
//                        break;
//                    }
//                }
//                else
//                {
//                    count=1;
//                }
//            }
//            if(count>=3)
//            {
//                flag=1;
//            }
//            if(flag==1)
//            {
//                cout << "no" << endl;
//            }
//            else
//            {
//                cout << "yes" << endl;
//            }
//        }
//    }
//}
//int main()
//{
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        solution();
//    }
//    return 0;
//}

//Chef and digits
//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//int main() {
//	int n,m;
//	cin >> n >> m;
//	string s;
//	cin >> s;
//	vector<int>index(m);
//	for(int i=0;i<m;i++)
//	{
//	    cin >> index[i];
//	}
//    unordered_map<int,int>mp;
//    vector<int>ans;
//    for(int i=0;i<n;i++)
//    {
//        int sum=0;
//        int curr=s[i]-'0';
//        for(int j=0;j<10;j++)
//        {
//            sum+=abs(curr-j)*mp[j];
//        }
//        ans.push_back(sum);
//        mp[curr]++;
//    }
//    for(int i=0;i<m;i++)
//    {
//        cout << ans[index[i]-1] << endl;
//    }
//	return 0;
//}


#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n,m,q;
    cin >> n >> m >> q;
    vector<vector<int>>queries(q,vector<int>(2));
    for(int i=0;i<q;i++)
    {
        cin >> queries[i][0] >> queries[i][1];
    }
    vector<int>rows(n,0);
    vector<int>columns(m,0);
    for(int i=0;i<q;i++)
    {
        rows[queries[i][0]-1]++;
        columns[queries[i][1]-1]++;
    }
//    int count=0;
//    for(int i=0;i<m;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            if((rows[j]+columns[i])%2!=0)
//            {
//                count++;
//            }
//        }
//    }
//    cout << count << endl;
    int row_o=0,column_o=0;
    for(int i=0;i<n;i++)
    {
        if(rows[i]%2!=0 && rows[i]>0)
        {
            row_o++;
        }
    }
    for(int i=0;i<m;i++)
    {
        if(columns[i]%2!=0 && columns[i]>0)
        {
            column_o++;
        }
    }
    long long int ans=(row_o*(m-column_o))+((n-row_o)*column_o);
    cout << ans << endl;
}
int main() {
	int t;
    cin >> t;
    while(t--)
    {
        solution();
    }
	return 0;
}
