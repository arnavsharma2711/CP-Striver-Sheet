// A. Boy or Girl
// https://codeforces.com/problemset/problem/236/A
// Date: 2024-05-11
// Solved by: Arnav Sharma

#include <bits/stdc++.h>
#define ll long long
using namespace std;

string solution_function(string &name)
{
  set<char> distinct_char;
  for(char ch: name)
    distinct_char.insert(ch);
  return (distinct_char.size() % 2 == 0) ? "CHAT WITH HER!" : "IGNORE HIM!";
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
