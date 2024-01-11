#include <iostream>
using namespace std;

bool isUnique(string str)
{
  int len = str.length();
  int i=0, j=0;
  while(i<len-1)
    {
      j = i+1;
      while(j<len)
        {
          if(str[j] == str[i])
          {
            return false;
          }
          j++;
        }
      i++;
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
