// A. Soft Drinking
// https://codeforces.com/problemset/problem/151/A
// Date: 2024-05-10
// Solved by: Arnav Sharma

#include<iostream>
#define ll long long
using namespace std;

int solution_function(int numFriends, int numBottles, int millilitersPerBottle, int numLimes, int slicesPerLime, int totalSalt, int drinkPerServing, int saltPerServing)
{
  int totalLimeSlices = numLimes * slicesPerLime;
  int totalDrinkServings = (numBottles * millilitersPerBottle) / drinkPerServing;
  int totalSaltServings = totalSalt / saltPerServing;
  
  int minimumServings = min(totalDrinkServings, min(totalLimeSlices, totalSaltServings)) / numFriends;
  
  return minimumServings;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, k, l, c, d, p, nl, np;
  cin>>n>>k>>l>>c>>d>>p>>nl>>np;
  cout<<solution_function(n, k, l, c, d, p, nl, np);

  return 0;
}
