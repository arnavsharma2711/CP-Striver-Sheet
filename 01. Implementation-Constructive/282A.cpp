// A. Bit++
// https://codeforces.com/problemset/problem/282/A
// Date: 2023-12-17
// Solved by: Arnav Sharma

#include<iostream>
# define ll long long
using namespace std;

int solution_function(string &statement, ll &x)
{
  if(statement.substr(0,2) == "++" || statement.substr(1,2) == "++")
    return ++x;
  else if (statement.substr(0,2) == "--" || statement.substr(1,2) == "--")
    return --x;
  else
    return 0;
}

int main()
{
  ll steps, x = 0;
  cin>>steps;
  while(steps--)
  {
    string statement;
    cin>>statement;
    solution_function(statement, x);
  }
  cout<<x<<endl;
  return 0;
}
