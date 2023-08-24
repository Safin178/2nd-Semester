
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
//// ! ans :
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

//! 1d or -----------------------------------------------------------------------------------------------------------------
/*
// CPP
#include<iostream>
using namespace std;
class student
{
    int a = 5;
public:
    float f;
    void show();
};
void student::show()
{
    cout << a << endl;
}

int main()
{
  student s1;
  s1.f = 2.5;
  s1.show(); //output 5

   return 0;
}
//// !expalin : The error in the code is in the show(). Since show() is a member function of the 
//          student class, it should be defined inside the class. (Ezaz bhai)
//          or we could use scope resulation oparator( :: )
//          to define the function show() outside of the class

*/

//! 2c --------------------------------- ------------------------------------   ---------------------------------    -------------------------
/*#include<iostream>
using namespace std;

class student
{
    public:
    int y;
     string x;
};
int main()
{
  student a = { 89, "hi"} ;//89 age tai y = 89 boshi jabe
  student b = a;
  cout << a.x << " " << b.y << endl;
   return 0;
}
experiment : output  : hi 89
*/

// real 2c(i)------------------


/*
#include<iostream>
using namespace std;

class X
{
    public:
    int x;
};
int main()
{
  X a = {10};
  X b = a;
  cout << a.x << " " << b.x << endl;
   return 0;
}
output : 10 10
*/

// 2c (ii) ---------------------------- ------------------------
/*
#include<iostream>
using namespace std;

class X
{
    int x;
    public:
    X(){}
    X(int x){x = x;}
    void show(){
        cout << x << endl;
    }
};
int main()
{
  X a , b(4);
    b.show();
   return 0;
}
// output : garbage value // because x variable is more than once and when we write x = x, x doesn't points towards
//          the private member but it points towards argument of X , X(int x), so private member x remains garbage

*/



