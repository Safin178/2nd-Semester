// CPP
#include<bits/stdc++.h>
using namespace std;

class Employee{
    public:
    int id, salary;
    public:
    Employee(int id, int salary)
    {
        this-> id = id;
        this->salary = salary;
    }
    Employee(Employee &x)
    {
     id = x.id;
     salary = x.salary;   
     
    }
};

int main()
{
  Employee E1(10,3000);
  Employee E2 = E1;
  E1.salary = 2300;
  cout << E1.salary << endl;
    cout << E2.salary << endl;


   return 0;
}