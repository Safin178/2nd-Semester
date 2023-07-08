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
    //huh how dumb i am , to avoid depression i am try to solve a problem.

    string s;
    cin >> s;//give up WA ON t3 next time 

    int a[26], i,j= 5;
    for(i = 0 ; i < 26; i++)
    {
        cin >> a[i];   
    }
    int sum = 0;
    //i will do the way i always think 1st, brute force hmmhmm.
   // i = 8;

   // int x = (int)abs(a[j] - a[s[i-1]-'a']) + (int)abs(a[j] - a[s[i+1]-'a']);

    for(i = 0 ; i  < sz(s) ; i++)
    {
        if(s[i] == '?' && s[i+1] != '?')
        {
            int min = INT32_MAX, pos;
            for(j = 0 ; j < 26; j++)
            {
                int x = (int)abs(a[j] - a[s[i-1]-'a']) + (int)abs(a[j] - a[s[i+1]-'a']);
                if(x < min)
                {
                    pos  = j;
                    min = x;
                }
            }
            s[i] = (char)(pos+'a');
        }
        else if(s[i] == '?' && s[i+1] == '?')
        {
            int k = s.find_first_not_of('?',i);
        
                if(k == -1 ){ replace(s.begin()+i,s.end(),'?',(char)s[i-1]);break;}
                
                int min = INT32_MAX, pos;
                for(j = 0 ; j < 26; j++)
                {
                    int x = (int)abs(a[j] - a[s[i-1]-'a']) + (int)abs(a[j] - a[s[k]-'a']);
                    if(x < min)
                    {
                        pos  = j;
                        min = x;
                    }
                }
                s[i] = (char)(pos+'a');
                replace(s.begin(),s.begin()+k,'?',(char)(pos+'a'));

                

        }

    }

    for(i = 0 ;i < sz(s)-1; i++)
    {
        sum += (int)abs(a[s[i]-'a'] - a[s[i+1]-'a']);
    }
    cout << sum<<endll <<s;



}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}