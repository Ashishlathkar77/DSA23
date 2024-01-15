#include <iostream>
#include <string>
using namespace std;

string compressString(string s)
{
  int len = s.length();
  int count = 1;
  string compressed;

  for(int i=1; i<len; i++)
    {
      if(s[i] == s[i-1])
      {
        count++;
      }
      else
      {
        compressed += s[i-1] + to_string(count);
        count = 1;
      }
    }
  compressed += s[len-1] + to_string(count);
  return (compressed.length() >= s.length()) ? s : compressed ;
}

int main() {
  string str;
  cin>>str;

  string s = compressString(str);
  cout<<s;
  return 0;
}
