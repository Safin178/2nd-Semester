// OOP
//https://telegra.ph/Assignment-1-1221-07-12
#include<bits/stdc++.h>
using namespace std;


class Rectangle{
    private : 
        int length;
        int width;
    public:

        void set_length(int len)
        {
             length = len;
        }
        void set_width(int wid){
            width = wid;
        }
        
        int get_length()
        {
            return length;
        }
         int get_width()
        {
            return width;
        }

        int area()
        {
            return length * width ;
        }
        int perimeter()
        {
            return (length + width); // sotro jani na antaje
        }

        



};

int main()
{
   Student m;

   string n , id;
   cin >> n >> id;

    m.setname(n);
    m.setID(id);

    cout << "My name : " << m.getname() << endl;

    cout << "My ID : " << m.getID() << endl;






   return 0;
}