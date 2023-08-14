// CPP
#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    string roll;
    string ph_no;
    string address;



};

int main()//done
{
  student shofi, Jamshed;//have to assign ,,not input

    shofi.roll = "C231062";
    shofi.ph_no = "0123456789";
    shofi.address = "Chittagong";
    Jamshed.roll = "C231059";
    Jamshed.ph_no = "0123456708";
    Jamshed.address = "Dhaka";



  cout << shofi.roll <<" " << shofi.ph_no <<" " <<  shofi.address  << endl;
  cout << Jamshed.roll <<" " << Jamshed.ph_no <<" " << Jamshed.address  << endl;




   return 0;
}