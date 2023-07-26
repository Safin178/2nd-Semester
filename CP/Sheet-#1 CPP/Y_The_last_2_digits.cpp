// CPP
#include<bits/stdc++.h>
using namespace std;


int main()
{
  long long a , b, c, d;
  cin >> a >> b >> c >> d;

  a = a % 100;
  b = b % 100;
  c = c % 100;
  d = d % 100;
  if((a*b*c*d) % 100 <= 9)cout << 0;
  cout << (a*b*c*d) % 100 << endl;




   return 0;
}