#include <iostream>
#include <string>
using namespace std;

bool isRotation(string& s1, string& s2)
{
    if (s1.length() != s2.length())
    {
      return false;
    }

  string concatenation = s1 + s1;

  size_t pos = concatenation.find(s2);

  return pos != string::npos;
}

int main() {

  string s1, s2;
  cin>>s1>>s2;

  bool result = isRotation(s1, s2);

  if(result)
  {
    cout<<"True";
  }
  else
  {
    cout<<"False";
  }

  return 0;
}
