// OOP
#include<bits/stdc++.h>
using namespace std;

//https://telegra.ph/Assignment-1-1221-07-12

class Circle {
    public:
    int radius;

    void Setradius(int r) { 
        radius = r;
    }

    double Cal_area(){
        return 3.14159 * radius * radius;
    }

    void details(){
        cout << "Radius = " << radius << "\n";
        cout << "Area = " << Cal_area() << "\n";
    }



};

int main(){
   Circle a;

   a.Setradius(5);

   a.details();






   return 0;
}