/*
ID: syedmuh1
PROG: barn1
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
#define par pair<int, int>
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
  ofstream fout("barn1.out");
  ifstream fin("barn1.in");
  int slabs, tar, n,tl = 0;
  fin >> slabs >> tar >> n;
  vector<int> vec(n);
  for (int &i : vec)
  {
    fin >> i;
  }
  sort(vec.begin(), vec.end());
  vector<vector<int>> barn_cattle(n, vector<int>(n, 0));
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      barn_cattle[i][j] = vec[j] - vec[i] + 1;
    }
  }
  int minmum = barn_cattle[0][n - 1];
  for (int i = 0; i < n - 1; i++)
  {
    stack<par> qp;
    qp.push({0, i});
    int knot = 2;
    for (; knot <= slabs && qp.top().second != n - 1; knot++)
    {
      if (qp.top().first == qp.top().second)
      {
        if (knot < slabs)
        {
          qp.push({qp.top().second + 1, qp.top().second + 1});
        }
        else
        {
          qp.push({qp.top().second + 1, n - 1});
        }
      }
      else
      {
        if (knot < slabs)
        {
          qp.push({qp.top().second + 1, qp.top().second + 1});
        }
        else
        {
          qp.push({qp.top().second + 1, n - 1});
        }
      }
    }
    knot = slabs;
    while (qp.size())
    {
      int res = n; // 8
      while (knot <= slabs && qp.top().second != res - 1)
      {
        if (qp.top().first == qp.top().second)
        {
          if (knot == slabs)
            qp.push({qp.top().first + 1, res - 1});
          else
            qp.push({qp.top().first + 1, qp.top().first + 1});
        }
        else
        {
          if (knot == slabs)
            qp.push({qp.top().second + 1, res - 1});
          else
          {
            qp.push({qp.top().second + 1, res - 1});
          }
        }
        knot++;
      }

      int sum = 0;
      tl++;
      for (stack<par> i = qp; !i.empty(); i.pop())
      {
        cout << i.top().first << ' ' << i.top().second << endl;
        sum += barn_cattle[i.top().first][i.top().second];
      }
      if (qp.size() > slabs)
      {
        cout << "Yeah\n";
      }
      cout << "Finish--------------------------------------\n";
      minmum = min(minmum, sum);
      qp.pop();
      knot = qp.size();
      if (qp.size() == 1)
        break;
      qp.top().second++;
    }
  }
  cout<<tl<<endl;
  fout << minmum << endl;
  return 0;
}
