#include <iostream>
#include <string>
using namespace std;

void urlify(string &s, int len)
{
    int spaces = 0;

    for (int i = 0; i < len; i++)
    {
        if (s[i] == ' ')
        {
            spaces++;
        }
    }

    int new_len = len + spaces * 2;

    for (int i = len - 1; i >= 0; i--)
    {
        if (s[i] == ' ')
        {
            s[new_len - 1] = '0';
            s[new_len - 2] = '2';
            s[new_len - 3] = '%';
            new_len = new_len - 3;
        }
        else
        {
            s[new_len - 1] = s[i];
            new_len--;
        }
    }
}

int main()
{
    string s;
    getline(cin, s); // Use getline to read the entire line including spaces

    int len = s.length();
    urlify(s, len);

    cout << s;
    return 0;
}
