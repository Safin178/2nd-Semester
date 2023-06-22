#include<bits/stdc++.h>
using namespace std;

int main() 
{
  /*
  1 6 3 7
    1 
    1 6
    1 6 3
    1 6 3 7
    6 
    6 3
    6 3  7
    3
    3 7
    7


  */
    int t=1;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        int i , j , k;
        for(i = 0; i < n; i++)
            cin >> a[i];

        for(i = 0; i < n ; i++)
        {
            for(j = i; j < n; j++)
            {
                int m = INT32_MIN;
                for(k = i; k <= j; k++)
                {
                    if(m < a[k])
                    {
                        m = a[k];
                    }
                }
                cout << m <<" ";
            }
        }
        cout << endl;

    }
   
  
   

    

    

    

  
   return 0;
}