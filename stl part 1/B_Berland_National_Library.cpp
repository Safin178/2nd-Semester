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

void solve() // ! WA 
{
    int n;
    map<int, bool> m;
    cin >> n;
    int jaiga = 0,ans = 0;
    for(int i = 0 ; i < n; i++)  
    {
        char c;
        int x;
        cin >> c >> x;
        if(c == '-' && m[x] == 0)
        {
            jaiga++;
           // ans++;
            
        }
        if(c == '+' && jaiga > 0)
        {
            jaiga--;
           // ans--;
            m[x] = 1;
        }
        if(c == '+' && m[x] == 0 )
        {
            if(jaiga==0)
           jaiga++;
           else jaiga--;
            //ans++;
             m[x] = 1;
        }
        if(c == '-' && m[x] == 1)
        {
            //if(jaiga == 0)jaiga++;
            //jaiga++;
            //ans--;
        }
        ans = max(jaiga,ans);
         // if(jaiga > 0)ans++;

    }

    cout <<ans << nl;


}
void solve_editorial()
{
    
    /*  https://codeforces.com/blog/entry/19604
        To answer the queries correct, we need to know if the person is still in the library. 
        For that purpose we will use in array of type bool.
        Also we will store two variables for the answer and ''current state'' (it will store the current number of people in the library). 
        Let's call them ans and state respectively.
        Thus, if we are given query  + ai then we should increase state by one, mark that this person entered 
        the library (in[ai] = true) and try to update the answer (ans = max(ans, state)).

        Otherwise we are given  - ai query. If the person who leaves the library, was in there,
        we should just decrease state by one.
        Otherwise, if this person was not in the library (in[ai] == false) and leaves now,
        he entered the library before we started counting. It means we should increase the answer by one anyway.
        Also one should not forget that it is needed to mark that the person has left the library (in[ai] = false).
    */
    int n;
    cin >> n;
    map<char,int>m;
    int ans = 0;
    int koi_jon = 0;
    while(n--)
    {
        char c; int x;
        cin >> c >> x ;
        if(c == '+')
        {
            koi_jon++;
            ans = max(ans, koi_jon);
            m[x]= true;
        }
        else if(c == '-' && m[x] == true)// mani manush ta + hoye dukse ekn ber hocce
        {
            koi_jon--;
            m[x]=false;
        }
        else if(c == '-' && m[x] == false)// dukei nai, age theke cilo ekn cole gese
        {
            m[x] = false;
            koi_jon--;// ig etai bhul hoise je balance hocce na shudu ekjon cole gele ager code e eta di nai
            ans++;
        }
        

    }
    cout << ans << nl;



}

int main(){
     set_sail;
    int t=1;
   // cin >> t;          // remove '//' for testcase
    while(t--){
        //solve();
        solve_editorial();
    }
    return 0;
}




