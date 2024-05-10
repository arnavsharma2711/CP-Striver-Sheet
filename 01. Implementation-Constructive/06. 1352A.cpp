// A. Sum of Round Numbers
// https://codeforces.com/problemset/problem/1352/A
// Date: 2024-05-10
// Solved by: Arnav Sharma

#include<iostream>
#include<vector>
#include<cmath>
#define ll long long
using namespace std;

void solution_function(string num)
{
    vector<int> ans;
    for(int i=0; i<num.size(); i++)
    {
        if (num[i] != '0')
        {
            ans.push_back((num[i] - '0') * pow(10, num.size() - i - 1));
        }
    }
    cout<<ans.size()<<endl;
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;
  while(t--)
  {
    string num;
    cin>>num;
    solution_function(num);
  }

  return 0;
}
