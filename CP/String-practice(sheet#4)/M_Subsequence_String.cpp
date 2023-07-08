#include<bits/stdc++.h>
using namespace std;

typedef vector<long long> vl;
typedef vector<int> vi;

#define all(v)	((v).begin()), ((v).end())
#define sz(v)	((int)((v).size()))
#define ll long long
#define pb push_back
#define endll '\n'
#define CY cout<<"YES\n";
#define CN cout<<"NO\n";
#define CYR cout<<"YES\n";return;
#define CNR cout<<"NO\n";return;
#define vit vector<int>::iterator  
#define forcin(n) for(auto &x : n) cin>>x;
#define forcout(n) for(auto x : n) cout << x << " ";
void printVec(vector<int> v2, string s = "")//vector ke print kore just printVec(v) likle hobe
{
	cout<<s;
	for (int i = 0; i < (int)v2.size(); ++i)
			cout<<v2[i]<<" ";
		cout<<"\n";
}

void solve()
{
    string s;
    cin >> s;
    int a[10];
    a[0] = s.find_first_of("h");
    a[1] = s.find_first_of("e",a[0]);//e er 1st e kon position e ase oita kuja shuro kore a[0] theke
    a[2] = s.find_first_of("l",a[1]);
    a[3] = s.find_first_of("l", a[2]+1);
    a[4] = s.find_first_of("o",a[3]);
    for(int  i = 0 ; i < 4; i++)
    {
        if(a[i] == -1){CNR}
        if(a[i] >= a[i+1]) //strictly increasing kina check
        {
            cout << "NO\n";
            return;
        }
        
    }
    cout << "YES\n";



}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}

void solve2()
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

void cupcode(){//bhoi lage baji eigula dekle😆😆
    string s,t="hello";
    int cnt=0;
    cin >> s;
    string :: iterator it,is;
    is=s.begin();
    for(it=t.begin();it!=t.end();it++){
        for(;is!=s.end();is++){
            if(*it == *is){
                cnt++;
                is++;
                break;
            }
        }
    }
    if(cnt==sz(t)) cout << "YES\n";
    else cout <<"NO\n";
}