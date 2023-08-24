// * i use an extension in VS code , name: better comments, install it then you will understand comments better
//Name: Better Comment VS Marketplace Link: https://marketplace.visualstudio.com/items?itemName=aaron-bond.better-comments


//? SOLVE :

// ! 2b---------------------------------------------------------------------------------------------
/*
#include<iostream>
using namespace std;
class flower{

    int PL, LL;
public:
    flower(int PL, int LL)
    {
        this -> PL = PL;//eikane this diye korte hobe this -> PL, eikane PL upore private kora PL ke mean kortese
        this -> LL = LL;
    }
    void show()
    {

        cout << PL << " " << LL << endl;
    }


};
int main()
{
    flower f1(12,10), f2(1,55);
    f1.show();
    return 0;
}
explain : 

  flower(int PL ,int LL){ 
        this -> PL = PL; // error found:there are same variable more than once for that reason we have to use this keyword  
        this -> LL = LL; // which is a pointer pointing to the private variable "this" keyword store the address of current object 
  }

*/


// ! 2C ----------------------------------------------------------------------------------
/*
#include<bits/stdc++.h>
using namespace std;
class Time{
    
   int hour , minutes;
   public:
  /*
   Time(int x, int y) // ! eibabe o likte partam consturctor ta
   {
       hour = x;
       minutes = y;
   }
   
   *//* 
   
   //! arek biroktikor ena comment gula
   
        Time(int hour , int minutes)
        {
            this -> hour = hour;
            this -> minutes = minutes;
        }
   
    friend void addTime(Time ,Time ); // ! private data o access korte partese //tarpor object name na likleo run kortese
};
 
 void addTime(Time t1, Time t2)
   {
    int Hr = t1.hour +t2.hour + (t1.minutes + t2.minutes)/60;
    int mn = (t1.minutes + t2.minutes) % 60;
    cout << Hr << " Hour " << mn << " Minutes " << endl; 
      
   }
int main()
{
   Time T1(12, 10), T2(1, 55);
   addTime(T1, T2);
    //output 14 Hour 5 Minutes 

  
   
   return 0;
} 
*/




//! 2D---------------------------------------------------------------------------  ------------------------------------




/*
#include<bits/stdc++.h>
using namespace std;
class Student{

    int x;
    public:
    void get()
    {
        
        cin >> x; // ami 1st e int y likhe then cin >> y; x = y korsilam kinto dekhi eirokom o likha jai
        
        cout << x << endl;
    }
};

int main()
{
  Student a[100];

  for(int  i= 0 ;  i < 5 ; i++) //i < 100 hobe ami test er jonno 5 liksi
  {
    a[i].get();
  }



   return 0;
}

*/


//! 2D or ---------------- ----------------------- ------------------------- ---------------------- 
/*
#include<bits/stdc++.h>
using namespace std;
class Employee{

    string name;
    int year;
    int salary; // ! salary output ei nai tai nicci na input
    string address;
    public:
    void get()
    {
        cin >> name;
        cin >> year;
        //cin.ignore(); //! babsilam eta dite hobe kinto na dileo hocce
        getline(cin ,address); //getline karon address e space takte pare
        
    }

    void display()
    {
        cout << name << "   " << year << "  " << address << endl;
    }
};

int main()
{
  Employee a[100];

  for(int  i= 0 ;  i < 2 ; i++) //i < 100 hobe ami test er jonno 2 liksi
  {
        a[i].get();
        a[i]. display();
  }



   return 0;
}
*/

// ! 3a ----------- ------------------- ------------------ ---------------------------------------------------------

//confused  
#include<iostream>
using namespace std;

class Employee{
    
    int id, salary;
    public:
    
    Employee(int x, int y)
    {
         id = x;
         salary = y;
    }
    Employee( Employee &E2)
    {
     id = E2.id;
     salary = E2.salary;  
     //cout << "HI" << endl; 
    }
    void setid(int x)
    {
        salary = x;
    }
    int getid()
    {
        return id;
    }
    int getsalary()
    {
        return salary;
    }
};

int main()
{
  Employee E1(10,3000);
  Employee E2=E1;
    cout << E1.getid() << "  " << E1.getsalary() << endl;
    cout << E2.getid() << "  " << E2.getsalary() << endl;
   return 0;
}
