// A. Presents
// https://codeforces.com/problemset/problem/136/A
// Date: 2024-05-10
// Solved by: Arnav Sharma

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solution_function(vector<int> &v)
{
  for(int i=1;i<v.size();i++)
  {
    cout<<v[i]<<" ";
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, x;
  cin>>n;
  vector<int> v(n+1);
  for(int i=1;i<=n;i++)
  {
    cin>>x;
    v[x] = i;
  }
  solution_function(v);

  return 0;
}
