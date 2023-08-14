// CPP
#include<bits/stdc++.h>
using namespace std;

class Triangle{
    public:
    int x, y, z;
    Triangle(int a, int b, int c)//ig eibabhe kore
    {
        x = a;
        y = b;
        z = c;
    }

    void print_area()
    {
        int s = x+y+z;
        cout << "Area = ";
        cout <<  sqrt(((double)s * (s-x)* (s-y) * (s-z) )) << endl;//not sure formula ki
    }
    void print_perimeter()
    {
        cout << "Perimeter = ";
        cout << x+y+z << endl;
    }




};

int main()
{

  Triangle dipto(3,4,5);
 
  dipto.print_area();

  dipto.print_perimeter();



   return 0;
}
/*        ／＞　　フ
　　　　　| 　_　 _ |
　 　　　／` ミ＿Yノ     meow
　　 　 /　　　 　 |   
　　　 /　 ヽ　　 ﾉ  
　 　 │　　|　|　|
　／￣|　　 |　|　|    
　| (￣ヽ＿_ヽ_)__)   
　＼二つ
*/