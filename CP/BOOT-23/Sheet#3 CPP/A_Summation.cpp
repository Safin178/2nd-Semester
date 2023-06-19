#include<bits/stdc++.h>
using namespace std;

int main() 
{
  /*
    for this- abs ki shikte hobe ,
    in cpp lets try input
  */
   int n, i;
   cin >> n;
   int x[n];
   int sum = 0;
   for( i = 0;  i  < n; i++)
   {
        cin >> x[i];
        sum += x[i];
   }
    // if(sum < 0)
    // {
    //     sum = sum * -1;
    // }// ei part abs cara

    cout << abs(sum) << endl;
    // hoi gese but kemne header file tile jani na
   

    

    

    

  
   return 0;
}