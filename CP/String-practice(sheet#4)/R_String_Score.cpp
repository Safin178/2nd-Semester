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
    int  n ; 
    cin >> n;

    string s;
    cin >> s;
    int sum = 0;
    
    for(int i = 0 ; i < sz(s); i++)
    {
        if(s[i] == 'V')
        {
            sum += 5;
        }
        else if(s[i] == 'W')
        {
            sum += 2;
        }
        else if(s[i] == 'X')
        {
            //s.erase(s.begin()+i+1);
            i++;
            continue;
        }
        else if(s[i] == 'Y')
        {
            char c;
            c = s[i+1];
            //s.erase(s.begin()+i+1);
            i++;//ashole i++ cilo na , emne uporer ta cilo , tle kaccilam tai eita korsi, nijer upor obak lagtese kemne matai ashche😅
            s.push_back(c);
            
        }
        else if(s[i] == 'Z')
        {
            if(s[i+1] == 'V')
            {
               //  s.erase(s.begin()+i+1);
               i++;
                 sum /= 5;
            }
            else if(s[i+1] == 'W')
            {
               // s.erase(s.begin()+i+1);
               i++;
                 sum /= 2;
            }
        }
    }
   
    cout << sum << endll;

}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}