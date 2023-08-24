// CPP
/*
#include<bits/stdc++.h>
using namespace std;

class A{
   
   int i;
   
    public:
   
 void set(A ob, int x){
    ob.i = x;
}

};



int main()
{
   A ob;
   ob.set(ob,6);
   //cout << ob.i << endl;
   return 0;
  



   return 0;
}
*/
#include<iostream>
using namespace std;
class A{
    public:
    int i;
};

void set(A &ob,int x){
    ob.i=x;
    cout << ob.i << endl;
}

int main(){
    A ob;
    set(ob,6);
      
    return 0;
}