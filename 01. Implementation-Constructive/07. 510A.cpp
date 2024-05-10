// A. Fox And Snake
// https://codeforces.com/problemset/problem/510/A
// Date: 2024-05-10
// Solved by: Arnav Sharma

#include<iostream>
#define ll long long
using namespace std;

void solution_function(int r, int c)
{
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
      if(i%2==0)
        cout<<"#";
      else
      {
        if(j == c-1 && i%4 == 1)
          cout<<"#";
        else if(j == 0 && i%4 == 3)
          cout<<"#";
        else
          cout<<".";
      }
    }
    cout<<endl;
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int r, c;
  cin>>r>>c;
  solution_function(r, c);

  return 0;
}
