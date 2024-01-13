#include <iostream>
#include <unordered_map>
#include <cctype>
#include <string>
using namespace std;

bool palindrome_Permutation(string s)
{
  int n = s.length();

  unordered_map<char, int> m;

  for(int i = 0; i < n; i++)
    {
      if(isalpha(s[i]))
      {
        m[tolower(s[i])]++;
      }
    }

  int odd = 0;
  for(auto pair:m)
    {
      if(pair.second % 2 != 0)
      {
        odd++;
      }
    }

  return odd<=1;
}

int main() {

  string str;
  getline(cin, str);

  bool ans = palindrome_Permutation(str);
  cout<<ans;
  return 0;
}
