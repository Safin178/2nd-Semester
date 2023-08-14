// CPP
#include<bits/stdc++.h>
using namespace std;

class Area{
    int length, breadth;//private

    public:

    void setDim(int x, int y)
    {
        length = x;
        breadth = y;

    }
    int getArea()
    {
        return (length*breadth);
    }
};

int main()//done
{
    Area a;
    int p, q;
    cin >> p >> q;


    a.setDim(p , q);

    cout << a.getArea() << endl;



   return 0;
}