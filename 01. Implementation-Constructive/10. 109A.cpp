// A. In Search of an Easy Problem
// https://codeforces.com/problemset/problem/109/A
// Date: 2024-05-10
// Solved by: Arnav Sharma

#include <bits/stdc++.h>
#define ll long long
using namespace std;

string solution_function(vector<int> &v)
{
  for(int ques: v)
    if(ques != 0)
      return "HARD";

  return "EASY";
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++)
    cin>>v[i];
  cout<<solution_function(v);

  return 0;
}
