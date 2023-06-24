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

    for(int i = 0; i < sz(s); i++)
    {
        if(s[i] != s[i+1])
        {
            cnt++;
        }

    }
    /*
    5
    aaaaa 
    ei case er ans 0 mone korleo 1 hobe karon a nijei ekla ekta ans

    */

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