// CPP
#include<bits/stdc++.h>
using namespace std;



class Time{
    
   int hour , minutes;
   public:
  
   Time(int x, int y)
   {
       hour = x;
       minutes = y;
   }
    friend void addTime(Time ,Time );
  


};
 
 void addTime(Time t1, Time t2)
   {
      cout << t1.hour << " " << t2.hour <<endl;
      cout << t1.minutes << " " << t2.minutes << endl;
   }
int main()
{
   Time T1(178, 10), T2(1, 55);
   addTime(T1, T2);


  
   
   return 0;
}



