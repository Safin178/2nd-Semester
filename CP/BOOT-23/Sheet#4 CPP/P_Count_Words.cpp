#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(n) (int)(n).size()
void solve()
{

    string s;
    getline(cin,s);
    int i ,cnt = 1, f = 0;
    for( i = 0; i<sz(s) ; i++)
    {
        if(((s[i] <= 'z') && (s[i] >= 'a')) || ((s[i] <= 'Z') && (s[i] >= 'A')))
        {
            f = 1;//!!!!meep
        }

        if((f == 1) &&((((s[i+1] <= 'z') && (s[i+1] >= 'a')) || ((s[i+1] <= 'Z') && (s[i+1] >= 'A')))) && ( (s[i] == ' ') || (s[i] == '!') || (s[i] == '.') || (s[i] == ',' )|| (s[i] == '?')))
        {
            cnt++;
        }
       
    }
    //if(!((s[i+1] <= 'z') && (s[i+1] >= 'a')) || ((s[i+1] <= 'Z') && (s[i+1] >= 'A')))cnt--;
    
    cout << cnt;

   




}
int main(){
    int t=1;
    //cin >> t;          // removr '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}