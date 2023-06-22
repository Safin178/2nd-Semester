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
    if(a[i]<mini)
    {
        pos = i;
        mini = a[i];
    }

   }
   printf("%d %d\n", mini,pos+1);


    

    

    

  
   return 0;
}