// A. Anton and Polyhedrons
// https://codeforces.com/problemset/problem/785/A
// Date: 2024-05-10
// Solved by: Arnav Sharma

#include<iostream>
#include<vector>
#define ll long long
using namespace std;

int solution_function(vector<string> &v)
{
  int faces = 0;
  for(string curr: v)
  {
    if(curr == "Tetrahedron")
      faces += 4;
    else if(curr == "Cube")
      faces += 6;
    else if(curr == "Octahedron")
      faces += 8;
    else if(curr == "Dodecahedron")
      faces += 12;
    else if(curr == "Icosahedron")
      faces += 20;
  }

  return faces;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;
  vector<string> v(n);
  for(int i=0;i<n;i++)
    cin>>v[i];
  cout<<solution_function(v);

  return 0;
}
