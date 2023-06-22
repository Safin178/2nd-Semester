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
    //cin >> t;
    while(t--)
    {
       int a ,b;
       cin >> a>>b;
       char c;
       for(int i = 0; i < a; i++)
       {
            cin >> c;
            if(!(c >='0' && c<= '9'))
            {
                cout << "No"<<endl;
                return 0;
            }
       }
        cin >> c;
            if(c != '-')
            {
                cout << "No"<<endl;
                return 0;
            }
        for(int i = 0; i < b; i++)
       {
            cin >> c;
            if(!(c >='0' && c<= '9'))
            {
               cout << "No"<<endl;
                return 0;
            }
       }
       cout<<"Yes"<<endl;
    //normal approach done now string approach e jiinish ta 1 loop er modde kortam arki

    }
   
  
   

    

    

    

  
   return 0;
}