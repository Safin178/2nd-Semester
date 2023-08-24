// ! 2b
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


};//
int main()
{
    flower f1(12,10), f2(1,55);
    f1.show();
    return 0;
}
*/

// ! 2C

#include<bits/stdc++.h>
using namespace std;
class Time{
    
   int hour , minutes;
   public:
  /*
   Time(int x, int y)// ! eibabe o likte partam consturctor ta
   {
       hour = x;
       minutes = y;
   }*/
   
        Time(int hour , int minutes)
        {
            this -> hour = hour;
            this -> minutes = minutes;
        }
   
    friend void addTime(Time ,Time );// ? private data o access korte partese //tarpor object name na likleo run kortese
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



