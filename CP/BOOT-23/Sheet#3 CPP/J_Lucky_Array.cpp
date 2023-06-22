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
        int n;
        cin >> n;
    
        int a[n];
        int i, j, m =INT32_MAX, cnt = 0;

        for(i = 0; i < n; i++)
            {
                cin >> a[i];
               if(m > a[i])
               {
                 m=a[i];
               }
            }
        for(i = 0; i<n; i++)
            {
                if(a[i] == m)
                {
                    cnt++;
                }
            }
        if(cnt % 2 == 0) 
           cout << "Unlucky";

        else 
           cout <<"Lucky\n";

    }
   
  
   

    

    

    

  
   return 0;
}