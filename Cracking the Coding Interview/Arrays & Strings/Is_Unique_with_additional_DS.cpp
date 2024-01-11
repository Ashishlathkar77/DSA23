#include <iostream>
#include <unordered_map>
using namespace std;

bool isUnique(string str)
{
  int len = str.length();
  unordered_map<char, int> mp;

  for(int i=0; i<len; i++)
    {
      if(mp.find(str[i]) != mp.end())
      {
        return false;
      }
      mp[str[i]]++;
    }

  return true;
}

int main() {

  string s;
  cin>>s;

  bool result = isUnique(s);

  cout<<result;
  return 0;
}
