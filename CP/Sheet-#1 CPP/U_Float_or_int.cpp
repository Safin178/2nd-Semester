// CPP
#include<bits/stdc++.h>
using namespace std;


int main()
{
  double n;
  cin >> n;

  int a = n;
  if(n-a > 0)
  {
    cout << "float " << a <<" " << n-a <<  endl;
  }
  else cout << "int " << a << endl;



   return 0;
}