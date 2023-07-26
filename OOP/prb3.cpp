// OOP
//https://telegra.ph/Assignment-1-1221-07-12
#include<bits/stdc++.h>
using namespace std;


class Student{
        private : // ig eta na likleo colbe ,by default jeheto private thake
        string name;
        string ID;
        public:

        void setname(string s)
        {
            name = s;
        }
        void setID(string id){
            ID = id;
        }
        
        string getname()
        {
            return name;
        }
         string getID()
        {
            return ID;
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