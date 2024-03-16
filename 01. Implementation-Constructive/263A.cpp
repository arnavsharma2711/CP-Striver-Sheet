// A. Beautiful Matrix
// https://codeforces.com/problemset/problem/263/A
// Date: 2023-12-27
// Solved by: Arnav Sharma

#include<iostream>
#define ll long long
using namespace std;

ll solution_function(int matrix[5][5] )
{
  ll row, column;
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++) 
    {
      if (matrix[i][j] == 1)
      {
        row = i;
        column = j;
      }
    }
  }

  return abs(row - 2) + abs(column - 2);
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int matrix[5][5];
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++) 
    {
      cin>>matrix[i][j];
    }
  }
  cout<<solution_function(matrix);

  return 0;
}
