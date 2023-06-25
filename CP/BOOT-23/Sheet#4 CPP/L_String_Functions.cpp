#include<bits/stdc++.h>
using namespace std;

#define ll long long
void solve()
{
    int n, t;
    cin >> n >> t;
    
    string s;
    char p;
    cin >> s;

    string x;
    int l ,r;
    
    while(t--)
    {
       
        cin >> x ;
        if(x == "substr")
        {
            cin >> l >> r;
            if(l >r) swap(l,r);

            cout << s.substr(l-1,r-l+1) << endl;

        }
        else if(x == "sort")
        {
            cin >> l >> r;
           if(l > r) swap(l,r);
           sort(s.begin()+l-1, s.begin() +r);
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
             
             if(l > r) swap(l,r);

            reverse(s.begin()+l-1, s.begin()+r);
        }
        else if(x == "front")
        {
           cout << s.front() << "\n";
        }
        else if(x == "push_back")//push back e ami input ni nai tai jamela hoccilo
        {
            cin >> p;
           s.push_back(p);
        }
        else if(x == "print")
        {
            
            cin >> l;
           cout << s[l-1] << "\n";
        }

    }
   // cout<< s;








}
int main(){
    int t=1;
    //cin >> t;          // removr '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}