// A. The New Year: Meeting Friends
// https://codeforces.com/problemset/problem/723/A
// Date: 2024-05-10
// Solved by: Arnav Sharma

#include<iostream>
#define ll long long
using namespace std;

int solution_function(int a, int b, int c)
{
  int max_distance = max(a, max(b, c));
  int min_distance = min(a, min(b, c));

  return max_distance - min_distance;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int a, b, c;
  cin>>a>>b>>c;
  cout<<solution_function(a, b, c);

  return 0;
}
