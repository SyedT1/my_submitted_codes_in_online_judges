/*
ID: syedmuh1
PROG: palsquare
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
string conv(ll a, ll b)
{
  char rem[20] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I'};
  string s;
  while (a > 0)
  {
    s += rem[a % b];
    a /= b;
  }
  reverse(all(s));
  return s;
}
int main()
{

  ofstream fout("palsquare.out");
  ifstream fin("palsquare.in");
  ll num_base;
  fin >> num_base;
  for (ll i = 1; i <= 300; i++)
  {
    string act = conv(i, num_base), num = conv(i * i, num_base);
    string rev = num;
    reverse(all(rev));
    if (num == rev)
    {
      fout << act << ' ' << rev << endl;
    }
  }
  return 0;
}
