#include<bits/stdc++.h>
using namespace std;

int main() 
{
  /*

  */
   int n, i, x;
   cin >> n;
   int a[n], pos, mini=INT32_MAX;
   for(i = 0 ; i  < n; i++)
   {
    cin >> a[i];
    

   }
    for( i = 0; i <= n/2; i++)
    {
        if(a[i] != a[n-1-i])
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");


    

    

    

  
   return 0;
}