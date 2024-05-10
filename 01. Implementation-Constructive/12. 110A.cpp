// A. Nearly Lucky Number
// https://codeforces.com/problemset/problem/110/A
// Date: 2024-05-10
// Solved by: Arnav Sharma

#include <bits/stdc++.h>
#define ll long long
using namespace std;

string solution_function(string &input)
{
  int lucky_count = 0;
  for(char digit: input)
  {
    if(lucky_count > 7)
      return "NO";
    if(digit == '4' || digit == '7')
      ++lucky_count;
  }

  return (lucky_count == 4 || lucky_count == 7) ? "YES" : "NO";
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  string input;
  cin>>input;
  cout<<solution_function(input);

  return 0;
}
