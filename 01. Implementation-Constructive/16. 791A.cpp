// A. Bear and Big Brother
// https://codeforces.com/problemset/problem/791/A
// Date: 2024-05-11
// Solved by: Arnav Sharma

#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll solution_function(ll a, ll b)
{
  int count = 0;

  while (a <= b)
  {
    a *= 3;
    b *= 2;
    ++count;
  }
  return count;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll a, b;
  cin>>a>>b;

  cout<<solution_function(a, b);

  return 0;
}
