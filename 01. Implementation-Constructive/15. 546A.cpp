// A. Soldier and Bananas
// https://codeforces.com/problemset/problem/546/A
// Date: 2024-05-11
// Solved by: Arnav Sharma

#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll solution_function(ll price, ll dollars, ll bananas)
{
  int total_price = 0;
  for(int i=1; i<=bananas; i++)
    total_price += price * i;

  return (total_price > dollars ) ? total_price - dollars : 0;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll price, dollars, bananas;
  cin>>price>>dollars>>bananas;

  cout<<solution_function(price, dollars, bananas);

  return 0;
}
