//----------- Bismillahir Rahmanir Raheem -------------/
#include<bits/stdc++.h>
using namespace std;

typedef vector<long long> vl;
typedef vector<int> vi;

#define all(v)	   ((v).begin()), ((v).end())
#define sz(v)	   ((int)((v).size()))
#define ll         long long
#define pb         push_back
#define nl         '\n'
#define yes        cout<<"YES\n"
#define no         cout<<"NO\n"
#define ryes       {cout<<"YES\n";return;}
#define rno        {cout<<"NO\n";return;}
#define vit        vector<int>::iterator  
#define forcin(n)  for(auto &x : n) cin>>x;
#define forcout(n) for(auto x : n) cout << x << " ";
#define set_sail    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ever       ;1;
#define ff         first
#define ss         second
#define mp make_pair
void print(auto v2, string s = "")
{
	cout<<s;
	for (int i = 0; i < (int)v2.size(); ++i)
			cout<< v2[i] <<" ";
		cout<<"\n";
}
void printpv(auto v2, string s = "")
{
	cout<<s;
	for (int i = 0; i < (int)v2.size(); ++i)
			cout<< v2[i].ff <<" " <<v2[i].ss << nl;
		cout<<"\n";
}

/*        ／＞　　フ
　　　　　| 　_　 _ |
　 　　　／` ミ＿Yノ     meow
　　 　 /　　　 　 |   
　　　 /　 ヽ　　 ﾉ  
　 　 │　　|　|　|
　／￣|　　 |　|　|    
　| (￣ヽ＿_ヽ_)__)   
　＼二つ
*/

void solve()
{
    int n, k,l;
    cin >> n >> k;
    l = k;
    string s;
    cin >> s;
    sort(all(s));
    //cout << s << nl; 
    map<char,int>m;
    for(int i = 0 ; i < sz(s); i++)
    {
        m[s[i]]++;
    }
   // cout << n <<" "<<k << nl;
    vector<pair<int,char>> v;
    for(auto u : m)  
    {
       // cout << u.ff << " " << u.ss << nl;
        v.pb(mp(u.ss,u.ff));

    }
    sort(all(v));
    // int j = 0 ;
    // for(int i = 0 ;i <sz(v);)
    // {
    //     if(i >=k)break;
    //     if(v[i].ff & 1)
    //     {
    //         v[i].ff--;
    //         j++;
          
    //     }
    //       i++;
    // }
    // cout << j << nl;
    // int cnt = 0;
    // for(int i = 0 ; i < sz(v); i++)
    // {
    //     if(v[i].ff &1)cnt++;
    // }
    // if(cnt > 1)rno
    // else yes;
    //printpv(v);
    // upore korte caisi k shudu odd gula theke bad jabe jani na arekto cinta korle ig hoi jaito ,
    // beshi cintai korte partesi na

    for(int i = 0 ; i < sz(v); i++)
    {
        if(k >= v[i].ff)
        {
             k = k - v[i].ff;
            v[i].ff = 0;
           
        }
        else {v[i].ff = v[i].ff - k;break;}
    }
   // reverse(all(v));

    int cnt = 0;
    // printpv(v);
     for(int i = 0 ; i < sz(v); i++)
    {
         if(v[i].ff & 1)cnt++; // * (v[i] % 2 != 0 dileo hoito)
     }
     if((n-l)%2!=0 && cnt > 1)rno
     else if((n-l)%2==0 && cnt !=0)rno // * palindrome er length even hoile shob char er frequency even number or times hote hobe
     else ryes
     /*
     sort kore shob element raksi then k jotok pari biyog korsi then je je elemnt ase oikane
     count kore kore deksi odd number or elemnts koita
     kono palindrome er lenght odd hoile oikane only 1 ta char ei odd number of times takte parbe
     so ekon jodi AC na hoi taile jani na ki korbo.
     
     */

   



}

int main(){
     set_sail;
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}




