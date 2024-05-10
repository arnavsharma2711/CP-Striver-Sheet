// A. Tram
// https://codeforces.com/problemset/problem/116/A
// Date: 2024-05-10
// Solved by: Arnav Sharma

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;
  
  int max_needed_capacity = 0;
  int curr_capacity = 0;
  while(n--)
  {
    int exit, enter;
    cin>>exit>>enter;

    curr_capacity -= exit;
    curr_capacity += enter;

    max_needed_capacity = max(max_needed_capacity, curr_capacity);
  }

  cout<<max_needed_capacity;

  return 0;
}
