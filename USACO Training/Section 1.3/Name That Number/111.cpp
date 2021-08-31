/*
ID: syedmuh1
PROG: namenum
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
  ofstream fout("namenum.out");
  ifstream fin("namenum.in"), dic("dict.txt");
  ll n;
  fin >> n;
  bool vis = true;
  for (string str; dic >> str;)
  {
    ll extr = 0;
    for (char c : str)
    {
      if (set<char>{'A', 'B', 'C'}.count(c))
        extr = (extr * 10) + 2;
      else if (set<char>{'D', 'E', 'F'}.count(c))
        extr = (extr * 10) + 3;
      else if (set<char>{'G', 'H', 'I'}.count(c))
        extr = (extr * 10) + 4;
      else if (set<char>{'J', 'K', 'L'}.count(c))
        extr = (extr * 10) + 5;
      else if (set<char>{'M', 'N', 'O'}.count(c))
        extr = (extr * 10) + 6;
      else if (set<char>{'P', 'R', 'S'}.count(c))
        extr = (extr * 10) + 7;
      else if (set<char>{'T', 'U', 'V'}.count(c))
        extr = (extr * 10) + 8;
      else if (set<char>{'W', 'X', 'Y'}.count(c))
        extr = (extr * 10) + 9;
    }
    if (extr == n)
    {
      vis = false;
      fout << str << endl;
    }
  }
  if (vis)
    fout << "NONE" << endl;
  return 0;
}
