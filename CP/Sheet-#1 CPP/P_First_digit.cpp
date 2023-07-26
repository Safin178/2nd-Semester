// CPP
#include<bits/stdc++.h>
using namespace std;


int main()
{
  string s;
  cin >> s;

  int x = s[0] - '0';

  if(x % 2 == 0)
  {
    cout << "EVEN\n";
  }
  else cout << "ODD\n";



   return 0;
}