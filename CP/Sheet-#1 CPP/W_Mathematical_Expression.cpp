// CPP
#include<bits/stdc++.h>
using namespace std;


int main()
{
  long long x ,y, n;
  char c ,b;
  cin >> x >> c >> y >> b >> n;

   if(c == '+')
  {
    if(x+y == n)
    {cout << "Yes" << endl;
    return 0;}
    else cout << x+y << endl;
  }
  else if(c == '*')
  {
    if(x*y == n)
    {cout << "Yes" << endl;
    return 0;}
    else cout << x*y << endl;
  }
  else if(c == '/')
  {
    if(x/y == n)
    {cout << "Yes" << endl;
    return 0;}
    else cout << x/y << endl;
  }
    else 
    {if(x-y == n)
        {
            cout << "Yes" << endl;
                return 0;
        }
        else cout << x-y << endl;
    }
    



   return 0;
}