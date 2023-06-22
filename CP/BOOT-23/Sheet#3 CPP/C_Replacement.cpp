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
    if(a[i]>0)a[i]=1;
    else if(a[i] < 0)a[i]=2;
   }
   
   for(i= 0; i < n; i++)
   {
   
        printf("%d ", a[i]);
        
    
   }
  
  
   

    

    

    

  
   return 0;
}