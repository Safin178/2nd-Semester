#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    string s;
    int h=0,e=0,l=0,o=0;
    cin >> s;

    for(int i = 0; i < (int)s.size(); i++)
    {
        if(s[i] == 'h' || h == 1)
            {
                h=1;
                if(s[i] == 'e' || e == 1)
                {
                         e=1;
                        if(s[i] == 'l' || l >= 2)
                        {
                            l++;
                             if(s[i] == 'o' || o == 1)
                             {
                                printf("YES\n");
                                return;
                             }
                }
                        }
            }
    }

    printf("NO\n");









}
int main(){
    int t=1;
    //cin >> t;          // removr '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}