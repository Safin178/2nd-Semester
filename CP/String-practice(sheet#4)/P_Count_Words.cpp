#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(n) (int)(n).size()
void solve()
{

    string s;//matha karap kori dewar moto ekta problem
    getline(cin,s);
    int i ,cnt = 1, f = 0;
    for( i = 0; i<sz(s) ; i++)
    {
        if(((s[i] <= 'z') && (s[i] >= 'a')) || ((s[i] <= 'Z') && (s[i] >= 'A')))
        {
            f = 1;
        }

        if((f==1) &&((((s[i+1] <= 'z') && (s[i+1] >= 'a')) || ((s[i+1] <= 'Z') && (s[i+1] >= 'A')))) && ( (s[i] == ' ') || (s[i] == '!') || (s[i] == '.') || (s[i] == ',' )|| (s[i] == '?')))
        {
            cnt++;
        }
       
    }
    //if(!((s[i+1] <= 'z') && (s[i+1] >= 'a')) || ((s[i+1] <= 'Z') && (s[i+1] >= 'A')))cnt--;
    
    cout << cnt;

   




}

void solve2_cupcode(){
    string s;
    getline(cin,s);
    int i,cnt=0, f=0,c=0;
    for(i=0;i <= sz(s);i++)
    {
        if( ((s[i-1]>'Z' && s[i-1]<'a') || s[i-1]<'A' || s[i-1]>'z'))
        {
           continue;
           
        }
        else if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z')){c++;}
        else cnt++;
    }
   if((s[i-1]>='A' && s[i-1]<='Z') || (s[i-1]>='a' && s[i-1]<='z'))
    {
        //cnt++;

    }
    cout << cnt ;
}

int main(){
    int t=1;
    //cin >> t;          // removr '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}