// Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

//typedef data type define korae
typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

#define bismillah ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(a) (a).begin(),(a).end()
#define pb push_back 
#define forcin(n) for(auto &x : n) cin >> x
#define forcout(n) for(auto x : n) cout << x << " "
#define sz(n) (int)n.size()
#define nl '\n'
#define YES cout<< "YES\n"
#define NO cout<< "NO\n"
#define F first
#define S second
#define mem(a,b) memset(a,b,sizeof(a))      // 0 n -1 only
#define gcd(a,b) __gcd(a,b)
#define set_pre(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define mp make_pair
#define ever       ;1;

const double PI = acos(-1);
const double eps = 1e-9;

void printVec(vector<int> v , string s=""){
    cout << s;
    for(int i=0;i<(int)v.size();i++)
        cout << v[i] << " ";
    cout << "\n";
}

bool is_vowel(char ch){
    string s="aeiouAEIOU";
    for(int i=0;s[i];i++){
        if(s[i]==ch){
            return 1;
        }
    }
    return 0;
}

//Debugger
 //pair
template < typename F, typename S >ostream& operator << ( ostream& os, const pair< F, S > & p ) {return os << "(" << p.first << ", " << p.second << ")";}
//vector
template < typename T >ostream &operator << ( ostream & os, const vector< T > &v ) {os << "{";for(auto it = v.begin(); it != v.end(); ++it) {if( it != v.begin() ) os << ", ";os << *it;}return os << "}";}
//set
template < typename T >ostream &operator << ( ostream & os, const set< T > &v ) {os << "[";for(auto it = v.begin(); it != v.end(); ++it) {if( it != v.begin() ) os << ", ";os << *it;}return os << "]";}
//multiset
template < typename T >ostream &operator << ( ostream & os, const multiset< T > &v ) {os << "[";for(auto it = v.begin(); it != v.end(); ++it) {if( it != v.begin() ) os << ", ";os << *it;}return os << "]";}
//map
template < typename F, typename S >ostream &operator << ( ostream & os, const map< F, S > &v ) {os << "[";for(auto it = v.begin(); it != v.end(); ++it) {if( it != v.begin() ) os << ", ";os << it -> first << " = " << it -> second ;}return os << "]";}
#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)void faltu () {cerr << endl;}
//array
template <typename T>void faltu( T a[], int n ) {for(int i = 0; i < n; ++i) cerr << a[i] << ' ';cerr << endl;}

template <typename T, typename ... hello>void faltu( T arg, const hello &... rest) {cerr << arg << ' ';faltu(rest...);}
 
/*____________________________________________________________________________________________________________________________________*/



void solve(){
    ll x1,x2,y1,y2;
    cin >> x1>>y1>>x2>>y2;
    ll a1,a2,b1,b2;
    cin >> a1>>b1 >> a2>>b2;
    pair<double,double> c1,c2;
   
    
     c1.F = (x1+x2)/2.0;
     c1.S = (y1+y2)/2.0;
     c2.F = (a1+a2)/2.0;
     c2.S = (b1+b2)/2.0;
     //center sesh

    //  double r11 = sqrt( ((c1.F-x1)*(c1.F-x1) + (c1.S - y1)*(c1.S - y1)) );
    //   double r22 = sqrt( (c2.F - a1)*(c2.F - a1) + (c2.S - b1) * (c2.S - b1) );
    //   cout << r11 << " " << r22 << nl;
    double dx = x1- x2;
    double dy = y1- y2;
    double r1 = (sqrt(dx*dx + dy*dy ))/2.0;
    double da = a1 - a2;
    double db = b1 - b2;
    double r2 = (sqrt(da*da + db * db)/2.0);

   // cout << r1 << " " << r2 << nl;
     double sum = r1 + r2;
     double ans = sqrt(((c1.F - c2.F)*(c1.F - c2.F) + (c1.S- c2.S )*(c1.S - c2.S)));
    // cout << sum << " " << ans << nl;
     if(sum >= ans)YES;
     else NO;

    
}

int main(){
    
    bismillah
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}
