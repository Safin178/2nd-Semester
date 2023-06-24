#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(n) (int)(n).size()
void solve()
{
    int a[10]= {0};

    string s;//practice this with shortcuts 
    cin >> s;
    int f = 0, cnt =0;

    for(int i = 0; i< sz(s); i++)
    {
        if(s[i] == 'E' || s[i] == 'e')
        {
             if(s[i+1] == 'G' || s[i+1] == 'g')
             {      
                if(s[i+2] == 'Y' || s[i+2] == 'y')
                {         
                    if(s[i+3] == 'P' || s[i+3] == 'p')
                    {
                        if(s[i+4] == 'T' || s[i+4] == 't')
                        {
                            cout << " ";
                            i +=4;
                            continue;
                        }
                    }
                }
             }
        }
       cout << s[i];
     

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