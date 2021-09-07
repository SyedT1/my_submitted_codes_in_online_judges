/*
ID: syedmuh1
PROG: milk
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

  ofstream fout("milk.out");
  ifstream fin("milk.in");
  int req, tar, total_cost = 0;
  fin >> req >> tar;
  pi milk_man[tar];
  for (pi &i : milk_man)
    fin >> i.first >> i.second;
  sort(milk_man, milk_man + tar);
  for (int i = 0; i < tar; i++)
  {
    if (req <= milk_man[i].second)
    {
      total_cost += (milk_man[i].first * req);
      break;
    }
    else
    {
      total_cost += (milk_man[i].first * milk_man[i].second);
      req -= milk_man[i].second;
    }
  }
  fout << total_cost << endl;
  return 0;
}
