
//! 1d------------------------------------------------------------------
/*
#include<iostream>
using namespace std;

class student{
    //public: // we have to make it pubilc.
    int a;
    float f;//error found : a and f are private members so s1.f can't access it
public:
    void show(){
        cout << a << endl;
    }
};
 main()//error found : main function must return int. so int main()
{
    student s1;
    s1.f = 2.5;
    s1.show();
    //and here return 0;
    
}*/

/*
// ! ans :
#include<iostream>
using namespace std;

class student{
    public:
    int a;
    float f;
    void show(){
        cout << a << endl;
    }
};
int main()
{
    student s1;
    s1.f = 2.5;
    s1.show();
     return 0;
    
}

*/

