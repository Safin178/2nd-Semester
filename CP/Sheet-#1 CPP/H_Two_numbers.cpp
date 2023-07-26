// CPP
#include<bits/stdc++.h>
using namespace std;


int main()
{
     int x , y;
    cin >> x >> y;
    cout << "floor " << x << " / "<<  y << " = ";
    cout << floor((double)x/y) << endl;
    cout << "ceil " << x << " / "<<  y << " = ";
    cout << ceil((double)x/y) << endl;
    cout << "round " << x << " / "<<  y << " = ";
    cout << round((double)x/y) << endl;



   return 0;
}