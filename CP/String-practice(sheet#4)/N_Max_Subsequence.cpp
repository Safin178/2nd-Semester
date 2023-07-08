#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(n) (int)(n).size()
void solve()
{
    int n;

    string s;
    cin >> n >> s;
    int f = 0, cnt = 0;

    for(int i = 0; i< sz(s); i++)//🥴i feel guilty for this
    {
        if(s[i] != s[i+1])
        {
            cnt++;
        }

    }

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