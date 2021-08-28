### [Milking Cows](https://train.usaco.org/usacoprob2?a=xsgPUkoGhjI&S=milk2)
```cpp
/*
ID: syedmuh1
PROG: milk2
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
  ofstream fout("milk2.out");
  ifstream fin("milk2.in");
  int n;
  fin >> n;
  vector<pi> v;
  for (int i = 0; i < n; i++)
  {
    int left, right;
    fin >> left >> right;
    v.pb({left, right});
  }
  if (n == 1)
  {
    fout << v[0].second - v[0].first << ' ' << 0 << endl;
    return 0;
  }
  sort(all(v));
  int right = 0, max_left = 0, alt_max = v[0].second;
  for (auto i : v)
  {
    if (!right)
    {
      right = i.second;
      continue;
    }
    else if (i.first > right && i.first > alt_max)
      max_left = max(max_left, i.first - alt_max);
    right = i.second;
    alt_max = max(alt_max, i.second);
  }
  int max_occ = 0;
  for (int i = 0; i < n - 1; i++)
  {
    max_occ = max(max_occ, v[i].second - v[i].first);
    if (v[i + 1].first > v[i].second)
      continue;
    int look_last = v[i].second;
    for (int j = i + 1; j < n; j++)
    {
      if ((v[j].first >= v[i].first && v[j].first <= look_last) || (v[j].second >= v[i].first && v[j].second <= look_last))
        look_last = max(look_last, v[j].second);
    }
    max_occ = max(max_occ, look_last - v[i].first);
  }
  fout << max_occ << ' ' << max_left << endl;
  return 0;
}
