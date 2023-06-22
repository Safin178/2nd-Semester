// https://www.geeksforgeeks.org/binary-search/?ref=lbp
//what if low and high , i mean l and h is long long then we have to change how we
// write m = (l+h)/2; , then we have to write 

// m = l+((h-l)/2);
// or int mid = (low + high) >>> 1; (2^1 dara bag //bitwise porte hobe baji)

// https://www.geeksforgeeks.org/problem-binary-search-implementations/

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
         int n , q, i;
         cin >> n >> q;
         int a[n];
         for(i = 0; i< n; i++)
            cin >> a[i];

            sort(a, a+n);
           while(q--)
           {
                 int l = 0,m,h= n-1;
       
                int f = 0, x;
                cin >> x;
                while(l <= h)
                {
                    m = (l+h)/2;
                    if(x == a[m]) 
                        {f = 1; break;}
                    else if(a[m] > x)h = m-1;
                    else if(a[m] < x) l = m+1;

                }
                if(f == 1)cout<< "found" << endl;
                else cout << "not found"<<endl;

           }
            



    }
   
  
   

    

    

    

  
   return 0;
}