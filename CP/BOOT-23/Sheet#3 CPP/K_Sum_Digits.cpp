#include<bits/stdc++.h>
using namespace std;

int main() 
{
  /*

  */
    int t=1;
    //cin >> t;
    while(t--)
    {
        //string approach
        int n, sum = 0;
        cin >> n;
        string s;
        cin >> s;
        for(int i = 0; i < s.size(); i++)
        {
            sum += (int)( s[i] - '0');
        }
       cout << sum;

    }
   
  
   

    

    

    

  
   return 0;
}