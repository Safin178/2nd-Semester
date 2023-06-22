#include<bits/stdc++.h>
using namespace std;

int main() 
{
  /*

  */
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        int i, j, m =INT32_MAX;

        for(i = 0; i < n; i++)
            cin >> a[i];

            for(i = 0; i < n-1; i++)
            {
                int sum = 0;
                for( j = i+1; j < n; j++)
                {
                    sum = ( a[i] + a[j]+j-i);
                    if(m > sum)
                    {
                        m = sum;
                    }
                }
            
            }
            cout << m <<endl;
    }
   
  //9 min 
  //17 sec only read question.lol
   

    

    

    

  
   return 0;
}