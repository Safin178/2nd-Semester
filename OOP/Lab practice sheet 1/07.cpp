// CPP
#include<bits/stdc++.h>
using namespace std;

class Area{
    int length, breadth;//private

    public:

    Area(int x, int y)//creater a constructor
    {
        length = x;
        breadth = y;
    }
   
    int returnArea()
    {
        return (length*breadth);
    }
};

int main()
{
   
    int p, q;
    cin >> p >> q;// ! keyboard // COOL COMMENT

     Area a(p,q);// ? possible , yes
     
      cout << a.returnArea() << endl;



   return 0;
}