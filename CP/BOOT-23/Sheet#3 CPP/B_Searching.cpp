#include<bits/stdc++.h>
using namespace std;

int main() 
{
  /*

  */
   int n, i, x;
   cin >> n;
   int a[n];
   for(i = 0 ; i  < n; i++)
   {
    cin >> a[i];
   }
   cin >> x;
   for(i= 0; i < n; i++)
   {
    if(a[i] == x)
    {
        printf("%d\n", i);
        return 0;
    }
   }
   printf("-1\n");
  
   

    

    

    

  
   return 0;
}