#include <iostream>
using namespace std;
bool is_Square(int left, int right, int tar)
{
    if (left > right)
    {
        return false;
    }
    int mid = left + (right - left) / 2;
    if (mid * mid == tar)
    {
        return true;
    }
    else if (mid * mid < tar)
    {
        return is_Square(mid + 1, right, tar);
    }
    else
    {
        return is_Square(left, mid - 1, tar);
    }
}
bool is_Square(int x)
{
    return is_Square(0, x, x);
}
int main()
{
    string out[] = {"not a square", "a square"};
    for (int i = 0; i <= 16; i++)
        cout << i << " is " << out[is_Square(i)] << endl;
}
