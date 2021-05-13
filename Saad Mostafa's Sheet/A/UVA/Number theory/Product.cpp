#include <iostream>
using namespace std;
void sumof(string &a, string b)
{
    int alen = a.length(), blen = b.length();
    if (alen < blen)
    {
        swap(alen, blen);
        swap(a, b);
    }
    int carr = 0, eval = alen - 1;
    for (int i = blen - 1; i >= 0; i--, eval--)
    {
        int dig = (a[eval] - '0' + b[i] - '0') + carr;
        a[eval] = char((dig % 10) + '0');
        carr = dig / 10;
    }
    while (eval >= 0)
    {
        int dig = a[eval] - '0' + carr;
        a[eval--] = char((dig % 10) + '0');
        carr = dig / 10;
    }
    if (carr)
        a = to_string(carr) + a;
}
void product(string a, string b)
{
    string sum = "0";
    if (a == "0" || b == "0")
    {
        cout << sum << '\n';
        return;
    }
    int alen = a.length(), blen = b.length();
    if (alen < blen)
    {
        swap(alen, blen);
        swap(a, b);
    }
    int eval = alen - 1;
    for (int i = blen - 1, m = 0; i >= 0; i--, eval--, m++)
    {
        int carr = 0;
        string temp_a = a;
        for (int j = alen - 1; j >= 0; j--)
        {
            int dig = (temp_a[j] - '0') * (b[i] - '0') + carr;
            temp_a[j] = char((dig % 10) + '0');
            carr = dig / 10;
        }
        if (carr)
            temp_a = to_string(carr) + temp_a;
        temp_a += string(m, '0');
        sumof(sum, temp_a);
    }
    cout << sum << '\n';
}
int main()
{
    while (1)
    {
        string a, b;
        cin >> a;
        if (feof(stdin))
            break;
        cin >> b;
        product(a, b);
    }
}
