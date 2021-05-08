#include <iostream>
#include <stack>
#include <utility>
using namespace std;
int main()
{
   int i = 0;
   string xml;
   cin >> xml;
   stack<pair<char, pair<char, int>>> blc;
   for (char c : xml)
   {
      if (isalpha(c))
      {
         if (blc.empty())
         {
            cout << "<" << c << ">" << endl;
            blc.push({c, {'<', 0}});
         }
         else
         {
            if (blc.top().first == c && xml[i - 1] == '/')
            {
               cout << string(2 * blc.top().second.second, ' ') + "</" << c << ">" << endl;
               blc.pop();
            }
            else
            {
               cout << string(2 * (blc.top().second.second + 1), ' ') + "<" << c << ">" << endl;
               blc.push({c, {xml[i - 1], blc.top().second.second + 1}});
            }
         }
      }
      i++;
   }
}
