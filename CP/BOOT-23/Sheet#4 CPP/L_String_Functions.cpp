#include<bits/stdc++.h>
using namespace std;

#define ll long long
void solve()
{
    int n, t;
    cin >> n >> t;
    
    string s;
    cin >> s;

    string x;
    int l ,r;

    for(int i = 0; i <= t; i++)///while(t--) disilam mone kori oita te problem , ekon dekhi eitateo,
    {
       
        cin >> x ;
        if(x == "substr")
        {
            cin >> l >> r;
            cout << s.substr(l-1,r) << "\n";
        }
        else if(x == "sort")
        {
            cin >> l >> r;
            sort(s.begin()+l-1,s.begin()+r);
        }
        else if(x == "pop_back")
        {
           s.pop_back();
        }
        else if(x == "back")
        {
           cout << s.back() << "\n";
        }
        else if(x == "reverse")
        {
             cin >> l >> r;
            reverse(s.begin()+l-1, s.begin()+r);
        }
        else if(x == "front")
        {
           cout << s.front() << "\n";
        }
        else if(x == "push_back")
        {
           s.push_back('i');
        }
        else if(x == "print")
        {
            
            cin >> l;
           cout << s[l-1] << "\n";
        }

    }









}
int main(){
    int t=1;
    //cin >> t;          // removr '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}