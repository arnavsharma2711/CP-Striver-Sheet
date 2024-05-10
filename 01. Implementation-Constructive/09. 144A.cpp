// A. Arrival of the General
// https://codeforces.com/problemset/problem/144/A
// Date: 2024-05-10
// Solved by: Arnav Sharma

#include<iostream>
#include<vector>
#define ll long long
using namespace std;

int solution_function(vector<int> &v)
{
  int max_index = 0, min_index = 0;
  for(int i=1;i<v.size();i++)
  {
    if(v[i] > v[max_index])
      max_index = i;
    if(v[i] <= v[min_index])
      min_index = i;
  }
  
  if(max_index < min_index)
    return max_index + (v.size() - 1 - min_index);
  else
    return max_index + (v.size() - 1 - min_index) - 1;
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
