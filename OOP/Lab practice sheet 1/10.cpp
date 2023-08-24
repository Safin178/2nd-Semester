// CPP
/*10.




//! Write a program to print the volume of a box by creating a class named 'Volume' with 
//!      an initialization list to initialize its length, breadth and height. (Just to make you familiar 
//!      with initialization lists)
*/
#include<bits/stdc++.h>
using namespace std;

class Volume{

    int len, bread, height;
    public:
    Volume(int x, int y, int z) : len(x),bread(y),height(z)
    {

    }
    void print()
    {
        cout << len <<endl;
        cout << bread << endl;
        cout << height << endl;
    }
};
int main()
{
    Volume a(10, 12, 14);
    a.print();
   return 0;
}
