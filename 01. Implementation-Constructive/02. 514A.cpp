// A. Chewbaсca and Number
// https://codeforces.com/contest/514/problem/A
// Date: 2023-12-27
// Solved by: Arnav Sharma

#include<iostream>
#define ll long long
using namespace std;

string solution_function(string input)
{
  ll first_digit = input[0] - '0';
  if (first_digit > 4 && first_digit != 9)
  {
    input[0] = 9 - first_digit + '0';
  }

  for (int i = 1; i < input.length(); i++)
  {
    ll current_digit = input[i] - '0';
    if (current_digit > 4)
    {
      input[i] = 9 - current_digit + '0';
    }
  }

  return input;
}

int main()
{
  string input;
  cin>>input;
  cout<<solution_function(input);

  return 0;
}
