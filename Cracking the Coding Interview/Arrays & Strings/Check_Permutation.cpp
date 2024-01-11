#include <iostream>
using namespace std;

bool checkPermutation(string str1, string str2)
{
    int n1 = str1.length();
    int n2 = str2.length();
    if(n1 != n2)
      return false;

    int ans = 0;
    for (char ch : str1)
    {
      ans = ans ^ ch;
    }

    for (char ch : str2)
    {
      ans = ans ^ ch;
    }

  return ans == 0;
}

int main() {

  string s1, s2;
  cin>>s1>>s2;

  bool result = checkPermutation(s1, s2);

  cout<<result;
  return 0;
}
