#include<iostream>
using namespace std;
class flower{

    int PL, LL;
public:
    flower(int PL, int LL)
    {
       // PL = PL;
        this.PL = PL;
        //LL = LL;
        this.LL = LL;
    }
    void show(){

        cout << PL << " " << LL << endl;

    }


};

int main()
{
    flower f1(12,10), f2(1,55);
    f1.show();
    return 0;
}
