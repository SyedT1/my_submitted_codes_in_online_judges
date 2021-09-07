/*
ID: syedmuh1
PROG: transform
LANG: C++
*/
#include <set>
#include <map>
#include <list>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <complex>
#include <sstream>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <numeric>
#include <utility>
#include <functional>
#include <stdio.h>
#include <assert.h>
#include <memory.h>
#include <bitset>
#include <unordered_map>
using namespace std;
#define all(v) ((v).begin()), ((v).end())
#define sz(v) ((int)((v).size()))
#define clr(v, d) memset(v, d, sizeof(v))
typedef long long ll;

const double EPS = (1e-7);
int dcmp(double x, double y) { return fabs(x - y) <= EPS ? 0 : x < y ? -1
                                                                     : 1; }

#define pb push_back
#define MP make_pair
#define pi pair<int, int>
#define P(x) fout << #x << " = { " << x << " }\n"
typedef long double ld;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<vi> vvi;
typedef vector<vd> vvd;
typedef vector<string> vs;

const int MAX = 100;
bool valid(int i, int j) { return 1; }
char maze[MAX][MAX];
bool vis[MAX][MAX];
int main()
{

  ofstream fout("transform.out");
  ifstream fin("transform.in");
  int n;
  fin >> n;
  vector<int> vlo;
  char ar[n + 1][n + 1], chk[n + 1][n + 1];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      fin >> ar[i][j];
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      fin >> chk[i][j];
    }
  }
  int mil = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (ar[i][j] == chk[i][j])
      {
        mil++;
      }
    }
  }
  bool same = (mil == n * n);
  mil = 0;
  char reflect[n + 1][n + 1];
  bool reflection = false;
  for (int i = 0; i < n; i++)
  {
    for (int j = n - 1; j >= 0; j--)
    {
      if (ar[i][j] == chk[i][n - (j + 1)])
      {
        mil++;
      }
      reflect[i][j] = ar[i][n - (j + 1)];
    }
  }
  reflection = (mil == n * n);
  char trans[n + 1][n + 1];
  mil = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      trans[j][i] = ar[n - (i + 1)][j];
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (chk[i][j] == trans[i][j])
      {
        mil++;
      }
    }
  }
  if (mil == n * n)
    vlo.pb(1);
  char trans2[n + 1][n + 1];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      trans2[j][i] = trans[n - (i + 1)][j];
    }
  }
  mil = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (chk[i][j] == trans2[i][j])
      {
        mil++;
      }
    }
  }
  if (mil == n * n)
    vlo.pb(2);
  mil = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      trans[j][i] = trans2[n - (i + 1)][j];
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (chk[i][j] == trans[i][j])
        mil++;
    }
  }
  if (mil == n * n)
    vlo.pb(3);
  vector<int> vel;
  mil = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      trans[j][i] = reflect[n - (i + 1)][j];
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (chk[i][j] == trans[i][j])
      {
        mil++;
      }
    }
  }
  if (mil == n * n)
    vel.pb(1);
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      trans2[j][i] = trans[n - (i + 1)][j];
    }
  }
  mil = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (chk[i][j] == trans2[i][j])
      {
        mil++;
      }
    }
  }
  if (mil == n * n)
    vel.pb(2);
  mil = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      trans[j][i] = trans2[n - (i + 1)][j];
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (chk[i][j] == trans[i][j])
        mil++;
    }
  }
  if (mil == n * n)
    vel.pb(3);
  if (same)
  {
    if (vlo.size())
    {
      fout << vlo[0] << endl;
    }
    else
    {
      fout << 6 << endl;
    }
    return 0;
  }
  if (vlo.size())
  {
    fout << vlo[0] << endl;
  }
  else
  {
    if (vel.size())
    {
      fout << 5 << endl;
    }
    else
    {
      if (reflection)
      {
        fout << 4 << endl;
      }
      else
      {
        fout << 7 << endl;
      }
    }
  }
}
