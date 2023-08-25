#include<iostream>
#include<string.h>
using namespace std;
class employee
{
private:
    int year;
    string name,address;
public:
    void input(){
    cin>>year;
    cin>>name;

   getline(cin,address);
    //cin>>address;


    }

    void display(){


    cout<<name<<" "<<year<<" "<<address<<endl;

    }



};
int main(){

employee a[2];
for(int i=0;i<2;i++){

    a[i].input();
}
for(int i=0;i<2;i++){


    a[i].display();

}

return 0;


}
