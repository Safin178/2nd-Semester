// CPP
#include<bits/stdc++.h>
using namespace std;


int main()
{
    char x;
    cin >> x;

    if(x >= '0'  && x <= '9') // don't forget 0...9 eigula kinto char so '0' eibabe dite hobe or ascii value dileo hobe
    {
        cout << "IS DIGIT\n";
    }
    else{
        cout << "ALPHA\n";
        if(x >= 'A' && x <= 'Z')
        {
            cout << "IS CAPITAL\n";
        }
        else{
            cout << "IS SMALL\n";
        }
    }
  



   return 0;
}