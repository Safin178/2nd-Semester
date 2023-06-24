#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(n) (int)(n).size()
void solve()
{
    int a[10]= {0};

    string s;
    cin >> s;
    int f = 0, cnt =0;

    for(int i = 0; i< sz(s); i++)
    {
        if(s[i] == 'E' || s[i] == 'e')
        {
            a[0]++;
        }
        else if(s[i] == 'G' || s[i] == 'g')
        {
            a[1]++;
        }
        else  if(s[i] == 'Y' || s[i] == 'y')
        {
            a[2]++;
        }
        else if(s[i] == 'P' || s[i] == 'p')
        {
            a[3]++;
        }
        else if(s[i] == 'T' || s[i] == 't')
        {
            a[4]++;
        }

    }
    cnt = min(a[0],min(a[1], min(a[2], min(a[3], a[4]))));//hehe

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