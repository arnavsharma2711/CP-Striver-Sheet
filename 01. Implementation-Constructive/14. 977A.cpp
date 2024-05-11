// A. Wrong Subtraction
// https://codeforces.com/problemset/problem/977/A
// Date: 2024-05-11
// Solved by: Arnav Sharma

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int solution_function(int num, int k)
{
  while(k--)
  {
    if(num % 10 == 0)
      num /= 10;
    else
      --num;
  }  
  return num;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, k;
  cin>>n>>k;

  cout<<solution_function(n,k);

  return 0;
}
