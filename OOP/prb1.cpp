// OOP
#include<bits/stdc++.h>
using namespace std;

//https://telegra.ph/Assignment-1-1221-07-12

class Circle {
    
    double radius;
    public:
    void Setradius(double r) { 
        radius = r;
    }

    double Cal_area(){
        return (3.14159 * (radius) * (radius));
    }

    void details(){
        cout << "Radius = " << radius << "\n";
        cout << "Area = " << fixed << setprecision(2) <<  Cal_area() << "\n";
    }



};

int main(){
   Circle a;
   double n ; cin >> n;

   a.Setradius(n);

   a.details();






   return 0;
}