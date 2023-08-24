// CPP
#include<bits/stdc++.h>
using namespace std;

class Student{

    int x;
    public :
    void get()
    {
        
        cin >> x;
        
        cout << x << endl;
    }
};

int main()
{
  Student a[100];

  for(int  i= 0 ;  i < 5 ; i++)
  {
    a[i].get();
    
  }



   return 0;
}