## Breaking Necklace
```cpp
/*
ID: syedmuh1
PROG: beads
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
#define P(x) cout << #x << " = { " << x << " }\n"
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
  ofstream fout("beads.out");
  ifstream fin("beads.in");
  int n;
  fin >> n;
  string s;
  fin >> s;
  set<char> chalo;
  for (char c : s)
    chalo.insert(c);
  if (chalo.size() < 3 && !(chalo.count('r') && chalo.count('b')))
  {
    fout << s.length() << endl;
    return 0;
  }
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    char first = s[0];
    int j = 0, paint = 0;
    stack<pair<char, int>> bOt;
    while (s[j] == 'w' && j < n)
    {
      j++, paint++;
    }

    for (; j < n; j++)
    {
      char store_char = s[j];
      int char_rep = 0;
      while (s[j] == s[j + 1] && j < n - 1)
      {
        char_rep++;
        j++;
      }
      char_rep++;
      if (!bOt.empty())
      {
        if (bOt.top().first == store_char || store_char == 'w')
        {
          bOt.top().second += char_rep;
          continue;
        }
      }
      bOt.push({store_char, char_rep});
      if (paint)
      {
        bOt.top().second += paint;
        paint = 0;
      }
    }
    int previous_el = bOt.top().second;
    bOt.pop();
    while (!bOt.empty())
    {
      ans = max(ans, bOt.top().second + previous_el);
      previous_el = bOt.top().second;
      bOt.pop();
    }
    s = &s[1];
    s += first;
  }
  fout << ans << endl;
  return 0;
}
```
